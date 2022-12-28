#include "encuentros.h"

Encuentros::Encuentros()
{
    this->Equipo1 = "Vacio";
    this->Equipo2 = "Vacio";
    this->Fecha = "Vacio";
    this->Hora = "Vacio";
    this->Goles1 = 0;
    this->Goles2 = 0;
    this->Remates1 = 0;
    this->Remates2 =0;
    this->Posesion1 = "Vacio";
    this->Posesion2 = "Vacio";
    this->Pases1 = 0;
    this->Pases2 = 0;
    this->Faltas1 = 0;
    this->Faltas2 = 0;
    this->TarjetaA1 = 0;
    this->TarjetaA2 = 0;
    this->TarjetaR1 = 0;
    this->TarjetaR2 = 0;
    this->PosicionA1 = 0;
    this->PosicionA2 = 0;
    this->TirosEs1 = 0;
    this->TirosEs2 = 0;
}

Encuentros::Encuentros(QString Equipo1, QString Equipo2, QString Fecha, QString Hora, int Goles1, int Goles2, int Remates1, int Remates2,
                       QString Posesion1, QString Posesion2,int Pases1, int Pases2, int Faltas1, int Faltas2, int TarjetaA1, int TarjetaA2,
                       int TarjetaR1, int TarjetaR2, int PosicionA1, int PosicionA2, int TirosEs1, int TirosEs2){
    this->Equipo1 = Equipo1;
    this->Equipo2 = Equipo2;
    this->Fecha = Fecha;
    this->Hora = Hora;
    this->Goles1 = Goles1;
    this->Goles2 = Goles2;
    this->Remates1 = Remates1;
    this->Remates2 =Remates2;
    this->Posesion1 = Posesion1;
    this->Posesion2 = Posesion2;
    this->Pases1 = Pases1;
    this->Pases2 = Pases2;
    this->Faltas1 = Faltas1;
    this->Faltas2 = Faltas2;
    this->TarjetaA1 = TarjetaA1;
    this->TarjetaA2 = TarjetaA2;
    this->TarjetaR1 = TarjetaR1;
    this->TarjetaR2 = TarjetaR2;
    this->PosicionA1 = PosicionA1;
    this->PosicionA2 = PosicionA2;
    this->TirosEs1 = TirosEs1;
    this->TirosEs2 = TirosEs2;
}

Encuentros::Encuentros(const Encuentros& temp){
    this->Equipo1 = temp.Equipo1;
    this->Equipo2 = temp.Equipo2;
    this->Fecha = temp.Fecha;
    this->Hora = temp.Hora;
    this->Goles1 = temp.Goles1;
    this->Goles2 = temp.Goles2;
    this->Remates1 = temp.Remates1;
    this->Remates2 = temp.Remates2;
    this->Posesion1 = temp.Posesion1;
    this->Posesion2 = temp.Posesion2;
    this->Pases1 = temp.Pases1;
    this->Pases2 = temp.Pases2;
    this->Faltas1 = temp.Faltas1;
    this->Faltas2 = temp.Faltas2;
    this->TarjetaA1 = temp.TarjetaA1;
    this->TarjetaA2 = temp.TarjetaA2;
    this->TarjetaR1 = temp.TarjetaR1;
    this->TarjetaR2 = temp.TarjetaR2;
    this->PosicionA1 = temp.PosicionA1;
    this->PosicionA2 = temp.PosicionA2;
    this->TirosEs1 = temp.TirosEs1;
    this->TirosEs2 = temp.TirosEs2;

}
QString Encuentros::getEquipo1(){
    return this->Equipo1;
}
QString Encuentros::getEquipo2(){
    return this->Equipo2;
}

QString Encuentros::getFecha(){
    return this->Fecha;
}

QString Encuentros::getHora(){
    return this->Hora;
}
int Encuentros::getGoles1(){
    return this->Goles1;
}

int Encuentros::getGoles2(){
    return this->Goles2;
}

int Encuentros::getRemates1(){
    return this->Remates1;
}

int Encuentros::getRemates2(){
    return this->Remates2;
}

QString Encuentros::getPosesion1(){
    return this->Posesion1;
}

QString Encuentros::getPosesion2(){
    return this->Posesion2;
}

int Encuentros::getPases1(){
    return this->Pases1;
}

int Encuentros::getPases2(){
    return this->Pases2;
}

int Encuentros::getFaltas1(){
    return this->Faltas1;
}

