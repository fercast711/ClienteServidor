#ifndef CONEXION_H
#define CONEXION_H

#include <QDialog>

namespace Ui {
class Conexion;
}

class Conexion : public QDialog
{
    Q_OBJECT

public:
    explicit Conexion(QWidget *parent = 0);
    ~Conexion();
private:
    Ui::Conexion *ui;
};

#endif // CONEXION_H
