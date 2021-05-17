#include "MDIParent.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MDIParent w;
    w.show();

    return a.exec();
}
