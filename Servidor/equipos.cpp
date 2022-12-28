#include "equipos.h"

Equipos::Equipos(){
    this->Nombre = "Vacio";
    this->Director = "Vacio";
    this->Grupo = "Vacio";
    this->Puntos = 0;
    this->Federacion = "Vacio";
    this->PartidosJ = 0;
    this->PartidosP = 0;
    this->Ausencia = 0;
    this->GolesF = 0;
    this->GolesE = 0;
    this->Jugadores = "Vacio";

}

Equipos::Equipos(QString Nombre, QString Director, QString Grupo, int Puntos,QString Federacion, int PartidosJ,
                 int PartidosP, int Ausencia, int GolesF, int GolesE, QString Jugadores){
    this->Nombre = Nombre;
    this->Director = Director;
    this->Grupo = Grupo;
    this->Puntos = Puntos;
    this->Federacion = Federacion;
    this->PartidosJ = PartidosJ;
    this->PartidosP = PartidosP;
    this->Ausencia = Ausencia;
    this->GolesF = GolesF;
    this->GolesE = GolesE;
    this->Jugadores = Jugadores;
}

Equipos::Equipos(const Equipos &temp){
    this->Nombre = temp.Nombre;
    this->Director = temp.Director;
    this->Grupo = temp.Grupo;
    this->Puntos = temp.Puntos;
    this->Federacion = temp.Federacion;
    this->PartidosJ = temp.PartidosJ;
    this->PartidosP = temp.PartidosP;
    this->Ausencia = temp.Ausencia;
    this->GolesF = temp.GolesF;
    this->GolesE = temp.GolesE;
    this->Jugadores = temp.Jugadores;
}
QString Equipos::getNombre(){
    return this->Nombre;
}
QString Equipos::getDirector(){
    return this->Director;
}

QString Equipos::getGrupo(){
    return this->Grupo;
}

int Equipos::getPuntos(){
    return this->Puntos;
}

QString Equipos::getFederacion(){
    return this->Federacion;
}

int Equipos::getPartidosJ(){
    return this->PartidosJ;
}

int Equipos::getPartidosP(){
    return this->PartidosP;
}

int Equipos::getAusencias(){
    return this->Ausencia;
}

int Equipos::getGolesF(){
    return this->GolesF;
}

int Equipos::getGolesE(){
    return this->GolesE;
}

QString Equipos::getJugadores(){
    return this->Jugadores;
}

QString Equipos::TramaEqui(){
    QString Trama = this->Nombre+"|"+this->Director+"|"+this->Grupo
            +"|"+QString::number(this->Puntos)+"|"+this->Federacion+"|"+QString::number(this->PartidosJ)+
            "|"+QString::number(this->PartidosP)+"|"+QString::number(this->Ausencia)+"|"+QString::number(this->GolesF)
            +"|"+QString::number(this->GolesE)+"|"+this->Jugadores;
    return Trama;
}
QString Equipos::Trama(){
    QString Trama = this->Nombre+"+"+this->Director+"+"+this->Grupo
            +"+"+QString::number(this->Puntos)+"+"+this->Federacion+"+"+QString::number(this->PartidosJ)+
            "+"+QString::number(this->PartidosP)+"+"+QString::number(this->Ausencia)+"+"+QString::number(this->GolesF)
            +"+"+QString::number(this->GolesE)+"+"+this->Jugadores;
    return Trama;
}
int Equipos::Buscar(QVector<Equipos> P, QString Nombre){
    int pos = -1;
    for(int i =0; i < P.size(); i++){
        if(P[i].Nombre == Nombre){
            pos = i;
        }
    }
    return pos;
}

void Equipos::setNombre(QString Nombre){
    this->Nombre = Nombre;
}

void Equipos::setDirector(QString Director){
    this->Director = Director;
}

void Equipos::setGrupo(QString Grupo){
    this->Grupo = Grupo;
}

void Equipos::setPuntos(int Puntos){
    this->Puntos = Puntos;
}

void Equipos::setFederacion(QString Federacion){
    this->Federacion = Federacion;
}

void Equipos::setPartidosJ(int PartidosJ){
    this->PartidosJ = PartidosJ;
}

void Equipos::setPartidosP(int PartidosP){
    this->PartidosP = PartidosP;
}

void Equipos::setAusencias(int Ausencia){
    this->Ausencia = Ausencia;
}

void Equipos::setGolesF(int GolesF){
    this->GolesF = GolesF;
}

void Equipos::setGolesE(int GolesE){
    this->GolesE = GolesE;
}

void Equipos::setJugadores(QString Jugadores){
    this->Jugadores = Jugadores;
}
