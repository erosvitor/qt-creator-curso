#include "TelaPrincipal.h"
#include "ui_TelaPrincipal.h"

TelaPrincipal::TelaPrincipal(QWidget *parent) : QMainWindow(parent), ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);

    frmSobre = NULL;
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}

void TelaPrincipal::closeEvent(QCloseEvent *event)
{
    int resposta = QMessageBox::question(this,
                                         "Finalizar sistema",
                                         "Deseja mesmo finalizar este sistema?",
                                         "Sim",
                                         "Não");

    if (resposta == 0)
        event->accept();
    else
        event->ignore();
}

void TelaPrincipal::on_miSair_triggered()
{
    close();
}

void TelaPrincipal::on_miSobre_triggered()
{
    if (frmSobre == NULL) {
        frmSobre = new TelaSobre();
        frmSobre->setParent(this, Qt::Window | Qt::CustomizeWindowHint | Qt::WindowTitleHint);
    }
    frmSobre->show();
}
