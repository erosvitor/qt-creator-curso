#include "ClienteEdicao.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClienteEdicao w;
    w.show();

    return a.exec();
}
