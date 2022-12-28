#include "servidor.h"
#include "ui_servidor.h"
#include "configuracion.h"
#include "ui_configuracion.h"
#include "mantenimientoequi.h"
#include "ui_mantenimientoequi.h"
#include "mantenimientopartidos.h"
#include "ui_mantenimientopartidos.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

Servidor::Servidor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Servidor), ui1(new Ui::Configuracion), ui2(new Ui::MantenimientoEqui), ui3(new Ui::MantenimientoPartidos)
{

    ui->setupUi(this);
    ui1->setupUi(w);
    ui2->setupUi(ME);
    ui3->setupUi(MP);
}

Servidor::~Servidor()
{
    delete ui;
}
void Servidor::Guardar(){
    QString Directorio = "D:/cuarto_periodo/Proyecto/Proyecto_Final_FernandoCastillo_32211027/Servidor";
    QString Filtro = tr("Text files (.txt);");
    QString Filename = QFileDialog::getSaveFileName(this,"Guardar Archivo",Directorio,
                                                    tr("All file (*.*); Text file (*.txt)"),
                                                    &Filtro);
    QString FileEncuentros = Filename.left(Filename.lastIndexOf("/"))+"/Encuentros.txt";
    if(Filename == ""){
        QMessageBox::critical(this,"Servidor","no selecciono el archivo");
        return;
    }

    QFile Escribe(Filename);
    QFile EscribeEn(FileEncuentros);
    QTextStream out(&Escribe);
    QTextStream outEn(&EscribeEn);
    if(!Escribe.open(QIODevice::WriteOnly) || !EscribeEn.open(QIODevice::WriteOnly)){
        QMessageBox::critical(this,"Servidor","no selecciono el archivo");
        return;
    }else{
        for(int i=0; i < Equi.size();i++){
            out<<Equi[i].Trama()<<endl;
        }
        for(int i=0; i < Par.size(); i++){
            outEn<<Par[i].Trama()<<endl;
        }
    }
    Escribe.close();
    EscribeEn.close();
}

void Servidor::Abrir(){
    QString Linea;
    QString Directorio = "D:/cuarto_periodo/Proyecto/Proyecto_Final_FernandoCastillo_32211027/Servidor";
    QString Filtro = tr("Text files (.txt);");
    QString Filename = QFileDialog::getOpenFileName(this,"Abrir Archivo",Directorio,
                                                    tr("All files (*.*);;Text files (*.txt)"), &Filtro);
    QString FileEncuentros = Filename.left(Filename.lastIndexOf("/"))+"/Encuentros.txt";
    if(Filename == ""){
            QMessageBox::critical(this,"Servidor","no selecciono el archivo");
            return;
    }
    QFile Lee(Filename);
    QFile LeeEn(FileEncuentros);
    if(!Lee.open(QIODevice::ReadOnly) || !LeeEn.open(QIODevice::ReadOnly)){
        QMessageBox::critical(this,"Servidor","no selecciono el archivo");
        return;
    }else{
        QTextStream stream(&Lee);
        Equipos E1;
        int i=0;
        while(!stream.atEnd()){
            Linea = stream.readLine();
            QStringList List = Linea.split("+");
            E1.setNombre(List.at(0));
            E1.setDirector(List.at(1));
            E1.setGrupo(List.at(2));
            E1.setPuntos(List.at(3).toInt());
            E1.setFederacion(List.at(4));
            E1.setPartidosJ(List.at(5).toInt());
            E1.setPartidosP(List.at(6).toInt());
            E1.setAusencias(List.at(7).toInt());
            E1.setGolesF(List.at(8).toInt());
            E1.setGolesE(List.at(9).toInt());
            E1.setJugadores(List.at(10));
            ui->lswSelecciones->addItem(E1.getNombre());
            Equi.push_back(E1);
            i++;
        }
        Encuentros E2;
        QTextStream streamEn(&LeeEn);
        int a=0;
        while(!streamEn.atEnd()){
            Linea = streamEn.readLine();
            QStringList List1 = Linea.split("[");
            E2.setEquipo1(List1.at(0));
            E2.setEquipo2(List1.at(1));
            E2.setFecha(List1.at(2));
            E2.setHora(List1.at(3));
            E2.setGoles1(List1.at(4).toInt());
            E2.setGoles2(List1.at(5).toInt());
            E2.setRemates1(List1.at(6).toInt());
            E2.setRemates2(List1.at(7).toInt());
            E2.setPosesion1(List1.at(8));
            E2.setPosesion2(List1.at(9));
            E2.setPases1(List1.at(10).toInt());
            E2.setPases2(List1.at(11).toInt());
            E2.setFaltas1(List1.at(12).toInt());
            E2.setFaltas2(List1.at(13).toInt());
            E2.setTarjetaA1(List1.at(14).toInt());
            E2.setTarjetaA2(List1.at(15).toInt());
            E2.setTarjetaR1(List1.at(16).toInt());
            E2.setTarjetaR2(List1.at(17).toInt());
            E2.setPosicionA1(List1.at(18).toInt());
            E2.setPosicionA2(List1.at(19).toInt());
            E2.setTirosEs1(List1.at(20).toInt());
            E2.setTirosEs2(List1.at(21).toInt());
            Par.push_back(E2);
            ui->twdEncuentros->insertRow(a);
            ui->twdEncuentros->setItem(a, 0, new QTableWidgetItem(Par[a].getEquipo1()));
            ui->twdEncuentros->setItem(a, 1, new QTableWidgetItem(Par[a].getEquipo2()));
            ui->twdEncuentros->setItem(a, 2, new QTableWidgetItem(Par[a].getFecha()));
            ui->twdEncuentros->setItem(a, 3, new QTableWidgetItem(Par[a].getHora()));
            a++;
        }
    }
    Lee.close();
    LeeEn.close();
}

