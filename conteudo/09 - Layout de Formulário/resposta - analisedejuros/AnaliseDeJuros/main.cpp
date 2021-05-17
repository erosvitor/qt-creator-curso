#include "AnaliseDeJuros.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AnaliseDeJuros w;
    w.show();

    return a.exec();
}
