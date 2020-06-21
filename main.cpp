#include "Recetario.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Recetario w;
    w.show();
    return a.exec();
}
