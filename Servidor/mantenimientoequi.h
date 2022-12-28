#ifndef MANTENIMIENTOEQUI_H
#define MANTENIMIENTOEQUI_H

#include <QDialog>

namespace Ui {
class MantenimientoEqui;
}

class MantenimientoEqui : public QDialog
{
    Q_OBJECT

public:
    explicit MantenimientoEqui(QWidget *parent = 0);
    ~MantenimientoEqui();

private:
    Ui::MantenimientoEqui *ui;
};

#endif // MANTENIMIENTOEQUI_H
