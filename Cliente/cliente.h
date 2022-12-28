#ifndef CLIENTE_H
#define CLIENTE_H

#include <QMainWindow>
#include "conexion.h"
#include <QDebug>
#include <QTcpSocket>
#include <QMessageBox>
namespace Ui {
class Cliente;
}

class Cliente : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cliente(QWidget *parent = 0);
    ~Cliente();
    void Asignar(QStringList);
public slots:
    void Conectar();
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void Refrescar();
    void Seleccionar();
private:
    Ui::Cliente *ui;
    Ui::Conexion *ui1;
    Conexion *w = new Conexion();
    QTcpSocket *socket;
    int encendido = 0;
};

#endif // CLIENTE_H