int Encuentros::getFaltas2(){
    return this->Faltas2;
}

int Encuentros::getTarjetaA1(){
    return this->TarjetaA1;
}

int Encuentros::getTarjetaA2(){
    return this->TarjetaA2;
}

int Encuentros::getTarjetaR1(){
    return this->TarjetaR1;
}

int Encuentros::getTarjetaR2(){
    return this->TarjetaR2;
}

int Encuentros::getPosicionA1(){
    return this->PosicionA1;
}

int Encuentros::getPosicionA2(){
    return this->PosicionA2;
}

int Encuentros::getTirosEs1(){
    return this->TirosEs1;
}

int Encuentros::getTirosEs2(){
    return this->TirosEs2;
}

QString Encuentros::TramaEn(){
    QString Trama = this->Equipo1+"["+this->Equipo2+"["+this->Fecha+"["+this->Hora;
    return Trama;
}

QString Encuentros::Trama(){
    QString Trama = this->Equipo1+"["+this->Equipo2+"["+this->Fecha+"["+this->Hora+"["+QString::number(this->Goles1)+
            "["+QString::number(this->Goles2)+"["+QString::number(this->Remates1)+"["+QString::number(this->Remates2)+
            "["+this->Posesion1+"["+this->Posesion2+"["+QString::number(this->Pases1)+"["+QString::number(this->Pases2)+
            "["+QString::number(this->Faltas1)+"["+QString::number(this->Faltas2)+"["+QString::number(this->TarjetaA1)+
            "["+QString::number(this->TarjetaA2)+"["+QString::number(this->TarjetaR1)+"["+QString::number(this->TarjetaR2)+
            "["+QString::number(this->PosicionA1)+"["+QString::number(this->PosicionA2)+"["+QString::number(this->TirosEs1)+
            "["+QString::number(this->TirosEs2);
    return Trama;
}

void Encuentros::setEquipo1(QString Equipo1){
    this->Equipo1 = Equipo1;
}

void Encuentros::setEquipo2(QString Equipo2){
    this->Equipo2 = Equipo2;
}

void Encuentros::setFecha(QString Fecha){
    this->Fecha = Fecha;
}

void Encuentros::setHora(QString Hora){
    this->Hora = Hora;
}

void Encuentros::setGoles1(int Goles1){
    this->Goles1 = Goles1;
}

void Encuentros::setGoles2(int Goles2){
    this->Goles2 = Goles2;
}

void Encuentros::setRemates1(int Remates1){
    this->Remates1 = Remates1;
}

void Encuentros::setRemates2(int Remates2){
    this->Remates2 = Remates2;
}

void Encuentros::setPosesion1(QString Posesion1){
    this->Posesion1 = Posesion1;
}

void Encuentros::setPosesion2(QString Posesion2){
    this->Posesion2 = Posesion2;
}

void Encuentros::setPases1(int Pases1){
    this->Pases1 = Pases1;
}

void Encuentros::setPases2(int Pases2){
    this->Pases2 = Pases2;
}

void Encuentros::setFaltas1(int Faltas1){
    this->Faltas1 = Faltas1;
}

void Encuentros::setFaltas2(int Faltas2){
    this->Faltas2 = Faltas2;
}

void Encuentros::setTarjetaA1(int TarjetaA1){
    this->TarjetaA1 = TarjetaA1;
}

void Encuentros::setTarjetaA2(int TarjetaA2){
    this->TarjetaA2 = TarjetaA2;
}

void Encuentros::setTarjetaR1(int TarjetaR1){
    this->TarjetaR1 = TarjetaR1;
}

void Encuentros::setTarjetaR2(int TarjetaR2){
    this->TarjetaR2 = TarjetaR2;
}

void Encuentros::setPosicionA1(int PosicionA1){
    this->PosicionA1 = PosicionA1;
}

void Encuentros::setPosicionA2(int PosicionA2){
    this->PosicionA2 = PosicionA2;
}

void Encuentros::setTirosEs1(int TirosEs1){
    this->TirosEs1 = TirosEs1;
}

void Encuentros::setTirosEs2(int TirosEs2){
    this->TirosEs2 = TirosEs2;
}
int Encuentros::BuscarEn(QVector<Encuentros> P, QString Equipo1, QString Equipo2){
    int pos = -1;

    for(int i =0; i < P.size(); i++ ){
        if(P[i].Equipo1 == Equipo1 && P[i].Equipo2 == Equipo2){
            pos = i;
        }
    }
    return pos;
}
