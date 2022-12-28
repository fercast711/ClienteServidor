/********************************************************************************
** Form generated from reading UI file 'configuracion.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION_H
#define UI_CONFIGURACION_H

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

class Ui_Configuracion
{
public:
    QLabel *lblTitulo;
    QLabel *lblPuerto;
    QLineEdit *letPuerto;
    QPushButton *pboAcept;
    QGroupBox *groupBox;
    QRadioButton *rdbApagar;
    QRadioButton *rdbEncender;

    void setupUi(QDialog *Configuracion)
    {
        if (Configuracion->objectName().isEmpty())
            Configuracion->setObjectName(QStringLiteral("Configuracion"));
        Configuracion->resize(400, 259);
        lblTitulo = new QLabel(Configuracion);
        lblTitulo->setObjectName(QStringLiteral("lblTitulo"));
        lblTitulo->setGeometry(QRect(80, 10, 251, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lblTitulo->setFont(font);
        lblPuerto = new QLabel(Configuracion);
        lblPuerto->setObjectName(QStringLiteral("lblPuerto"));
        lblPuerto->setGeometry(QRect(110, 70, 61, 16));
        QFont font1;
        font1.setPointSize(12);
        lblPuerto->setFont(font1);
        letPuerto = new QLineEdit(Configuracion);
        letPuerto->setObjectName(QStringLiteral("letPuerto"));
        letPuerto->setGeometry(QRect(180, 70, 113, 21));
        letPuerto->setFont(font1);
        pboAcept = new QPushButton(Configuracion);
        pboAcept->setObjectName(QStringLiteral("pboAcept"));
        pboAcept->setGeometry(QRect(240, 200, 91, 31));
        pboAcept->setFont(font1);
        groupBox = new QGroupBox(Configuracion);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 100, 261, 80));
        groupBox->setFont(font1);
        rdbApagar = new QRadioButton(groupBox);
        rdbApagar->setObjectName(QStringLiteral("rdbApagar"));
        rdbApagar->setGeometry(QRect(30, 40, 84, 19));
        rdbApagar->setChecked(true);
        rdbEncender = new QRadioButton(groupBox);
        rdbEncender->setObjectName(QStringLiteral("rdbEncender"));
        rdbEncender->setGeometry(QRect(140, 40, 84, 19));

        retranslateUi(Configuracion);
        QObject::connect(pboAcept, SIGNAL(clicked()), Configuracion, SLOT(accept()));

        QMetaObject::connectSlotsByName(Configuracion);
    } // setupUi

    void retranslateUi(QDialog *Configuracion)
    {
        Configuracion->setWindowTitle(QApplication::translate("Configuracion", "Dialog", 0));
        lblTitulo->setText(QApplication::translate("Configuracion", "Configuracion Servidor", 0));
        lblPuerto->setText(QApplication::translate("Configuracion", "Puerto", 0));
        letPuerto->setText(QApplication::translate("Configuracion", "69", 0));
        pboAcept->setText(QApplication::translate("Configuracion", "Aceptar", 0));
        groupBox->setTitle(QApplication::translate("Configuracion", "Encender", 0));
        rdbApagar->setText(QApplication::translate("Configuracion", "Apagar", 0));
        rdbEncender->setText(QApplication::translate("Configuracion", "Encender", 0));
    } // retranslateUi

};

namespace Ui {
    class Configuracion: public Ui_Configuracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION_H
