#include "Subformulario2.h"
#include "ui_Subformulario2.h"

Subformulario2::Subformulario2(QWidget *parent) : QWidget(parent), ui(new Ui::Subformulario2)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->setAttribute(Qt::WA_DeleteOnClose);
}

Subformulario2::~Subformulario2()
{
    delete ui;
}

void Subformulario2::on_pushButton_clicked()
{
    parentWidget()->close();
}
