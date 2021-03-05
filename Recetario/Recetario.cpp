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

void Recetario::onBuscar(void)
{
    for (auto& texto : textos)
    {
        delete texto;
    }
    textos.clear();
    string costo_a_buscar = this->ui.buscar_por_costo->text().toStdString();
    vector<string> Nombres = backend.buscarPorCosto(costo_a_buscar);
    for (int i=0; i<Nombres.size();i++)
    {
        textos.push_back(new QLabel(ui.scrollAreaWidgetContents));
        textos[i]->setGeometry(QRect(0, 50*i, 530, 50));
        textos[i]->setText(QString::fromStdString(Nombres[i]));
    }
    for (auto& text : textos)
    {
        ui.verticalLayout->addWidget(text);
    }
}

void Recetario::onBuscarPor(void)
{
    index = 3;
    this->ui.stackedWidget->setCurrentIndex(index);
    QObject::connect(
        this->ui.volverBP, &QPushButton::clicked,
        this, &Recetario::onVolver
    );
    QObject::connect(
        this->ui.buscar, &QPushButton::clicked,
        this, &Recetario::onBuscar
    );
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
    this->ui.costo_label->setText(QString::fromStdString(to_string_with_precision(recetaAMostrar.costo,2)));
    this->ui.ingredientes_label->setText(QString::fromStdString(recetaAMostrar.ingredientes));
    this->ui.pasos_label->setText(QString::fromStdString(recetaAMostrar.pasos));
}