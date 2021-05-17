#include "Signos.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Signos w;
    w.show();

    return a.exec();
}
