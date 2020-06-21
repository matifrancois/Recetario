#include "Recetario.h"

Recetario::Recetario(QWidget *parent)
    : QMainWindow(parent)
{
    if (!backend.getTodoOk()){
        printf("Ocurrio un error con la base de datos");
    }
    else {
        ui.setupUi(this);
        ui.costo->setValidator(new QDoubleValidator());
        index = 0;
        idALeer = 0;
        this->ui.stackedWidget->setCurrentIndex(index);
        QWidget::setWindowTitle("Recetario");

        //Botones del menu principal
        QObject::connect(
            this->ui.crearReceta, &QPushButton::clicked,
            this, &Recetario::onNuevaReceta
        );
        QObject::connect(
            this->ui.verReceta, &QPushButton::clicked,
            this, &Recetario::onVerReceta
        );
        QObject::connect(
            this->ui.buscarPor, &QPushButton::clicked,
            this, &Recetario::onBuscarPor
        );


        //Botones para volver al menu principal
        QObject::connect(
            this->ui.volver3, &QPushButton::clicked,
            this, &Recetario::onVolver
        );
    }
}

void Recetario::onNuevaReceta(void)
{
    index = 1;
    this->ui.stackedWidget->setCurrentIndex(index);
    nuevaRecetaWindow();
}

void Recetario::onVerReceta(void)
{
    index = 2;
    this->ui.stackedWidget->setCurrentIndex(index);
    VerReceta();
    QObject::connect(
        this->ui.volverVR, &QPushButton::clicked,
        this, &Recetario::onVolver
    );
    QObject::connect(
        this->ui.siguiente, &QPushButton::clicked,
        this, &Recetario::onSiguiente
    );
    QObject::connect(
        this->ui.anterior, &QPushButton::clicked,
        this, &Recetario::onAnterior
    );
}

void Recetario::onBuscarPor(void)
{
    index = 3;
    this->ui.stackedWidget->setCurrentIndex(index);
}

void Recetario::onVolver(void)
{
    index = 0;
    this->ui.stackedWidget->setCurrentIndex(index);
}

void Recetario::onSiguiente(void)
{
    if(idALeer < backend.getID())
        idALeer++;
    VerReceta();
}

void Recetario::onAnterior(void)
{
    if(idALeer > 0)
        idALeer--;
    VerReceta();
}

void Recetario::nuevaRecetaWindow(void)
{
    QObject::connect(
        this->ui.volverNR, &QPushButton::clicked,
        this, &Recetario::onVolver
    );
    QObject::connect(
        this->ui.aceptarNR, &QPushButton::clicked,
        this, &Recetario::onAceptar
    );
}

void Recetario::onAceptar(void)
{
    string Nombre = this->ui.nombre->text().toStdString();
    string Ingredientes = this->ui.ingredientes->toPlainText().toStdString();
    string Pasos = this->ui.pasos->toPlainText().toStdString();
    string Costo = this->ui.costo->text().toStdString();
    if (Costo.length() == 0)
        printf("Error\n");
    //this->ui.label_2->setText(Ingredientes);
    backend.SetNuevaReceta(Nombre, Ingredientes, Pasos, Costo);
    index = 0;
    this->ui.stackedWidget->setCurrentIndex(index);
}

void Recetario::VerReceta(void)
{
    Receta recetaAMostrar = backend.getReceta(idALeer);
    this->ui.nombre_label->setText(QString::fromStdString(recetaAMostrar.nombre));
    this->ui.costo_label->setText(QString::fromStdString(to_string(recetaAMostrar.costo)));
    this->ui.ingredientes_label->setText(QString::fromStdString(recetaAMostrar.ingredientes));
    this->ui.pasos_label->setText(QString::fromStdString(recetaAMostrar.pasos));
}