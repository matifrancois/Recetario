/********************************************************************************
** Form generated from reading UI file 'Recetario.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECETARIO_H
#define UI_RECETARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecetarioClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *buscarPor;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *verReceta;
    QPushButton *crearReceta;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QPushButton *aceptarNR;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *costo;
    QLabel *label_7;
    QPushButton *volverNR;
    QLineEdit *nombre;
    QPlainTextEdit *ingredientes;
    QPlainTextEdit *pasos;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *volver2;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *volver3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RecetarioClass)
    {
        if (RecetarioClass->objectName().isEmpty())
            RecetarioClass->setObjectName(QString::fromUtf8("RecetarioClass"));
        RecetarioClass->resize(604, 393);
        centralWidget = new QWidget(RecetarioClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 3, 1, 1);

        buscarPor = new QPushButton(page);
        buscarPor->setObjectName(QString::fromUtf8("buscarPor"));

        gridLayout_2->addWidget(buscarPor, 2, 4, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        gridLayout_2->addWidget(label, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 5, 1, 1);

        verReceta = new QPushButton(page);
        verReceta->setObjectName(QString::fromUtf8("verReceta"));

        gridLayout_2->addWidget(verReceta, 2, 3, 1, 1);

        crearReceta = new QPushButton(page);
        crearReceta->setObjectName(QString::fromUtf8("crearReceta"));

        gridLayout_2->addWidget(crearReceta, 2, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        aceptarNR = new QPushButton(page_2);
        aceptarNR->setObjectName(QString::fromUtf8("aceptarNR"));

        gridLayout_3->addWidget(aceptarNR, 5, 3, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        costo = new QLineEdit(page_2);
        costo->setObjectName(QString::fromUtf8("costo"));

        gridLayout_3->addWidget(costo, 4, 1, 1, 3);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_3->addWidget(label_7, 0, 1, 1, 1);

        volverNR = new QPushButton(page_2);
        volverNR->setObjectName(QString::fromUtf8("volverNR"));

        gridLayout_3->addWidget(volverNR, 5, 0, 1, 3);

        nombre = new QLineEdit(page_2);
        nombre->setObjectName(QString::fromUtf8("nombre"));

        gridLayout_3->addWidget(nombre, 1, 1, 1, 3);

        ingredientes = new QPlainTextEdit(page_2);
        ingredientes->setObjectName(QString::fromUtf8("ingredientes"));

        gridLayout_3->addWidget(ingredientes, 2, 1, 1, 3);

        pasos = new QPlainTextEdit(page_2);
        pasos->setObjectName(QString::fromUtf8("pasos"));

        gridLayout_3->addWidget(pasos, 3, 1, 1, 3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_4 = new QHBoxLayout(page_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        volver2 = new QPushButton(page_3);
        volver2->setObjectName(QString::fromUtf8("volver2"));

        horizontalLayout_4->addWidget(volver2);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        horizontalLayout_5 = new QHBoxLayout(page_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        volver3 = new QPushButton(page_4);
        volver3->setObjectName(QString::fromUtf8("volver3"));

        horizontalLayout_5->addWidget(volver3);

        stackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(stackedWidget);

        RecetarioClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RecetarioClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 26));
        RecetarioClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RecetarioClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        RecetarioClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RecetarioClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        RecetarioClass->setStatusBar(statusBar);

        retranslateUi(RecetarioClass);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RecetarioClass);
    } // setupUi

    void retranslateUi(QMainWindow *RecetarioClass)
    {
        RecetarioClass->setWindowTitle(QCoreApplication::translate("RecetarioClass", "Recetario", nullptr));
        buscarPor->setText(QCoreApplication::translate("RecetarioClass", "Buscar Por...", nullptr));
        label->setText(QCoreApplication::translate("RecetarioClass", "RECETARIO", nullptr));
        verReceta->setText(QCoreApplication::translate("RecetarioClass", "Ver Recetas", nullptr));
        crearReceta->setText(QCoreApplication::translate("RecetarioClass", "Crear Receta", nullptr));
        aceptarNR->setText(QCoreApplication::translate("RecetarioClass", "Aceptar", nullptr));
        label_2->setText(QCoreApplication::translate("RecetarioClass", "Nombre", nullptr));
        label_3->setText(QCoreApplication::translate("RecetarioClass", "Ingredientes", nullptr));
        label_6->setText(QCoreApplication::translate("RecetarioClass", "Pasos", nullptr));
        label_5->setText(QCoreApplication::translate("RecetarioClass", "Costo", nullptr));
        label_7->setText(QCoreApplication::translate("RecetarioClass", "Nueva Receta", nullptr));
        volverNR->setText(QCoreApplication::translate("RecetarioClass", "Volver", nullptr));
        volver2->setText(QCoreApplication::translate("RecetarioClass", "Volver", nullptr));
        volver3->setText(QCoreApplication::translate("RecetarioClass", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecetarioClass: public Ui_RecetarioClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECETARIO_H
