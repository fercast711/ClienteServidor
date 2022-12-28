/********************************************************************************
** Form generated from reading UI file 'cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTE_H
#define UI_CLIENTE_H

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

class Ui_Cliente
{
public:
    QAction *actionConexion_Server;
    QAction *actionCarga_de_equipos;
    QAction *actionIngreso_de_prediccion;
    QWidget *centralWidget;
    QLabel *lblTitulo;
    QListWidget *lswSelecciones;
    QLabel *lblEquipos;
    QLabel *lblPartidoDe;
    QTableWidget *twdPartidos;
    QLabel *lblPartidoDe_2;
    QListWidget *lswJugadores;
    QGroupBox *groupBox;
    QLabel *lblFederacion;
    QLineEdit *letPuntos;
    QLabel *lblDirector;
    QLabel *lblPartidosP;
    QLabel *lblSeleccion;
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
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Cliente)
    {
        if (Cliente->objectName().isEmpty())
            Cliente->setObjectName(QStringLiteral("Cliente"));
        Cliente->resize(938, 657);
        actionConexion_Server = new QAction(Cliente);
        actionConexion_Server->setObjectName(QStringLiteral("actionConexion_Server"));
        actionCarga_de_equipos = new QAction(Cliente);
        actionCarga_de_equipos->setObjectName(QStringLiteral("actionCarga_de_equipos"));
        actionIngreso_de_prediccion = new QAction(Cliente);
        actionIngreso_de_prediccion->setObjectName(QStringLiteral("actionIngreso_de_prediccion"));
        centralWidget = new QWidget(Cliente);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblTitulo = new QLabel(centralWidget);
        lblTitulo->setObjectName(QStringLiteral("lblTitulo"));
        lblTitulo->setGeometry(QRect(170, 0, 571, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lblTitulo->setFont(font);
        lswSelecciones = new QListWidget(centralWidget);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        new QListWidgetItem(lswSelecciones);
        lswSelecciones->setObjectName(QStringLiteral("lswSelecciones"));
        lswSelecciones->setGeometry(QRect(40, 90, 231, 501));
        QFont font1;
        font1.setPointSize(11);
        lswSelecciones->setFont(font1);
        lblEquipos = new QLabel(centralWidget);
        lblEquipos->setObjectName(QStringLiteral("lblEquipos"));
        lblEquipos->setGeometry(QRect(50, 60, 221, 21));
        QFont font2;
        font2.setPointSize(12);
        lblEquipos->setFont(font2);
        lblPartidoDe = new QLabel(centralWidget);
        lblPartidoDe->setObjectName(QStringLiteral("lblPartidoDe"));
        lblPartidoDe->setGeometry(QRect(330, 430, 131, 21));
        lblPartidoDe->setFont(font2);
        twdPartidos = new QTableWidget(centralWidget);
        if (twdPartidos->columnCount() < 4)
            twdPartidos->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twdPartidos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twdPartidos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twdPartidos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twdPartidos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        twdPartidos->setObjectName(QStringLiteral("twdPartidos"));
        twdPartidos->setGeometry(QRect(320, 460, 581, 131));
        lblPartidoDe_2 = new QLabel(centralWidget);
        lblPartidoDe_2->setObjectName(QStringLiteral("lblPartidoDe_2"));
        lblPartidoDe_2->setGeometry(QRect(690, 80, 151, 21));
        lblPartidoDe_2->setFont(font2);
        lswJugadores = new QListWidget(centralWidget);
        lswJugadores->setObjectName(QStringLiteral("lswJugadores"));
        lswJugadores->setGeometry(QRect(680, 110, 221, 301));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(320, 90, 351, 331));
        groupBox->setFont(font2);
        lblFederacion = new QLabel(groupBox);
        lblFederacion->setObjectName(QStringLiteral("lblFederacion"));
        lblFederacion->setGeometry(QRect(20, 150, 131, 16));
        lblFederacion->setFont(font2);
        letPuntos = new QLineEdit(groupBox);
        letPuntos->setObjectName(QStringLiteral("letPuntos"));
        letPuntos->setGeometry(QRect(180, 120, 161, 21));
        letPuntos->setFont(font2);
        lblDirector = new QLabel(groupBox);
        lblDirector->setObjectName(QStringLiteral("lblDirector"));
        lblDirector->setGeometry(QRect(20, 60, 131, 16));
        lblDirector->setFont(font2);
        lblPartidosP = new QLabel(groupBox);
        lblPartidosP->setObjectName(QStringLiteral("lblPartidosP"));
        lblPartidosP->setGeometry(QRect(20, 210, 151, 21));
        lblPartidosP->setFont(font2);
        lblSeleccion = new QLabel(groupBox);
        lblSeleccion->setObjectName(QStringLiteral("lblSeleccion"));
        lblSeleccion->setGeometry(QRect(180, 30, 151, 21));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        lblSeleccion->setFont(font3);
        lblGolesC = new QLabel(groupBox);
        lblGolesC->setObjectName(QStringLiteral("lblGolesC"));
        lblGolesC->setGeometry(QRect(20, 300, 131, 16));
        lblGolesC->setFont(font2);
        letAusencias = new QLineEdit(groupBox);
        letAusencias->setObjectName(QStringLiteral("letAusencias"));
        letAusencias->setGeometry(QRect(180, 240, 161, 21));
        letAusencias->setFont(font2);
        letGolesF = new QLineEdit(groupBox);
        letGolesF->setObjectName(QStringLiteral("letGolesF"));
        letGolesF->setGeometry(QRect(180, 270, 161, 21));
        letGolesF->setFont(font2);
        letPartidosJ = new QLineEdit(groupBox);
        letPartidosJ->setObjectName(QStringLiteral("letPartidosJ"));
        letPartidosJ->setGeometry(QRect(180, 180, 161, 21));
        letPartidosJ->setFont(font2);
        lblGolesF = new QLabel(groupBox);
        lblGolesF->setObjectName(QStringLiteral("lblGolesF"));
        lblGolesF->setGeometry(QRect(20, 270, 131, 16));
        lblGolesF->setFont(font2);
        letDirector = new QLineEdit(groupBox);
        letDirector->setObjectName(QStringLiteral("letDirector"));
        letDirector->setGeometry(QRect(180, 60, 161, 21));
        letDirector->setFont(font2);
        letPartidosP = new QLineEdit(groupBox);
        letPartidosP->setObjectName(QStringLiteral("letPartidosP"));
        letPartidosP->setGeometry(QRect(180, 210, 161, 21));
        letPartidosP->setFont(font2);
        letFederacion = new QLineEdit(groupBox);
        letFederacion->setObjectName(QStringLiteral("letFederacion"));
        letFederacion->setGeometry(QRect(180, 150, 161, 21));
        letFederacion->setFont(font2);
        letGolesC = new QLineEdit(groupBox);
        letGolesC->setObjectName(QStringLiteral("letGolesC"));
        letGolesC->setGeometry(QRect(180, 300, 161, 21));
        letGolesC->setFont(font2);
        lblPuntos = new QLabel(groupBox);
        lblPuntos->setObjectName(QStringLiteral("lblPuntos"));
        lblPuntos->setGeometry(QRect(20, 120, 131, 16));
        lblPuntos->setFont(font2);
        lblGrupo = new QLabel(groupBox);
        lblGrupo->setObjectName(QStringLiteral("lblGrupo"));
        lblGrupo->setGeometry(QRect(20, 90, 131, 21));
        lblGrupo->setFont(font2);
        lblAusencia = new QLabel(groupBox);
        lblAusencia->setObjectName(QStringLiteral("lblAusencia"));
        lblAusencia->setGeometry(QRect(20, 240, 131, 16));
        lblAusencia->setFont(font2);
        letGrupo = new QLineEdit(groupBox);
        letGrupo->setObjectName(QStringLiteral("letGrupo"));
        letGrupo->setGeometry(QRect(180, 90, 161, 21));
        letGrupo->setFont(font2);
        lblPartidosJ = new QLabel(groupBox);
        lblPartidosJ->setObjectName(QStringLiteral("lblPartidosJ"));
        lblPartidosJ->setGeometry(QRect(20, 180, 131, 21));
        lblPartidosJ->setFont(font2);
        Cliente->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Cliente);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 938, 20));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        Cliente->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Cliente);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Cliente->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Cliente);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Cliente->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionConexion_Server);
        menuArchivo->addAction(actionCarga_de_equipos);

        retranslateUi(Cliente);
        QObject::connect(actionConexion_Server, SIGNAL(triggered()), Cliente, SLOT(Conectar()));
        QObject::connect(lswSelecciones, SIGNAL(itemDoubleClicked(QListWidgetItem*)), Cliente, SLOT(Seleccionar()));

        QMetaObject::connectSlotsByName(Cliente);
    } // setupUi

    void retranslateUi(QMainWindow *Cliente)
    {
        Cliente->setWindowTitle(QApplication::translate("Cliente", "Cliente", 0));
        actionConexion_Server->setText(QApplication::translate("Cliente", "Conexion Server", 0));
        actionCarga_de_equipos->setText(QApplication::translate("Cliente", "Carga de equipos", 0));
        actionIngreso_de_prediccion->setText(QApplication::translate("Cliente", "Ingreso de prediccion", 0));
        lblTitulo->setText(QApplication::translate("Cliente", "Aplicacion Cliente Resultados del Mundial", 0));

        const bool __sortingEnabled = lswSelecciones->isSortingEnabled();
        lswSelecciones->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lswSelecciones->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Cliente", "Qatar", 0));
        QListWidgetItem *___qlistwidgetitem1 = lswSelecciones->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Cliente", "Ecuador", 0));
        QListWidgetItem *___qlistwidgetitem2 = lswSelecciones->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Cliente", "Senegal", 0));
        QListWidgetItem *___qlistwidgetitem3 = lswSelecciones->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Cliente", "Paises Bajos", 0));
        QListWidgetItem *___qlistwidgetitem4 = lswSelecciones->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Cliente", "Inglaterra", 0));
        QListWidgetItem *___qlistwidgetitem5 = lswSelecciones->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("Cliente", "Iran", 0));
        QListWidgetItem *___qlistwidgetitem6 = lswSelecciones->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("Cliente", "Estados Unidos", 0));
        QListWidgetItem *___qlistwidgetitem7 = lswSelecciones->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("Cliente", "Gales", 0));
        QListWidgetItem *___qlistwidgetitem8 = lswSelecciones->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("Cliente", "Argentina", 0));
        QListWidgetItem *___qlistwidgetitem9 = lswSelecciones->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("Cliente", "Arabia Saudi", 0));
        QListWidgetItem *___qlistwidgetitem10 = lswSelecciones->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("Cliente", "Mexico", 0));
        QListWidgetItem *___qlistwidgetitem11 = lswSelecciones->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("Cliente", "Polonia", 0));
        QListWidgetItem *___qlistwidgetitem12 = lswSelecciones->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("Cliente", "Francia", 0));
        QListWidgetItem *___qlistwidgetitem13 = lswSelecciones->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("Cliente", "Australia", 0));
        QListWidgetItem *___qlistwidgetitem14 = lswSelecciones->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("Cliente", "Dinamarca", 0));
        QListWidgetItem *___qlistwidgetitem15 = lswSelecciones->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("Cliente", "Tunez", 0));
        QListWidgetItem *___qlistwidgetitem16 = lswSelecciones->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("Cliente", "Espania", 0));
        QListWidgetItem *___qlistwidgetitem17 = lswSelecciones->item(17);
        ___qlistwidgetitem17->setText(QApplication::translate("Cliente", "Costa Rica", 0));
        QListWidgetItem *___qlistwidgetitem18 = lswSelecciones->item(18);
        ___qlistwidgetitem18->setText(QApplication::translate("Cliente", "Alemania", 0));
        QListWidgetItem *___qlistwidgetitem19 = lswSelecciones->item(19);
        ___qlistwidgetitem19->setText(QApplication::translate("Cliente", "Japon", 0));
        QListWidgetItem *___qlistwidgetitem20 = lswSelecciones->item(20);
        ___qlistwidgetitem20->setText(QApplication::translate("Cliente", "Belgica", 0));
        QListWidgetItem *___qlistwidgetitem21 = lswSelecciones->item(21);
        ___qlistwidgetitem21->setText(QApplication::translate("Cliente", "Canada", 0));
        QListWidgetItem *___qlistwidgetitem22 = lswSelecciones->item(22);
        ___qlistwidgetitem22->setText(QApplication::translate("Cliente", "Marruecos", 0));
        QListWidgetItem *___qlistwidgetitem23 = lswSelecciones->item(23);
        ___qlistwidgetitem23->setText(QApplication::translate("Cliente", "Croacia", 0));
        QListWidgetItem *___qlistwidgetitem24 = lswSelecciones->item(24);
        ___qlistwidgetitem24->setText(QApplication::translate("Cliente", "Brasil", 0));
        QListWidgetItem *___qlistwidgetitem25 = lswSelecciones->item(25);
        ___qlistwidgetitem25->setText(QApplication::translate("Cliente", "Portugal", 0));
        lswSelecciones->setSortingEnabled(__sortingEnabled);

        lblEquipos->setText(QApplication::translate("Cliente", "Equipos del mundial de Qatar", 0));
        lblPartidoDe->setText(QApplication::translate("Cliente", "Partidos de Qatar:", 0));
        QTableWidgetItem *___qtablewidgetitem = twdPartidos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Cliente", "Equipo1", 0));
        QTableWidgetItem *___qtablewidgetitem1 = twdPartidos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Cliente", "Equipo2", 0));
        QTableWidgetItem *___qtablewidgetitem2 = twdPartidos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Cliente", "Fecha", 0));
        QTableWidgetItem *___qtablewidgetitem3 = twdPartidos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Cliente", "Hora", 0));
        lblPartidoDe_2->setText(QApplication::translate("Cliente", "Jugadores de Qatar", 0));
        groupBox->setTitle(QApplication::translate("Cliente", "Equipos", 0));
        lblFederacion->setText(QApplication::translate("Cliente", "Federacion:", 0));
        lblDirector->setText(QApplication::translate("Cliente", "Director Tecnico:", 0));
        lblPartidosP->setText(QApplication::translate("Cliente", "Partidos Pendientes:", 0));
        lblSeleccion->setText(QApplication::translate("Cliente", "Qatar", 0));
        lblGolesC->setText(QApplication::translate("Cliente", "Goles en Contra:", 0));
        lblGolesF->setText(QApplication::translate("Cliente", "Goles a Favor:", 0));
        lblPuntos->setText(QApplication::translate("Cliente", "Puntos:", 0));
        lblGrupo->setText(QApplication::translate("Cliente", "Grupo:", 0));
        lblAusencia->setText(QApplication::translate("Cliente", "Ausencias:", 0));
        lblPartidosJ->setText(QApplication::translate("Cliente", "Partidos Jugados:", 0));
        menuArchivo->setTitle(QApplication::translate("Cliente", "Archivo", 0));
    } // retranslateUi

};

namespace Ui {
    class Cliente: public Ui_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTE_H