void Servidor::ManteEquipo(){

    Equipos temp;

    if(ui->lswSelecciones->currentItem()){
        int pos = temp.Buscar(Equi,ui->lswSelecciones->currentItem()->text());
        ui2->letEquipo->setText(Equi[pos].getNombre());
        ui2->letDirector->setText(Equi[pos].getDirector());
        ui2->letGrupo->setText(Equi[pos].getGrupo());
        ui2->letPuntos->setText(QString::number(Equi[pos].getPuntos()));
        ui2->letFederacion->setText(Equi[pos].getFederacion());
        ui2->letPartidosJ->setText(QString::number(Equi[pos].getPartidosJ()));
        ui2->letPartidosP->setText(QString::number(Equi[pos].getPartidosP()));
        ui2->letAusencias->setText(QString::number(Equi[pos].getAusencias()));
        ui2->letGolesF->setText(QString::number(Equi[pos].getGolesF()));
        ui2->letGolesC->setText(QString::number(Equi[pos].getGolesE()));
        ui2->txtJugadores->setText(Equi[pos].getJugadores());
        ME->exec();
    }else{
        ME->exec();
    }

    if(ui2->rdbInsertar->isChecked()){
        int pos = temp.Buscar(Equi,ui2->letEquipo->text());
        if(ui2->letEquipo->text() != ""){
            if(pos == -1){
                Equi.push_back(Equipos(ui2->letEquipo->text(), ui2->letDirector->text(), ui2->letGrupo->text(),ui2->letPuntos->text().toInt(),ui2->letFederacion->text(),
                                       ui2->letPartidosJ->text().toInt(),ui2->letPartidosP->text().toInt(),ui2->letAusencias->text().toInt(),ui2->letGolesF->text().toInt(),
                                       ui2->letGolesC->text().toInt(), ui2->txtJugadores->toPlainText()));
                ui->lswSelecciones->addItem(ui2->letEquipo->text());
            }else{
                QMessageBox::critical(this,"Servidor","La seleccion ya estaba en el mundial previamente");
            }
        }else{
            QMessageBox::critical(this,"Servidor","Para insertar la seleccion debe ingresar el nombre de la seleccion");
        }


    }else if(ui2->rdbModificar->isChecked()){
        if(ui->lswSelecciones->currentItem()){
            if(ui2->letEquipo->text() != ""){
                int pos = temp.Buscar(Equi,ui->lswSelecciones->currentItem()->text());
                Equi[pos].setNombre(ui2->letEquipo->text());
                Equi[pos].setDirector(ui2->letDirector->text());
                Equi[pos].setGrupo(ui2->letGrupo->text());
                Equi[pos].setPuntos(ui2->letPuntos->text().toInt());
                Equi[pos].setFederacion(ui2->letFederacion->text());
                Equi[pos].setPartidosJ(ui2->letPartidosJ->text().toInt());
                Equi[pos].setPartidosP(ui2->letPartidosP->text().toInt());
                Equi[pos].setAusencias(ui2->letAusencias->text().toInt());
                Equi[pos].setGolesF(ui2->letGolesF->text().toInt());
                Equi[pos].setGolesE(ui2->letGolesC->text().toInt());
                Equi[pos].setJugadores(ui2->txtJugadores->toPlainText());
                ui->lswSelecciones->currentItem()->setText(ui2->letEquipo->text());
            }else{
                 QMessageBox::critical(this,"Servidor","Para Modificar la seleccion tiene que tener un nombre");
            }
        }else{
            QMessageBox::critical(this,"Servidor","Para Modificar tiene que tener un item seleccionado");
        }

    }else if(ui2->rdbEliminar->isChecked()){
        if(ui->lswSelecciones->currentItem()){
                int pos = temp.Buscar(Equi,ui->lswSelecciones->currentItem()->text());
                QVector<Equipos> temp;
                for(int i=0; i < Equi.size(); i++){
                    if(pos != i){
                        temp.push_back(Equi[i]);
                    }
                }
                Equi = temp;
                qDeleteAll(ui->lswSelecciones->selectedItems());
        }else{
            QMessageBox::critical(this,"Servidor","Para eliminar tiene que tener un item seleccionado");
        }
    }

}

