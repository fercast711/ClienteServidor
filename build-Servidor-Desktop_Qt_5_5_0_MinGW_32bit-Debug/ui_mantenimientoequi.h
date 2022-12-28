/********************************************************************************
** Form generated from reading UI file 'mantenimientoequi.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANTENIMIENTOEQUI_H
#define UI_MANTENIMIENTOEQUI_H

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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MantenimientoEqui
{
public:
    QGroupBox *groupBox;
    QLabel *lblFederacion;
    QLineEdit *letPuntos;
    QLabel *lblDirector;
    QLabel *lblPartidosP;
    QLabel *lblGolesC;
    QLineEdit *letAusencias;
    QLineEdit *letGolesF;
    QLineEdit *letPartidosJ;
    QLabel *lblGolesF;
    QLineEdit *letDirector;
    QLineEdit *letPartidosP;
    QLineEdit *letFederacion;
    QLineEdit *letGolesC;
    QLabel *lblPuntos;
    QLabel *lblGrupo;
    QLabel *lblAusencia;
    QLineEdit *letGrupo;
    QLabel *lblPartidosJ;
    QLabel *lblJugadores;
    QTextEdit *txtJugadores;
    QLabel *lblEquipo;
    QLineEdit *letEquipo;
    QGroupBox *groupBox_2;
    QRadioButton *rdbModificar;
    QRadioButton *rdbEliminar;
    QRadioButton *rdbInsertar;
    QRadioButton *rdbInsertar_2;
    QPushButton *pboAceptar;

    void setupUi(QDialog *MantenimientoEqui)
    {
        if (MantenimientoEqui->objectName().isEmpty())
            MantenimientoEqui->setObjectName(QStringLiteral("MantenimientoEqui"));
        MantenimientoEqui->resize(474, 763);
        groupBox = new QGroupBox(MantenimientoEqui);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 351, 671));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        lblFederacion = new QLabel(groupBox);
        lblFederacion->setObjectName(QStringLiteral("lblFederacion"));
        lblFederacion->setGeometry(QRect(20, 150, 131, 16));
        lblFederacion->setFont(font);
        letPuntos = new QLineEdit(groupBox);
        letPuntos->setObjectName(QStringLiteral("letPuntos"));
        letPuntos->setGeometry(QRect(180, 120, 161, 21));
        letPuntos->setFont(font);
        lblDirector = new QLabel(groupBox);
        lblDirector->setObjectName(QStringLiteral("lblDirector"));
        lblDirector->setGeometry(QRect(20, 60, 131, 16));
        lblDirector->setFont(font);
        lblPartidosP = new QLabel(groupBox);
        lblPartidosP->setObjectName(QStringLiteral("lblPartidosP"));
        lblPartidosP->setGeometry(QRect(20, 210, 151, 21));
        lblPartidosP->setFont(font);
        lblGolesC = new QLabel(groupBox);
        lblGolesC->setObjectName(QStringLiteral("lblGolesC"));
        lblGolesC->setGeometry(QRect(20, 300, 131, 16));
        lblGolesC->setFont(font);
        letAusencias = new QLineEdit(groupBox);
        letAusencias->setObjectName(QStringLiteral("letAusencias"));
        letAusencias->setGeometry(QRect(180, 240, 161, 21));
        letAusencias->setFont(font);
        letGolesF = new QLineEdit(groupBox);
        letGolesF->setObjectName(QStringLiteral("letGolesF"));
        letGolesF->setGeometry(QRect(180, 270, 161, 21));
        letGolesF->setFont(font);
        letPartidosJ = new QLineEdit(groupBox);
        letPartidosJ->setObjectName(QStringLiteral("letPartidosJ"));
        letPartidosJ->setGeometry(QRect(180, 180, 161, 21));
        letPartidosJ->setFont(font);
        lblGolesF = new QLabel(groupBox);
        lblGolesF->setObjectName(QStringLiteral("lblGolesF"));
        lblGolesF->setGeometry(QRect(20, 270, 131, 16));
        lblGolesF->setFont(font);
        letDirector = new QLineEdit(groupBox);
        letDirector->setObjectName(QStringLiteral("letDirector"));
        letDirector->setGeometry(QRect(180, 60, 161, 21));
        letDirector->setFont(font);
        letPartidosP = new QLineEdit(groupBox);
        letPartidosP->setObjectName(QStringLiteral("letPartidosP"));
        letPartidosP->setGeometry(QRect(180, 210, 161, 21));
        letPartidosP->setFont(font);
        letFederacion = new QLineEdit(groupBox);
        letFederacion->setObjectName(QStringLiteral("letFederacion"));
        letFederacion->setGeometry(QRect(180, 150, 161, 21));
        letFederacion->setFont(font);
        letGolesC = new QLineEdit(groupBox);
        letGolesC->setObjectName(QStringLiteral("letGolesC"));
        letGolesC->setGeometry(QRect(180, 300, 161, 21));
        letGolesC->setFont(font);
        lblPuntos = new QLabel(groupBox);
        lblPuntos->setObjectName(QStringLiteral("lblPuntos"));
        lblPuntos->setGeometry(QRect(20, 120, 131, 16));
        lblPuntos->setFont(font);
        lblGrupo = new QLabel(groupBox);
        lblGrupo->setObjectName(QStringLiteral("lblGrupo"));
        lblGrupo->setGeometry(QRect(20, 90, 131, 21));
        lblGrupo->setFont(font);
        lblAusencia = new QLabel(groupBox);
        lblAusencia->setObjectName(QStringLiteral("lblAusencia"));
        lblAusencia->setGeometry(QRect(20, 240, 131, 16));
        lblAusencia->setFont(font);
        letGrupo = new QLineEdit(groupBox);
        letGrupo->setObjectName(QStringLiteral("letGrupo"));
        letGrupo->setGeometry(QRect(180, 90, 161, 21));
        letGrupo->setFont(font);
        lblPartidosJ = new QLabel(groupBox);
        lblPartidosJ->setObjectName(QStringLiteral("lblPartidosJ"));
        lblPartidosJ->setGeometry(QRect(20, 180, 131, 21));
        lblPartidosJ->setFont(font);
        lblJugadores = new QLabel(groupBox);
        lblJugadores->setObjectName(QStringLiteral("lblJugadores"));
        lblJugadores->setGeometry(QRect(130, 340, 81, 21));
        lblJugadores->setFont(font);
        txtJugadores = new QTextEdit(groupBox);
        txtJugadores->setObjectName(QStringLiteral("txtJugadores"));
        txtJugadores->setGeometry(QRect(40, 380, 271, 141));
        lblEquipo = new QLabel(groupBox);
        lblEquipo->setObjectName(QStringLiteral("lblEquipo"));
        lblEquipo->setGeometry(QRect(20, 30, 131, 21));
        lblEquipo->setFont(font);
        letEquipo = new QLineEdit(groupBox);
        letEquipo->setObjectName(QStringLiteral("letEquipo"));
        letEquipo->setGeometry(QRect(180, 30, 161, 21));
        letEquipo->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 540, 271, 111));
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
        rdbInsertar_2 = new QRadioButton(groupBox_2);
        rdbInsertar_2->setObjectName(QStringLiteral("rdbInsertar_2"));
        rdbInsertar_2->setGeometry(QRect(150, 70, 84, 19));
        rdbInsertar_2->setChecked(true);
        pboAceptar = new QPushButton(MantenimientoEqui);
        pboAceptar->setObjectName(QStringLiteral("pboAceptar"));
        pboAceptar->setGeometry(QRect(330, 710, 80, 21));

        retranslateUi(MantenimientoEqui);
        QObject::connect(pboAceptar, SIGNAL(clicked()), MantenimientoEqui, SLOT(accept()));

        QMetaObject::connectSlotsByName(MantenimientoEqui);
    } // setupUi

    void retranslateUi(QDialog *MantenimientoEqui)
    {
        MantenimientoEqui->setWindowTitle(QApplication::translate("MantenimientoEqui", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("MantenimientoEqui", "Equipos", 0));
        lblFederacion->setText(QApplication::translate("MantenimientoEqui", "Federacion:", 0));
        lblDirector->setText(QApplication::translate("MantenimientoEqui", "Director Tecnico:", 0));
        lblPartidosP->setText(QApplication::translate("MantenimientoEqui", "Partidos Pendientes:", 0));
        lblGolesC->setText(QApplication::translate("MantenimientoEqui", "Goles en Contra:", 0));
        lblGolesF->setText(QApplication::translate("MantenimientoEqui", "Goles a Favor:", 0));
        lblPuntos->setText(QApplication::translate("MantenimientoEqui", "Puntos:", 0));
        lblGrupo->setText(QApplication::translate("MantenimientoEqui", "Grupo:", 0));
        lblAusencia->setText(QApplication::translate("MantenimientoEqui", "Ausencias:", 0));
        lblPartidosJ->setText(QApplication::translate("MantenimientoEqui", "Partidos Jugados:", 0));
        lblJugadores->setText(QApplication::translate("MantenimientoEqui", "Jugadores", 0));
        lblEquipo->setText(QApplication::translate("MantenimientoEqui", "Equipo:", 0));
        groupBox_2->setTitle(QApplication::translate("MantenimientoEqui", "Opciones", 0));
        rdbModificar->setText(QApplication::translate("MantenimientoEqui", "Modificar", 0));
        rdbEliminar->setText(QApplication::translate("MantenimientoEqui", "Eliminar", 0));
        rdbInsertar->setText(QApplication::translate("MantenimientoEqui", "Insertar", 0));
        rdbInsertar_2->setText(QApplication::translate("MantenimientoEqui", "Salir", 0));
        pboAceptar->setText(QApplication::translate("MantenimientoEqui", "Aceptar", 0));
    } // retranslateUi

};

namespace Ui {
    class MantenimientoEqui: public Ui_MantenimientoEqui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANTENIMIENTOEQUI_H
