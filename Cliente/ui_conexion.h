/********************************************************************************
** Form generated from reading UI file 'conexion.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONEXION_H
#define UI_CONEXION_H

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

class Ui_Conexion
{
public:
    QLabel *lblTitulo;
    QLabel *lblPuerto;
    QLineEdit *letPuerto;
    QLineEdit *letIP;
    QLabel *lblIP;
    QPushButton *pboAceptar;
    QGroupBox *groupBox;
    QRadioButton *rdbApagar;
    QRadioButton *rdbEncender;

    void setupUi(QDialog *Conexion)
    {
        if (Conexion->objectName().isEmpty())
            Conexion->setObjectName(QStringLiteral("Conexion"));
        Conexion->resize(391, 263);
        lblTitulo = new QLabel(Conexion);
        lblTitulo->setObjectName(QStringLiteral("lblTitulo"));
        lblTitulo->setGeometry(QRect(80, 10, 241, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lblTitulo->setFont(font);
        lblPuerto = new QLabel(Conexion);
        lblPuerto->setObjectName(QStringLiteral("lblPuerto"));
        lblPuerto->setGeometry(QRect(60, 50, 51, 16));
        QFont font1;
        font1.setPointSize(12);
        lblPuerto->setFont(font1);
        letPuerto = new QLineEdit(Conexion);
        letPuerto->setObjectName(QStringLiteral("letPuerto"));
        letPuerto->setGeometry(QRect(120, 50, 201, 21));
        letPuerto->setFont(font1);
        letIP = new QLineEdit(Conexion);
        letIP->setObjectName(QStringLiteral("letIP"));
        letIP->setGeometry(QRect(120, 80, 201, 21));
        letIP->setFont(font1);
        lblIP = new QLabel(Conexion);
        lblIP->setObjectName(QStringLiteral("lblIP"));
        lblIP->setGeometry(QRect(60, 80, 51, 21));
        lblIP->setFont(font1);
        pboAceptar = new QPushButton(Conexion);
        pboAceptar->setObjectName(QStringLiteral("pboAceptar"));
        pboAceptar->setGeometry(QRect(150, 210, 80, 21));
        groupBox = new QGroupBox(Conexion);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 120, 261, 80));
        groupBox->setFont(font1);
        rdbApagar = new QRadioButton(groupBox);
        rdbApagar->setObjectName(QStringLiteral("rdbApagar"));
        rdbApagar->setGeometry(QRect(30, 40, 84, 19));
        rdbApagar->setChecked(true);
        rdbEncender = new QRadioButton(groupBox);
        rdbEncender->setObjectName(QStringLiteral("rdbEncender"));
        rdbEncender->setGeometry(QRect(140, 40, 84, 19));

        retranslateUi(Conexion);
        QObject::connect(pboAceptar, SIGNAL(clicked()), Conexion, SLOT(accept()));

        QMetaObject::connectSlotsByName(Conexion);
    } // setupUi

    void retranslateUi(QDialog *Conexion)
    {
        Conexion->setWindowTitle(QApplication::translate("Conexion", "Dialog", 0));
        lblTitulo->setText(QApplication::translate("Conexion", "Conexion con el server", 0));
        lblPuerto->setText(QApplication::translate("Conexion", "Puerto", 0));
        letPuerto->setText(QApplication::translate("Conexion", "69", 0));
        letIP->setText(QApplication::translate("Conexion", "127.0.0.1", 0));
        lblIP->setText(QApplication::translate("Conexion", "Ip:", 0));
        pboAceptar->setText(QApplication::translate("Conexion", "Aceptar", 0));
        groupBox->setTitle(QApplication::translate("Conexion", "Encender", 0));
        rdbApagar->setText(QApplication::translate("Conexion", "Apagar", 0));
        rdbEncender->setText(QApplication::translate("Conexion", "Encender", 0));
    } // retranslateUi

};

namespace Ui {
    class Conexion: public Ui_Conexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONEXION_H
