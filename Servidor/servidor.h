#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <QMainWindow>
#include "configuracion.h"
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include <encuentros.h>
#include "equipos.h"
#include "mantenimientoequi.h"
#include "mantenimientopartidos.h"
namespace Ui {
class Servidor;
}

class Servidor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Servidor(QWidget *parent = 0);
    ~Servidor();
public slots:
    void Configura();
    void newConnection();
    void Refrescar();
    void Enviar(QString);
    void ManteEquipo();
    void SeleccionarEn();
    void MantePartidos();
    void Guardar();
    void Abrir();
private:
    QList<QTcpSocket*> connects;
    QTcpServer *serv;
    Ui::Servidor *ui;
    Ui::Configuracion *ui1;
    Ui::MantenimientoEqui *ui2;
    Ui::MantenimientoPartidos *ui3;
    Configuracion *w = new Configuracion();
    MantenimientoEqui *ME = new MantenimientoEqui();
    MantenimientoPartidos *MP = new MantenimientoPartidos();
    QVector<Encuentros> Par;
    QVector<Equipos> Equi;
};

#endif // SERVIDOR_H