void Servidor::MantePartidos(){
    Encuentros temp;
    if(ui->twdEncuentros->isItemSelected(ui->twdEncuentros->currentItem())){
        int pos = ui->twdEncuentros->currentRow();

        ui3->letEquipo1->setText(Par[pos].getEquipo1());
        ui3->letEquipo2->setText(Par[pos].getEquipo2());
        ui3->letFecha->setText(Par[pos].getFecha());
        ui3->letHora->setText(Par[pos].getHora());
        ui3->letGoles->setText(QString::number(Par[pos].getGoles1()));
        ui3->letGoles_2->setText(QString::number(Par[pos].getGoles2()));
        ui3->letRemates->setText(QString::number(Par[pos].getRemates1()));
        ui3->letRemates_2->setText(QString::number(Par[pos].getRemates2()));
        ui3->letPosesion->setText(Par[pos].getPosesion1());
        ui3->letPosesion_2->setText(Par[pos].getPosesion2());
        ui3->letPases->setText(QString::number(Par[pos].getPases1()));
        ui3->letPases_2->setText(QString::number(Par[pos].getPases2()));
        ui3->letFaltas->setText(QString::number(Par[pos].getFaltas1()));
        ui3->letFaltas_2->setText(QString::number(Par[pos].getFaltas2()));
        ui3->letTarjetasA->setText(QString::number(Par[pos].getTarjetaA1()));
        ui3->letTarjetasA_2->setText(QString::number(Par[pos].getTarjetaA2()));
        ui3->letTarjetasR->setText(QString::number(Par[pos].getTarjetaR1()));
        ui3->letTarjetasR_2->setText(QString::number(Par[pos].getTarjetaR2()));
        ui3->letPAdelantada->setText(QString::number(Par[pos].getPosicionA1()));
        ui3->letPAdelantada_2->setText(QString::number(Par[pos].getPosicionA2()));
        ui3->letTEsquina->setText(QString::number(Par[pos].getTirosEs1()));
        ui3->letTEsquina_2->setText(QString::number(Par[pos].getTirosEs2()));
        MP->exec();
    }else{
        MP->exec();
    }

    if(ui3->rdbInsertar->isChecked()){
        int pos = temp.BuscarEn(Par,ui3->letEquipo1->text(), ui3->letEquipo2->text());
        if(ui3->letEquipo1->text() != "" && ui3->letEquipo2->text() != "" && ui3->letFecha->text() != "" && ui3->letHora->text() != ""){
            if(pos == -1){
                Par.push_back(Encuentros(ui3->letEquipo1->text(),ui3->letEquipo2->text(),ui3->letFecha->text(),
                ui3->letHora->text(),ui3->letGoles->text().toInt(),ui3->letGoles_2->text().toInt(),ui3->letRemates->text().toInt(),
                ui3->letRemates_2->text().toInt(), ui3->letPosesion->text(), ui3->letPosesion_2->text(), ui3->letPases->text().toInt(),
                ui3->letPases_2->text().toInt(),ui3->letFaltas->text().toInt(), ui3->letFaltas_2->text().toInt(), ui3->letTarjetasA->text().toInt(),
                ui3->letTarjetasA_2->text().toInt(), ui3->letTarjetasR->text().toInt(), ui3->letTarjetasR_2->text().toInt(), ui3->letPAdelantada->text().toInt(),
                ui3->letPAdelantada_2->text().toInt(), ui3->letTEsquina->text().toInt(), ui3->letTEsquina_2->text().toInt()));

                ui->twdEncuentros->insertRow(Par.size()-1);
                ui->twdEncuentros->setItem(Par.size()-1, 0, new QTableWidgetItem(Par[Par.size()-1].getEquipo1()));
                ui->twdEncuentros->setItem(Par.size()-1, 1, new QTableWidgetItem(Par[Par.size()-1].getEquipo2()));
                ui->twdEncuentros->setItem(Par.size()-1, 2, new QTableWidgetItem(Par[Par.size()-1].getFecha()));
                ui->twdEncuentros->setItem(Par.size()-1, 3, new QTableWidgetItem(Par[Par.size()-1].getHora()));
            }else{
                QMessageBox::critical(this,"Servidor","El partido ya estaba ingresado en el mundial previamente");
            }
        }else{
            QMessageBox::critical(this,"Servidor","Para insertar el partido debe ingresar el nombre de las selecciones, la fecha y la hora en la que se jugara");
        }
    }else if(ui3->rdbModificar->isChecked()){
       if(ui->twdEncuentros->isItemSelected(ui->twdEncuentros->currentItem())){
           int pos = ui->twdEncuentros->currentRow();
           if(ui3->letEquipo1->text() != "" && ui3->letEquipo2->text() != "" && ui3->letFecha->text() != "" && ui3->letHora->text() != ""){
               Par[pos].setEquipo1(ui3->letEquipo1->text());
               Par[pos].setEquipo2(ui3->letEquipo2->text());
               Par[pos].setFecha(ui3->letFecha->text());
               Par[pos].setHora(ui3->letHora->text());
               Par[pos].setGoles1(ui3->letGoles->text().toInt());
               Par[pos].setGoles2(ui3->letGoles_2->text().toInt());
               Par[pos].setRemates1(ui3->letRemates->text().toInt());
               Par[pos].setRemates2(ui3->letRemates_2->text().toInt());
               Par[pos].setPosesion1(ui3->letPosesion->text());
               Par[pos].setPosesion2(ui3->letPosesion_2->text());
               Par[pos].setFaltas1(ui3->letFaltas->text().toInt());
               Par[pos].setFaltas2(ui3->letFaltas_2->text().toInt());
               Par[pos].setTarjetaA1(ui3->letTarjetasA->text().toInt());
               Par[pos].setTarjetaA2(ui3->letTarjetasA_2->text().toInt());
               Par[pos].setTarjetaR1(ui3->letTarjetasR->text().toInt());
               Par[pos].setTarjetaR2(ui3->letTarjetasR_2->text().toInt());
               Par[pos].setPosicionA1(ui3->letPAdelantada->text().toInt());
               Par[pos].setPosicionA2(ui3->letPAdelantada_2->text().toInt());
               Par[pos].setTirosEs1(ui3->letTEsquina->text().toInt());
               Par[pos].setTirosEs2(ui3->letTEsquina_2->text().toInt());

               ui->twdEncuentros->setItem(pos, 0, new QTableWidgetItem(Par[pos].getEquipo1()));
               ui->twdEncuentros->setItem(pos, 1, new QTableWidgetItem(Par[pos].getEquipo2()));
               ui->twdEncuentros->setItem(pos, 2, new QTableWidgetItem(Par[pos].getFecha()));
               ui->twdEncuentros->setItem(pos, 3, new QTableWidgetItem(Par[pos].getHora()));
           }else{
               QMessageBox::critical(this,"Servidor","Para Modificar el partido debe ingresar el nombre de las selecciones, la fecha y la hora en la que se jugara");
           }
       }else{
           QMessageBox::critical(this,"Servidor","Para Modificar tiene que tener una fila seleccionado");
       }
    }else if(ui3->rdbEliminar->isChecked()){
        if(ui->twdEncuentros->isItemSelected(ui->twdEncuentros->currentItem())){
            int pos = ui->twdEncuentros->currentRow();
            if(ui3->letEquipo1->text() != "" && ui3->letEquipo2->text() != "" && ui3->letFecha->text() != "" && ui3->letHora->text() != ""){
                QVector<Encuentros> temp;
                for(int i=0; i < Par.size(); i++){
                    if(pos != i){
                        temp.push_back(Par[i]);
                    }
                }
                Par = temp;
                ui->twdEncuentros->removeRow(pos);
            }else{
                QMessageBox::critical(this,"Servidor","Para Eliminar el partido debe ingresar el nombre de las selecciones, la fecha y la hora en la que se jugara");
            }
        }else{
            QMessageBox::critical(this,"Servidor","Para Eliminar tiene que tener una fila seleccionado");
        }
    }

}

