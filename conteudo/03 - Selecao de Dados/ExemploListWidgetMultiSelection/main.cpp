#include "ListWidgetMultiSelection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ListWidgetMultiSelection w;
    w.show();

    return a.exec();
}
