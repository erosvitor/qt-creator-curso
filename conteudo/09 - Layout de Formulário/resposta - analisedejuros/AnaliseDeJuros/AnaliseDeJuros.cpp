#include "AnaliseDeJuros.h"
#include "ui_AnaliseDeJuros.h"

AnaliseDeJuros::AnaliseDeJuros(QWidget *parent) : QWidget(parent), ui(new Ui::AnaliseDeJuros)
{
    ui->setupUi(this);
}

AnaliseDeJuros::~AnaliseDeJuros()
{
    delete ui;
}

void AnaliseDeJuros::resizeEvent(QResizeEvent *event)
{
    ui->tblDados->setColumnWidth(0, (this->width()/3)-20);
    ui->tblDados->setColumnWidth(1, (this->width()/3)-20);
    ui->tblDados->setColumnWidth(2, (this->width()/3)-20);

    event->accept();
}

void AnaliseDeJuros::on_btnCalcular_clicked()
{
    double capital = ui->edtCapital->value();
    double taxa = ui->edtTaxa->value();
    int periodo = ui->edtPeriodo->value();

    double capitalJS = capital;
    double jurosSimples;

    double capitalJC = capital;

    ui->tblDados->setRowCount(periodo);

    for (int i=0; i < periodo; i++) {
        QTableWidgetItem *colPeriodo = new QTableWidgetItem();
        colPeriodo->setText(QString::number(i+1));
        ui->tblDados->setItem(i, 0, colPeriodo);

        jurosSimples = capital * (taxa/100) * 1;
        capitalJS += jurosSimples;
        QTableWidgetItem *colJurosSimples = new QTableWidgetItem();
        colJurosSimples->setText(QString::number(capitalJS, 'f', 2));
        ui->tblDados->setItem(i, 1, colJurosSimples);

        capitalJC = capitalJC * pow((1 + (taxa/100)), 1);
        QTableWidgetItem *colJurosCompostos = new QTableWidgetItem();
        colJurosCompostos->setText(QString::number(capitalJC, 'f', 2));
        ui->tblDados->setItem(i, 2, colJurosCompostos);
    }
}
