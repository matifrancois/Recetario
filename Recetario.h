#pragma once
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QFileDialog>
#include <QGraphicsItem>
#include <QLabel>
#include <QTimer>  
#include <QFutureWatcher>
#include <qdir.h>
#include <QtWidgets/QMainWindow>
#include "ui_Recetario.h"
#include "Backend.h"
#include <string.h>
#include <QDoubleValidator>

using namespace std;

class Recetario : public QMainWindow
{
    Q_OBJECT

public:
    Recetario(QWidget *parent = Q_NULLPTR);

private:
    Ui::RecetarioClass ui;
    void onNuevaReceta(void);
    void onVerReceta(void);
    void onBuscarPor(void);
    void onVolver(void);
    void nuevaRecetaWindow(void);
    void onAceptar(void);
    void VerReceta(void);
    void onSiguiente(void);
    void onAnterior(void);
    void onBuscar(void);
    vector<QLabel*> textos;
    Backend backend;
    int index;
    int idALeer;
};
