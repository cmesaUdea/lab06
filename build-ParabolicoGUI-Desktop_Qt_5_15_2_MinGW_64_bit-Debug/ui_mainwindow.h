/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *bntSimular;
    QLineEdit *putOpcion;
    QLineEdit *le_ang;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(25, 1, 1270, 631));
        bntSimular = new QPushButton(centralwidget);
        bntSimular->setObjectName(QString::fromUtf8("bntSimular"));
        bntSimular->setGeometry(QRect(680, 640, 75, 24));
        putOpcion = new QLineEdit(centralwidget);
        putOpcion->setObjectName(QString::fromUtf8("putOpcion"));
        putOpcion->setGeometry(QRect(360, 640, 71, 22));
        putOpcion->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(83, 86, 255);\n"
"color: rgb(21, 115, 255);\n"
"background-color: rgb(255, 255, 255);"));
        le_ang = new QLineEdit(centralwidget);
        le_ang->setObjectName(QString::fromUtf8("le_ang"));
        le_ang->setGeometry(QRect(30, 640, 111, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 640, 111, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 640, 111, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 660, 111, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 20));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bntSimular->setText(QCoreApplication::translate("MainWindow", "Simular", nullptr));
        putOpcion->setText(QString());
        le_ang->setText(QCoreApplication::translate("MainWindow", "Ingrese una opcion: ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0. Limpiar escenario", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "1. Cinco cuerpos", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "2. Tres cuerpos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
