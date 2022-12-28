/********************************************************************************
** Form generated from reading UI file 'mantenimientopartidos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANTENIMIENTOPARTIDOS_H
#define UI_MANTENIMIENTOPARTIDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_MantenimientoPartidos
{
public:
    QGroupBox *groupBox;
    QLineEdit *letEquipo2;
    QLineEdit *letPosesion_2;
    QLabel *lblEquipo;
    QLineEdit *letPosesion;
    QLineEdit *letEquipo1;
    QLineEdit *letPases_2;
    QLabel *lblTEsquina;
    QLineEdit *letRemates_2;
    QLineEdit *letTEsquina_2;
    QLineEdit *letPAdelantada;
    QLineEdit *letPases;
    QLabel *lblPAdelantada;
    QLineEdit *letFaltas;
    QLineEdit *letGoles;
    QLineEdit *letTarjetasR;
    QGroupBox *groupBox_2;
    QRadioButton *rdbModificar;
    QRadioButton *rdbEliminar;
    QRadioButton *rdbInsertar;
    QRadioButton *rdbSalir;
    QLabel *lblGoles;
    QLabel *lblRemates;
    QLineEdit *letTarjetasR_2;
    QLineEdit *letFaltas_2;
    QLabel *lblPosesion;
    QLabel *lblVS;
    QLineEdit *letTEsquina;
    QLineEdit *letTarjetasA_2;
    QLabel *lblPases;
    QLineEdit *letRemates;
    QLabel *lblTarjetasA;
    QLabel *lblFaltas;
    QLineEdit *letGoles_2;
    QLineEdit *letTarjetasA;
    QLabel *lblTarjetasR;
    QLineEdit *letPAdelantada_2;
    QLabel *lblFecha;
    QLabel *lblHora;
    QLineEdit *letFecha;
    QLineEdit *letHora;
    QPushButton *pboAceptar;

    void setupUi(QDialog *MantenimientoPartidos)
    {
        if (MantenimientoPartidos->objectName().isEmpty())
            MantenimientoPartidos->setObjectName(QStringLiteral("MantenimientoPartidos"));
        MantenimientoPartidos->resize(732, 688);
        groupBox = new QGroupBox(MantenimientoPartidos);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 20, 621, 631));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        letEquipo2 = new QLineEdit(groupBox);
        letEquipo2->setObjectName(QStringLiteral("letEquipo2"));
        letEquipo2->setGeometry(QRect(440, 60, 161, 21));
        letEquipo2->setFont(font);
        letPosesion_2 = new QLineEdit(groupBox);
        letPosesion_2->setObjectName(QStringLiteral("letPosesion_2"));
        letPosesion_2->setGeometry(QRect(440, 150, 161, 21));
        letPosesion_2->setFont(font);
        lblEquipo = new QLabel(groupBox);
        lblEquipo->setObjectName(QStringLiteral("lblEquipo"));
        lblEquipo->setGeometry(QRect(30, 60, 131, 21));
        lblEquipo->setFont(font);
        letPosesion = new QLineEdit(groupBox);
        letPosesion->setObjectName(QStringLiteral("letPosesion"));
        letPosesion->setGeometry(QRect(190, 150, 161, 21));
        letPosesion->setFont(font);
        letEquipo1 = new QLineEdit(groupBox);
        letEquipo1->setObjectName(QStringLiteral("letEquipo1"));
        letEquipo1->setGeometry(QRect(190, 60, 161, 21));
        letEquipo1->setFont(font);
        letPases_2 = new QLineEdit(groupBox);
        letPases_2->setObjectName(QStringLiteral("letPases_2"));
        letPases_2->setGeometry(QRect(440, 180, 161, 21));
        letPases_2->setFont(font);
        lblTEsquina = new QLabel(groupBox);
        lblTEsquina->setObjectName(QStringLiteral("lblTEsquina"));
        lblTEsquina->setGeometry(QRect(30, 330, 131, 21));
        lblTEsquina->setFont(font);
        letRemates_2 = new QLineEdit(groupBox);
        letRemates_2->setObjectName(QStringLiteral("letRemates_2"));
        letRemates_2->setGeometry(QRect(440, 120, 161, 21));
        letRemates_2->setFont(font);
        letTEsquina_2 = new QLineEdit(groupBox);
        letTEsquina_2->setObjectName(QStringLiteral("letTEsquina_2"));
        letTEsquina_2->setGeometry(QRect(440, 330, 161, 21));
        letTEsquina_2->setFont(font);
        letPAdelantada = new QLineEdit(groupBox);
        letPAdelantada->setObjectName(QStringLiteral("letPAdelantada"));
        letPAdelantada->setGeometry(QRect(190, 300, 161, 21));
        letPAdelantada->setFont(font);
        letPases = new QLineEdit(groupBox);
        letPases->setObjectName(QStringLiteral("letPases"));
        letPases->setGeometry(QRect(190, 180, 161, 21));
        letPases->setFont(font);
        lblPAdelantada = new QLabel(groupBox);
        lblPAdelantada->setObjectName(QStringLiteral("lblPAdelantada"));
        lblPAdelantada->setGeometry(QRect(30, 300, 151, 16));
        lblPAdelantada->setFont(font);
        letFaltas = new QLineEdit(groupBox);
        letFaltas->setObjectName(QStringLiteral("letFaltas"));
        letFaltas->setGeometry(QRect(190, 210, 161, 21));
        letFaltas->setFont(font);
        letGoles = new QLineEdit(groupBox);
        letGoles->setObjectName(QStringLiteral("letGoles"));
        letGoles->setGeometry(QRect(190, 90, 161, 21));
        letGoles->setFont(font);
        letTarjetasR = new QLineEdit(groupBox);
        letTarjetasR->setObjectName(QStringLiteral("letTarjetasR"));
        letTarjetasR->setGeometry(QRect(190, 270, 161, 21));
        letTarjetasR->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 480, 271, 111));
        groupBox_2->setFont(font);
        rdbModificar = new QRadioButton(groupBox_2);
        rdbModificar->setObjectName(QStringLiteral("rdbModificar"));
        rdbModificar->setGeometry(QRect(40, 40, 84, 19));
        rdbModificar->setCheckable(true);
        rdbEliminar = new QRadioButton(groupBox_2);
        rdbEliminar->setObjectName(QStringLiteral("rdbEliminar"));
        rdbEliminar->setGeometry(QRect(150, 40, 84, 19));
        rdbInsertar = new QRadioButton(groupBox_2);
        rdbInsertar->setObjectName(QStringLiteral("rdbInsertar"));
        rdbInsertar->setGeometry(QRect(40, 70, 84, 19));
        rdbSalir = new QRadioButton(groupBox_2);
        rdbSalir->setObjectName(QStringLiteral("rdbSalir"));
        rdbSalir->setGeometry(QRect(150, 70, 84, 19));
        rdbSalir->setChecked(true);
        lblGoles = new QLabel(groupBox);
        lblGoles->setObjectName(QStringLiteral("lblGoles"));
        lblGoles->setGeometry(QRect(30, 90, 131, 16));
        lblGoles->setFont(font);
        lblRemates = new QLabel(groupBox);
        lblRemates->setObjectName(QStringLiteral("lblRemates"));
        lblRemates->setGeometry(QRect(30, 120, 131, 21));
        lblRemates->setFont(font);
        letTarjetasR_2 = new QLineEdit(groupBox);
        letTarjetasR_2->setObjectName(QStringLiteral("letTarjetasR_2"));
        letTarjetasR_2->setGeometry(QRect(440, 270, 161, 21));
        letTarjetasR_2->setFont(font);
        letFaltas_2 = new QLineEdit(groupBox);
        letFaltas_2->setObjectName(QStringLiteral("letFaltas_2"));
        letFaltas_2->setGeometry(QRect(440, 210, 161, 21));
        letFaltas_2->setFont(font);
        lblPosesion = new QLabel(groupBox);
        lblPosesion->setObjectName(QStringLiteral("lblPosesion"));
        lblPosesion->setGeometry(QRect(30, 150, 131, 16));
        lblPosesion->setFont(font);
        lblVS = new QLabel(groupBox);
        lblVS->setObjectName(QStringLiteral("lblVS"));
        lblVS->setGeometry(QRect(390, 190, 21, 16));
        lblVS->setFont(font);
        letTEsquina = new QLineEdit(groupBox);
        letTEsquina->setObjectName(QStringLiteral("letTEsquina"));
        letTEsquina->setGeometry(QRect(190, 330, 161, 21));
        letTEsquina->setFont(font);
        letTarjetasA_2 = new QLineEdit(groupBox);
        letTarjetasA_2->setObjectName(QStringLiteral("letTarjetasA_2"));
        letTarjetasA_2->setGeometry(QRect(440, 240, 161, 21));
        letTarjetasA_2->setFont(font);
        lblPases = new QLabel(groupBox);
        lblPases->setObjectName(QStringLiteral("lblPases"));
        lblPases->setGeometry(QRect(30, 180, 131, 16));
        lblPases->setFont(font);
        letRemates = new QLineEdit(groupBox);
        letRemates->setObjectName(QStringLiteral("letRemates"));
        letRemates->setGeometry(QRect(190, 120, 161, 21));
        letRemates->setFont(font);
        lblTarjetasA = new QLabel(groupBox);
        lblTarjetasA->setObjectName(QStringLiteral("lblTarjetasA"));
        lblTarjetasA->setGeometry(QRect(30, 240, 151, 21));
        lblTarjetasA->setFont(font);
        lblFaltas = new QLabel(groupBox);
        lblFaltas->setObjectName(QStringLiteral("lblFaltas"));
        lblFaltas->setGeometry(QRect(30, 210, 131, 21));
        lblFaltas->setFont(font);
        letGoles_2 = new QLineEdit(groupBox);
        letGoles_2->setObjectName(QStringLiteral("letGoles_2"));
        letGoles_2->setGeometry(QRect(440, 90, 161, 21));
        letGoles_2->setFont(font);
        letTarjetasA = new QLineEdit(groupBox);
        letTarjetasA->setObjectName(QStringLiteral("letTarjetasA"));
        letTarjetasA->setGeometry(QRect(190, 240, 161, 21));
        letTarjetasA->setFont(font);
        lblTarjetasR = new QLabel(groupBox);
        lblTarjetasR->setObjectName(QStringLiteral("lblTarjetasR"));
        lblTarjetasR->setGeometry(QRect(30, 270, 131, 16));
        lblTarjetasR->setFont(font);
        letPAdelantada_2 = new QLineEdit(groupBox);
        letPAdelantada_2->setObjectName(QStringLiteral("letPAdelantada_2"));
        letPAdelantada_2->setGeometry(QRect(440, 300, 161, 21));
        letPAdelantada_2->setFont(font);
        lblFecha = new QLabel(groupBox);
        lblFecha->setObjectName(QStringLiteral("lblFecha"));
        lblFecha->setGeometry(QRect(220, 380, 51, 21));
        lblFecha->setFont(font);
        lblHora = new QLabel(groupBox);
        lblHora->setObjectName(QStringLiteral("lblHora"));
        lblHora->setGeometry(QRect(220, 410, 41, 21));
        lblHora->setFont(font);
        letFecha = new QLineEdit(groupBox);
        letFecha->setObjectName(QStringLiteral("letFecha"));
        letFecha->setGeometry(QRect(280, 380, 161, 21));
        letFecha->setFont(font);
        letHora = new QLineEdit(groupBox);
        letHora->setObjectName(QStringLiteral("letHora"));
        letHora->setGeometry(QRect(280, 410, 161, 21));
        letHora->setFont(font);
        pboAceptar = new QPushButton(MantenimientoPartidos);
        pboAceptar->setObjectName(QStringLiteral("pboAceptar"));
        pboAceptar->setGeometry(QRect(560, 630, 81, 31));

        retranslateUi(MantenimientoPartidos);
        QObject::connect(pboAceptar, SIGNAL(clicked()), MantenimientoPartidos, SLOT(accept()));

        QMetaObject::connectSlotsByName(MantenimientoPartidos);
    } // setupUi

    void retranslateUi(QDialog *MantenimientoPartidos)
    {
        MantenimientoPartidos->setWindowTitle(QApplication::translate("MantenimientoPartidos", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("MantenimientoPartidos", "Partidos", 0));
        lblEquipo->setText(QApplication::translate("MantenimientoPartidos", "Equipos:", 0));
        lblTEsquina->setText(QApplication::translate("MantenimientoPartidos", "Tiros de Esquina", 0));
        lblPAdelantada->setText(QApplication::translate("MantenimientoPartidos", "Posicion Adelantada:", 0));
        groupBox_2->setTitle(QApplication::translate("MantenimientoPartidos", "Opciones", 0));
        rdbModificar->setText(QApplication::translate("MantenimientoPartidos", "Modificar", 0));
        rdbEliminar->setText(QApplication::translate("MantenimientoPartidos", "Eliminar", 0));
        rdbInsertar->setText(QApplication::translate("MantenimientoPartidos", "Insertar", 0));
        rdbSalir->setText(QApplication::translate("MantenimientoPartidos", "Salir", 0));
        lblGoles->setText(QApplication::translate("MantenimientoPartidos", "Goles:", 0));
        lblRemates->setText(QApplication::translate("MantenimientoPartidos", "Remates:", 0));
        lblPosesion->setText(QApplication::translate("MantenimientoPartidos", "Posesion:", 0));
        lblVS->setText(QApplication::translate("MantenimientoPartidos", "VS", 0));
        lblPases->setText(QApplication::translate("MantenimientoPartidos", "Pases:", 0));
        lblTarjetasA->setText(QApplication::translate("MantenimientoPartidos", "Tarjetas Amarrillas:", 0));
        lblFaltas->setText(QApplication::translate("MantenimientoPartidos", "Faltas:", 0));
        lblTarjetasR->setText(QApplication::translate("MantenimientoPartidos", "Tarjetas Rojas:", 0));
        lblFecha->setText(QApplication::translate("MantenimientoPartidos", "Fecha:", 0));
        lblHora->setText(QApplication::translate("MantenimientoPartidos", "Hora:", 0));
        pboAceptar->setText(QApplication::translate("MantenimientoPartidos", "Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class MantenimientoPartidos: public Ui_MantenimientoPartidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANTENIMIENTOPARTIDOS_H
