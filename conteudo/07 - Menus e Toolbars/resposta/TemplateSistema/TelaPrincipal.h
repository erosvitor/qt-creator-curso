#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QMessageBox>
#include "TelaSobre.h"

namespace Ui {
  class TelaPrincipal;
}

class TelaPrincipal : public QMainWindow
{
  Q_OBJECT

  public:
    explicit TelaPrincipal(QWidget *parent = 0);
    ~TelaPrincipal();
    TelaSobre *frmSobre;

  protected:
    void closeEvent(QCloseEvent *event);

  private slots:
    void on_miSair_triggered();
    void on_miSobre_triggered();

private:
    Ui::TelaPrincipal *ui;

};

#endif // TELAPRINCIPAL_H
