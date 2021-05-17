#include "Subformulario.h"
#include "ui_Subformulario.h"

Subformulario::Subformulario(QWidget *parent) : QWidget(parent), ui(new Ui::Subformulario)
{
    ui->setupUi(this);
}

Subformulario::~Subformulario()
{
    delete ui;
}

void Subformulario::on_pushButton_clicked()
{
    close();
}
