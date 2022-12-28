#include "cliente.h"
#include "ui_cliente.h"
#include "conexion.h"
#include "ui_conexion.h"

Cliente::Cliente(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cliente), ui1(new Ui::Conexion)
{
    ui->setupUi(this);
    ui1->setupUi(w);


}

Cliente::~Cliente()
{
    delete ui;
}

void Cliente::Conectar(){
    w->exec();
    socket = new QTcpSocket(this);
    if(ui1->rdbEncender->isChecked()){
        connect(socket, SIGNAL(connected()), this, SLOT(connected()));
        connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
        connect(socket, SIGNAL(readyRead()), this, SLOT(Refrescar()));
        connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));
        qDebug()<<"Conectado";
        socket->connectToHost(ui1->letIP->text(), ui1->letPuerto->text().toInt());
        if(!socket->waitForConnected(1000)){
            qDebug()<<"Error de conexion:"<<socket->errorString();
        }else{
            qDebug()<<"Conexion Exitosa";
        }
        encendido = 1;
    }else if(ui1->rdbApagar->isChecked()){
        encendido = 0;
        disconnected();
    }
}
void Cliente::connected(){

}
void Cliente::disconnected(){
    qDebug()<<"Desconectando";
    socket->close();
}

void Cliente::bytesWritten(qint64 bytes){
    qDebug()<<"bytes Recibidos:"<<bytes;
}

void Cliente::Refrescar(){
    QByteArray data = socket->readAll();
    qDebug()<<"Data Recibida: "<<QString(data);
    QString Linea = QString(data);
    if(Linea == "Se ha conectado al Servidor"){
        QMessageBox::information(this,"Cliente",Linea);
    }else{
    QStringList List = Linea.split("|");
    Asignar(List);
    }
}
void Cliente::Seleccionar(){
    if(encendido == 1){
        socket->write(ui->lswSelecciones->currentItem()->text().toLocal8Bit());
        socket->flush();
        socket->waitForBytesWritten(1000);
    }
}

void Cliente::Asignar(QStringList List){
    ui->lblSeleccion->setText(List.at(0));
    ui->letDirector->setText(List.at(1));
    ui->letGrupo->setText(List.at(2));
    ui->letPuntos->setText(List.at(3));
    ui->letFederacion->setText(List.at(4));
    ui->letPartidosJ->setText(List.at(5));
    ui->letPartidosP->setText(List.at(6));
    ui->letAusencias->setText(List.at(7));
    ui->letGolesF->setText(List.at(8));
    ui->letGolesC->setText(List.at(9));
    ui->lswJugadores->clear();
    for(int i= 10; i < List.size()-1; i++){
        ui->lswJugadores->addItem(List.at(i));
    }
    QStringList ListEn = List[List.size()-1].split("[");

    int a =0;
     ui->twdPartidos->setRowCount(0);
    for(int i =1; i < ListEn.size(); a++){
        ui->twdPartidos->insertRow(a);
        ui->twdPartidos->setItem(a, 0, new QTableWidgetItem(ListEn.at(i)));
        i++;
        ui->twdPartidos->setItem(a, 1, new QTableWidgetItem(ListEn.at(i)));
        i++;
        ui->twdPartidos->setItem(a, 2, new QTableWidgetItem(ListEn.at(i)));
        i++;
        ui->twdPartidos->setItem(a, 3, new QTableWidgetItem(ListEn.at(i)));
        i++;
    }



}
