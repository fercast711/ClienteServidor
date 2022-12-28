#include "servidor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Servidor *w = new Servidor();
    w->show();

    return a.exec();
}
