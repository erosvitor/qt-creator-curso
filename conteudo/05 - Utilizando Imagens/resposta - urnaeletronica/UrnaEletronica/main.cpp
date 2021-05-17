#include "UrnaEletronica.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  UrnaEletronica w;
  w.show();
  return a.exec();
}
