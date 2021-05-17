#include "TelaSobre.h"
#include "ui_TelaSobre.h"
#include "TelaPrincipal.h"

TelaSobre::TelaSobre(QWidget *parent) : QWidget(parent), ui(new Ui::TelaSobre)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setFixedSize(this->width(),this->height());
}

TelaSobre::~TelaSobre()
{
    ((TelaPrincipal *)this->parent())->frmSobre = NULL;
    delete ui;
}

void TelaSobre::on_btnOk_clicked()
{
    close();
}
