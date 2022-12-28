#include "conexion.h"
#include "ui_conexion.h"

Conexion::Conexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Conexion)
{
    ui->setupUi(this);
}

Conexion::~Conexion()
{
    delete ui;
}