void Servidor::Configura(){
    w->exec();
    serv = new QTcpServer(this);
    if(ui1->rdbEncender->isChecked()){

        connect(serv, SIGNAL(newConnection()), this, SLOT(newConnection()));
        if(!serv->listen(QHostAddress::Any, ui1->letPuerto->text().toInt())){
            qDebug()<<"Problemas con el servidor";
        }else{
            qDebug()<<"El servidor ha iniciado";
        }
    }else if(ui1->rdbApagar->isChecked()){
        qDebug()<<"Desconectado";
        serv->close();
    }
}
void Servidor::newConnection(){
    QTcpSocket *socket = serv->nextPendingConnection();
    connects.append(socket);
    connect(socket, SIGNAL(readyRead()), this, SLOT(Refrescar()));
    socket->write("Se ha conectado al Servidor");
    socket->flush();
    socket->waitForBytesWritten(1000);

}
void Servidor::Refrescar(){
    QTcpSocket *socket = qobject_cast<QTcpSocket*>(sender());
    qDebug()<<"Bytes Recibidos: "<<socket->bytesAvailable();
    QByteArray data = socket->readAll();
    qDebug()<<"Data recibidos: "<<QString(data);
    Enviar(QString(data));


}
void Servidor::Enviar(QString data){
    QTcpSocket *socket = qobject_cast<QTcpSocket*>(sender());
    Equipos temp;
    int pos = temp.Buscar(Equi,data);
    if(pos > -1){
        QString Trama = Equi[pos].TramaEqui();
        Trama += "|";

        for(int i =0; i < Par.size(); i++){
            if(Par[i].getEquipo1() == data || Par[i].getEquipo2() == data){
                Trama += "[";
                Trama += Par[i].TramaEn();
            }
        }
        socket->write(Trama.toLocal8Bit());
        socket->flush();
        socket->waitForBytesWritten(1000);
    }


}

