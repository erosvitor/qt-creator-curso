#include "planetas.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Planetas w;
    w.show();

    return a.exec();
}
