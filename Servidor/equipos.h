#ifndef EQUIPOS_H
#define EQUIPOS_H
#include <QString>
#include <QVector>
#include "encuentros.h"
class Equipos
{
public:
    Equipos();
    Equipos(QString,QString, QString, int,QString, int, int, int, int, int, QString);
    Equipos(const Equipos&);
    QString getNombre();
    QString getDirector();
    QString getGrupo();
    int getPuntos();
    QString getFederacion();
    int getPartidosJ();
    int getPartidosP();
    int getAusencias();
    int getGolesF();
    int getGolesE();
    QString getJugadores();
    QString TramaEqui();
    QString Trama();
    int Buscar(QVector<Equipos>, QString);
    void setNombre(QString);
    void setDirector(QString);
    void setGrupo(QString);
    void setPuntos(int);
    void setFederacion(QString);
    void setPartidosJ(int);
    void setPartidosP(int);
    void setAusencias(int);
    void setGolesF(int);
    void setGolesE(int);
    void setJugadores(QString);
private:
    QString Nombre;
    QString Director;
    QString Grupo;
    int Puntos;
    QString Federacion;
    int PartidosJ;
    int PartidosP;
    int Ausencia;
    int GolesF;
    int GolesE;
    QString Jugadores;
    //QVector<Encuentros> Partidos;
};

#endif // EQUIPOS_H
