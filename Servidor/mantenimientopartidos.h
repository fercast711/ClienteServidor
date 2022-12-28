#ifndef MANTENIMIENTOPARTIDOS_H
#define MANTENIMIENTOPARTIDOS_H

#include <QDialog>

namespace Ui {
class MantenimientoPartidos;
}

class MantenimientoPartidos : public QDialog
{
    Q_OBJECT

public:
    explicit MantenimientoPartidos(QWidget *parent = 0);
    ~MantenimientoPartidos();

private:
    Ui::MantenimientoPartidos *ui;
};

#endif // MANTENIMIENTOPARTIDOS_H
