#include "mantenimientoequi.h"
#include "ui_mantenimientoequi.h"

MantenimientoEqui::MantenimientoEqui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MantenimientoEqui)
{
    ui->setupUi(this);
}

MantenimientoEqui::~MantenimientoEqui()
{
    delete ui;
}
