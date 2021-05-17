#include "Subformulario1.h"
#include "ui_Subformulario1.h"

Subformulario1::Subformulario1(QWidget *parent) : QWidget(parent), ui(new Ui::Subformulario1)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->setAttribute(Qt::WA_DeleteOnClose);
}

Subformulario1::~Subformulario1()
{
    delete ui;
}

void Subformulario1::on_pushButton_clicked()
{
    parentWidget()->close();
}
