#ifndef ENCUENTROS_H
#define ENCUENTROS_H
#include <QString>
#include <QVector>
class Encuentros
{
public:
    Encuentros();
    Encuentros(QString, QString, QString, QString, int, int, int, int, QString, QString, int, int, int, int, int, int, int, int, int, int, int, int);
    Encuentros(const Encuentros&);
    //Funciones
    QString getEquipo1();
    QString getEquipo2();
    QString getFecha();
    QString getHora();
    int getGoles1();
    int getGoles2();
    int getRemates1();
    int getRemates2();
    QString getPosesion1();
    QString getPosesion2();
    int getPases1();
    int getPases2();
    int getFaltas1();
    int getFaltas2();
    int getTarjetaA1();
    int getTarjetaA2();
    int getTarjetaR1();
    int getTarjetaR2();
    int getPosicionA1();
    int getPosicionA2();
    int getTirosEs1();
    int getTirosEs2();
    QString TramaEn();
    QString Trama();
    int BuscarEn(QVector<Encuentros>,QString,QString);
    //voids
    void setEquipo1(QString);
    void setEquipo2(QString);
    void setFecha(QString);
    void setHora(QString);
    void setGoles1(int);
    void setGoles2(int);
    void setRemates1(int);
    void setRemates2(int);
    void setPosesion1(QString);
    void setPosesion2(QString);
    void setPases1(int);
    void setPases2(int);
    void setFaltas1(int);
    void setFaltas2(int);
    void setTarjetaA1(int);
    void setTarjetaA2(int);
    void setTarjetaR1(int);
    void setTarjetaR2(int);
    void setPosicionA1(int);
    void setPosicionA2(int);
    void setTirosEs1(int);
    void setTirosEs2(int);

private:
    QString Equipo1;
    QString Equipo2;
    QString Fecha;
    QString Hora;
    int Goles1;
    int Goles2;
    int Remates1;
    int Remates2;
    QString Posesion1;
    QString Posesion2;
    int Pases1;
    int Pases2;
    int Faltas1;
    int Faltas2;
    int TarjetaA1;
    int TarjetaA2;
    int TarjetaR1;
    int TarjetaR2;
    int PosicionA1;
    int PosicionA2;
    int TirosEs1;
    int TirosEs2;
};

#endif // ENCUENTROS_H
