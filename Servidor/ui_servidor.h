/********************************************************************************
** Form generated from reading UI file 'servidor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVIDOR_H
#define UI_SERVIDOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Servidor
{
public:
    QAction *actionAbrir_Archivo;
    QAction *actionGuardar_Archivo;
    QAction *actionConfiguracion_Server;
    QAction *actionSalir;
    QAction *actionDatos_de_Equipo;
    QAction *actionDatos_de_Partidos;
    QAction *actionPredicciones_de_usuarios;
    QWidget *centralWidget;
    QLabel *lblTitulo;
    QLabel *lblEquipos;
    QLabel *lblEncuentros;
    QTableWidget *twdEncuentros;
    QGroupBox *groupBox;
    QLineEdit *letTarjetasR_2;
    QLineEdit *letFaltas_2;
    QLineEdit *letTarjetasA_2;
    QLabel *lblTEsquina;
    QLineEdit *letPAdelantada;
    QLineEdit *letPosesion;
    QLabel *lblPases;
    QLineEdit *letTEsquina_2;
    QLineEdit *letPosesion_2;
    QLabel *lblPosesion;
    QLabel *lblEquipo2;
    QLineEdit *letGoles_2;
    QLabel *lblPAdelantada;
    QLineEdit *letPases;
    QLineEdit *letTarjetasA;
    QLineEdit *letTarjetasR;
    QLineEdit *letRemates_2;
    QLineEdit *letRemates;
    QLabel *lblVS;
    QLineEdit *letPAdelantada_2;
    QLabel *lblTarjetasA;
    QLineEdit *letFaltas;
    QLineEdit *letTEsquina;
    QLabel *lblFaltas;
    QLineEdit *letGoles;
    QLabel *lblGoles;
    QLabel *lblTarjetasR;
    QLineEdit *letPases_2;
    QLabel *lblRemates;
    QLabel *lblEquipo1;
    QListWidget *lswSelecciones;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuMantenimineto;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Servidor)
    {
        if (Servidor->objectName().isEmpty())
            Servidor->setObjectName(QStringLiteral("Servidor"));
        Servidor->resize(961, 666);
        actionAbrir_Archivo = new QAction(Servidor);
        actionAbrir_Archivo->setObjectName(QStringLiteral("actionAbrir_Archivo"));
        actionGuardar_Archivo = new QAction(Servidor);
        actionGuardar_Archivo->setObjectName(QStringLiteral("actionGuardar_Archivo"));
        actionConfiguracion_Server = new QAction(Servidor);
        actionConfiguracion_Server->setObjectName(QStringLiteral("actionConfiguracion_Server"));
        actionSalir = new QAction(Servidor);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionDatos_de_Equipo = new QAction(Servidor);
        actionDatos_de_Equipo->setObjectName(QStringLiteral("actionDatos_de_Equipo"));
        actionDatos_de_Partidos = new QAction(Servidor);
        actionDatos_de_Partidos->setObjectName(QStringLiteral("actionDatos_de_Partidos"));
        actionPredicciones_de_usuarios = new QAction(Servidor);
        actionPredicciones_de_usuarios->setObjectName(QStringLiteral("actionPredicciones_de_usuarios"));
        centralWidget = new QWidget(Servidor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblTitulo = new QLabel(centralWidget);
        lblTitulo->setObjectName(QStringLiteral("lblTitulo"));
        lblTitulo->setGeometry(QRect(170, 10, 591, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lblTitulo->setFont(font);
        lblEquipos = new QLabel(centralWidget);
        lblEquipos->setObjectName(QStringLiteral("lblEquipos"));
        lblEquipos->setGeometry(QRect(50, 70, 221, 21));
        QFont font1;
        font1.setPointSize(12);
        lblEquipos->setFont(font1);
        lblEncuentros = new QLabel(centralWidget);
        lblEncuentros->setObjectName(QStringLiteral("lblEncuentros"));
        lblEncuentros->setGeometry(QRect(320, 70, 171, 21));
        lblEncuentros->setFont(font1);
        twdEncuentros = new QTableWidget(centralWidget);
        if (twdEncuentros->columnCount() < 4)
            twdEncuentros->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twdEncuentros->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twdEncuentros->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twdEncuentros->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twdEncuentros->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        twdEncuentros->setObjectName(QStringLiteral("twdEncuentros"));
        twdEncuentros->setGeometry(QRect(310, 100, 621, 141));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(310, 260, 611, 341));
        groupBox->setFont(font1);
        letTarjetasR_2 = new QLineEdit(groupBox);
        letTarjetasR_2->setObjectName(QStringLiteral("letTarjetasR_2"));
        letTarjetasR_2->setGeometry(QRect(430, 250, 161, 21));
        letTarjetasR_2->setFont(font1);
        letFaltas_2 = new QLineEdit(groupBox);
        letFaltas_2->setObjectName(QStringLiteral("letFaltas_2"));
        letFaltas_2->setGeometry(QRect(430, 190, 161, 21));
        letFaltas_2->setFont(font1);
        letTarjetasA_2 = new QLineEdit(groupBox);
        letTarjetasA_2->setObjectName(QStringLiteral("letTarjetasA_2"));
        letTarjetasA_2->setGeometry(QRect(430, 220, 161, 21));
        letTarjetasA_2->setFont(font1);
        lblTEsquina = new QLabel(groupBox);
        lblTEsquina->setObjectName(QStringLiteral("lblTEsquina"));
        lblTEsquina->setGeometry(QRect(20, 310, 131, 21));
        lblTEsquina->setFont(font1);
        letPAdelantada = new QLineEdit(groupBox);
        letPAdelantada->setObjectName(QStringLiteral("letPAdelantada"));
        letPAdelantada->setGeometry(QRect(180, 280, 161, 21));
        letPAdelantada->setFont(font1);
        letPosesion = new QLineEdit(groupBox);
        letPosesion->setObjectName(QStringLiteral("letPosesion"));
        letPosesion->setGeometry(QRect(180, 130, 161, 21));
        letPosesion->setFont(font1);
        lblPases = new QLabel(groupBox);
        lblPases->setObjectName(QStringLiteral("lblPases"));
        lblPases->setGeometry(QRect(20, 160, 131, 16));
        lblPases->setFont(font1);
        letTEsquina_2 = new QLineEdit(groupBox);
        letTEsquina_2->setObjectName(QStringLiteral("letTEsquina_2"));
        letTEsquina_2->setGeometry(QRect(430, 310, 161, 21));
        letTEsquina_2->setFont(font1);
        letPosesion_2 = new QLineEdit(groupBox);
        letPosesion_2->setObjectName(QStringLiteral("letPosesion_2"));
        letPosesion_2->setGeometry(QRect(430, 130, 161, 21));
        letPosesion_2->setFont(font1);
        lblPosesion = new QLabel(groupBox);
        lblPosesion->setObjectName(QStringLiteral("lblPosesion"));
        lblPosesion->setGeometry(QRect(20, 130, 131, 16));
        lblPosesion->setFont(font1);
        lblEquipo2 = new QLabel(groupBox);
        lblEquipo2->setObjectName(QStringLiteral("lblEquipo2"));
        lblEquipo2->setGeometry(QRect(430, 40, 151, 21));
        lblEquipo2->setFont(font1);
        letGoles_2 = new QLineEdit(groupBox);
        letGoles_2->setObjectName(QStringLiteral("letGoles_2"));
        letGoles_2->setGeometry(QRect(430, 70, 161, 21));
        letGoles_2->setFont(font1);
        lblPAdelantada = new QLabel(groupBox);
        lblPAdelantada->setObjectName(QStringLiteral("lblPAdelantada"));
        lblPAdelantada->setGeometry(QRect(20, 280, 151, 16));
        lblPAdelantada->setFont(font1);
        letPases = new QLineEdit(groupBox);
        letPases->setObjectName(QStringLiteral("letPases"));
        letPases->setGeometry(QRect(180, 160, 161, 21));
        letPases->setFont(font1);
        letTarjetasA = new QLineEdit(groupBox);
        letTarjetasA->setObjectName(QStringLiteral("letTarjetasA"));
        letTarjetasA->setGeometry(QRect(180, 220, 161, 21));
        letTarjetasA->setFont(font1);
        letTarjetasR = new QLineEdit(groupBox);
        letTarjetasR->setObjectName(QStringLiteral("letTarjetasR"));
        letTarjetasR->setGeometry(QRect(180, 250, 161, 21));
        letTarjetasR->setFont(font1);
        letRemates_2 = new QLineEdit(groupBox);
        letRemates_2->setObjectName(QStringLiteral("letRemates_2"));
        letRemates_2->setGeometry(QRect(430, 100, 161, 21));
        letRemates_2->setFont(font1);
        letRemates = new QLineEdit(groupBox);
        letRemates->setObjectName(QStringLiteral("letRemates"));
        letRemates->setGeometry(QRect(180, 100, 161, 21));
        letRemates->setFont(font1);
        lblVS = new QLabel(groupBox);
        lblVS->setObjectName(QStringLiteral("lblVS"));
        lblVS->setGeometry(QRect(380, 30, 21, 16));
        lblVS->setFont(font1);
        letPAdelantada_2 = new QLineEdit(groupBox);
        letPAdelantada_2->setObjectName(QStringLiteral("letPAdelantada_2"));
        letPAdelantada_2->setGeometry(QRect(430, 280, 161, 21));
        letPAdelantada_2->setFont(font1);
        lblTarjetasA = new QLabel(groupBox);
        lblTarjetasA->setObjectName(QStringLiteral("lblTarjetasA"));
        lblTarjetasA->setGeometry(QRect(20, 220, 151, 21));
        lblTarjetasA->setFont(font1);
        letFaltas = new QLineEdit(groupBox);
        letFaltas->setObjectName(QStringLiteral("letFaltas"));
        letFaltas->setGeometry(QRect(180, 190, 161, 21));
        letFaltas->setFont(font1);
        letTEsquina = new QLineEdit(groupBox);
        letTEsquina->setObjectName(QStringLiteral("letTEsquina"));
        letTEsquina->setGeometry(QRect(180, 310, 161, 21));
        letTEsquina->setFont(font1);
        lblFaltas = new QLabel(groupBox);
        lblFaltas->setObjectName(QStringLiteral("lblFaltas"));
        lblFaltas->setGeometry(QRect(20, 190, 131, 21));
        lblFaltas->setFont(font1);
        letGoles = new QLineEdit(groupBox);
        letGoles->setObjectName(QStringLiteral("letGoles"));
        letGoles->setGeometry(QRect(180, 70, 161, 21));
        letGoles->setFont(font1);
        lblGoles = new QLabel(groupBox);
        lblGoles->setObjectName(QStringLiteral("lblGoles"));
        lblGoles->setGeometry(QRect(20, 70, 131, 16));
        lblGoles->setFont(font1);
        lblTarjetasR = new QLabel(groupBox);
        lblTarjetasR->setObjectName(QStringLiteral("lblTarjetasR"));
        lblTarjetasR->setGeometry(QRect(20, 250, 131, 16));
        lblTarjetasR->setFont(font1);
        letPases_2 = new QLineEdit(groupBox);
        letPases_2->setObjectName(QStringLiteral("letPases_2"));
        letPases_2->setGeometry(QRect(430, 160, 161, 21));
        letPases_2->setFont(font1);
        lblRemates = new QLabel(groupBox);
        lblRemates->setObjectName(QStringLiteral("lblRemates"));
        lblRemates->setGeometry(QRect(20, 100, 131, 21));
        lblRemates->setFont(font1);
        lblEquipo1 = new QLabel(groupBox);
        lblEquipo1->setObjectName(QStringLiteral("lblEquipo1"));
        lblEquipo1->setGeometry(QRect(180, 40, 161, 21));
        lblEquipo1->setFont(font1);
        lblEquipo1->setLayoutDirection(Qt::LeftToRight);
        lswSelecciones = new QListWidget(centralWidget);
        lswSelecciones->setObjectName(QStringLiteral("lswSelecciones"));
        lswSelecciones->setGeometry(QRect(40, 100, 231, 501));
        QFont font2;
        font2.setPointSize(11);
        lswSelecciones->setFont(font2);
        Servidor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Servidor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 961, 20));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuMantenimineto = new QMenu(menuBar);
        menuMantenimineto->setObjectName(QStringLiteral("menuMantenimineto"));
        Servidor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Servidor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Servidor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Servidor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Servidor->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuMantenimineto->menuAction());
        menuArchivo->addAction(actionAbrir_Archivo);
        menuArchivo->addAction(actionGuardar_Archivo);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionConfiguracion_Server);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuMantenimineto->addAction(actionDatos_de_Equipo);
        menuMantenimineto->addAction(actionDatos_de_Partidos);

        retranslateUi(Servidor);
        QObject::connect(actionSalir, SIGNAL(triggered()), Servidor, SLOT(close()));
        QObject::connect(actionConfiguracion_Server, SIGNAL(triggered()), Servidor, SLOT(Configura()));
        QObject::connect(actionDatos_de_Equipo, SIGNAL(triggered()), Servidor, SLOT(ManteEquipo()));
        QObject::connect(twdEncuentros, SIGNAL(clicked(QModelIndex)), Servidor, SLOT(SeleccionarEn()));
        QObject::connect(actionDatos_de_Partidos, SIGNAL(triggered()), Servidor, SLOT(MantePartidos()));
        QObject::connect(actionGuardar_Archivo, SIGNAL(triggered()), Servidor, SLOT(Guardar()));
        QObject::connect(actionAbrir_Archivo, SIGNAL(triggered()), Servidor, SLOT(Abrir()));

        QMetaObject::connectSlotsByName(Servidor);
    } // setupUi

    void retranslateUi(QMainWindow *Servidor)
    {
        Servidor->setWindowTitle(QApplication::translate("Servidor", "Servidor", 0));
        actionAbrir_Archivo->setText(QApplication::translate("Servidor", "Abrir Archivo Equipos", 0));
        actionGuardar_Archivo->setText(QApplication::translate("Servidor", "Guardar Archivo", 0));
        actionConfiguracion_Server->setText(QApplication::translate("Servidor", "Configuracion Server", 0));
        actionSalir->setText(QApplication::translate("Servidor", "Salir", 0));
        actionDatos_de_Equipo->setText(QApplication::translate("Servidor", "Datos de Equipo", 0));
        actionDatos_de_Partidos->setText(QApplication::translate("Servidor", "Datos de Partidos", 0));
        actionPredicciones_de_usuarios->setText(QApplication::translate("Servidor", "Predicciones de usuarios", 0));
        lblTitulo->setText(QApplication::translate("Servidor", "Aplicacion Servidor Resultados del Mundial", 0));
        lblEquipos->setText(QApplication::translate("Servidor", "Equipos del mundial de Qatar", 0));
        lblEncuentros->setText(QApplication::translate("Servidor", "Encuentros del Mundial", 0));
        QTableWidgetItem *___qtablewidgetitem = twdEncuentros->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Servidor", "Equipo1", 0));
        QTableWidgetItem *___qtablewidgetitem1 = twdEncuentros->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Servidor", "Equipo2", 0));
        QTableWidgetItem *___qtablewidgetitem2 = twdEncuentros->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Servidor", "Fecha", 0));
        QTableWidgetItem *___qtablewidgetitem3 = twdEncuentros->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Servidor", "Hora", 0));
        groupBox->setTitle(QApplication::translate("Servidor", "Estadisticas", 0));
        lblTEsquina->setText(QApplication::translate("Servidor", "Tiros de Esquina", 0));
        lblPases->setText(QApplication::translate("Servidor", "Pases:", 0));
        lblPosesion->setText(QApplication::translate("Servidor", "Posesion:", 0));
        lblEquipo2->setText(QApplication::translate("Servidor", "<html><head/><body><p>Ecuador</p></body></html>", 0));
        lblPAdelantada->setText(QApplication::translate("Servidor", "Posicion Adelantada:", 0));
        lblVS->setText(QApplication::translate("Servidor", "VS", 0));
        lblTarjetasA->setText(QApplication::translate("Servidor", "Tarjetas Amarrillas:", 0));
        lblFaltas->setText(QApplication::translate("Servidor", "Faltas:", 0));
        lblGoles->setText(QApplication::translate("Servidor", "Goles:", 0));
        lblTarjetasR->setText(QApplication::translate("Servidor", "Tarjetas Rojas:", 0));
        lblRemates->setText(QApplication::translate("Servidor", "Remates:", 0));
        lblEquipo1->setText(QApplication::translate("Servidor", "<html><head/><body><p>Qatar</p></body></html>", 0));
        menuArchivo->setTitle(QApplication::translate("Servidor", "Archivo", 0));
        menuMantenimineto->setTitle(QApplication::translate("Servidor", "Mantenimiento", 0));
    } // retranslateUi

};

namespace Ui {
    class Servidor: public Ui_Servidor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVIDOR_H
