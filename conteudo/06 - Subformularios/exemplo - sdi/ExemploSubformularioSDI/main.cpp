#include "FormularioPrincipal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormularioPrincipal w;
    w.show();

    return a.exec();
}