void Servidor::SeleccionarEn(){
    int pos = ui->twdEncuentros->currentRow();
    ui->lblEquipo1->setText(Par[pos].getEquipo1());
    ui->lblEquipo2->setText(Par[pos].getEquipo2());
    ui->letGoles->setText(QString::number(Par[pos].getGoles1()));
    ui->letGoles_2->setText(QString::number(Par[pos].getGoles2()));
    ui->letRemates->setText(QString::number(Par[pos].getRemates1()));
    ui->letRemates_2->setText(QString::number(Par[pos].getRemates2()));
    ui->letPosesion->setText(Par[pos].getPosesion1());
    ui->letPosesion_2->setText(Par[pos].getPosesion2());
    ui->letPases->setText(QString::number(Par[pos].getPases1()));
    ui->letPases_2->setText(QString::number(Par[pos].getPases2()));
    ui->letFaltas->setText(QString::number(Par[pos].getFaltas1()));
    ui->letFaltas_2->setText(QString::number(Par[pos].getFaltas2()));
    ui->letTarjetasA->setText(QString::number(Par[pos].getTarjetaA1()));
    ui->letTarjetasA_2->setText(QString::number(Par[pos].getTarjetaA2()));
    ui->letTarjetasR->setText(QString::number(Par[pos].getTarjetaR1()));
    ui->letTarjetasR_2->setText(QString::number(Par[pos].getTarjetaR2()));
    ui->letPAdelantada->setText(QString::number(Par[pos].getPosicionA1()));
    ui->letPAdelantada_2->setText(QString::number(Par[pos].getPosicionA2()));
    ui->letTEsquina->setText(QString::number(Par[pos].getTirosEs1()));
    ui->letTEsquina_2->setText(QString::number(Par[pos].getTirosEs2()));
}
