#include "mantenimientopartidos.h"
#include "ui_mantenimientopartidos.h"

MantenimientoPartidos::MantenimientoPartidos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MantenimientoPartidos)
{
    ui->setupUi(this);
}

MantenimientoPartidos::~MantenimientoPartidos()
{
    delete ui;
}
