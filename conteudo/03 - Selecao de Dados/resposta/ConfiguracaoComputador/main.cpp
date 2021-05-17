#include "ConfiguracaoComputador.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConfiguracaoComputador w;
    w.show();

    return a.exec();
}
