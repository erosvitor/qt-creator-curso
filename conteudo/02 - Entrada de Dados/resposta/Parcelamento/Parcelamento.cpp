#include "Parcelamento.h"
#include "ui_Parcelamento.h"

Parcelamento::Parcelamento(QWidget *parent) : QWidget(parent), ui(new Ui::Parcelamento)
{
  ui->setupUi(this);
}

Parcelamento::~Parcelamento()
{
  delete ui;
}

void Parcelamento::on_btnCalcularParcelas_clicked()
{
  double valorCompra = ui->edtValorCompra->value();
  QDate inicioPgto = ui->edtInicioPgto->date();
  int qtdeParcelas = ui->edtQtdeParcelas->value();

  double valParc1 = 0;
  double valParc2 = 0;
  double valParc3 = 0;

  QDate dataParc1;
  QDate dataParc2;
  QDate dataParc3;

  QString titulo = "Parcelas Calculadas";
  QString msg;

  if (qtdeParcelas == 1) {
    valParc1 = valorCompra;
    dataParc1 = inicioPgto;
    msg = "Valor Parcela 1: " + QString::number(valParc1, 0, 2) + "\n" +
          "Data Parcela 1: " + dataParc1.toString("dd/MM/yyyy");
}
  else if (qtdeParcelas == 2) {
    valParc1 = valorCompra/2;
    dataParc1 = inicioPgto;

    valParc2 = valorCompra/2;
    dataParc2 = inicioPgto.addDays(30);

    msg = "Valor Parcela 1: " + QString::number(valParc1, 0, 2) + "\n" +
          "Data Parcela 1: " + dataParc1.toString("dd/MM/yyyy") + "\n\n" +
          "Valor Parcela 2: " + QString::number(valParc2, 0, 2) + "\n" +
          "Data Parcela 2: " + dataParc2.toString("dd/MM/yyyy");
  }
  else if (qtdeParcelas == 3) {
    valParc1 = valorCompra/3;
    dataParc1 = inicioPgto;

    valParc2 = valorCompra/3;
    dataParc2 = inicioPgto.addDays(30);

    valParc3 = valorCompra/3;
    dataParc3 = inicioPgto.addDays(60);

    msg = "Valor Parcela 1: " + QString::number(valParc1, 0, 2) + "\n" +
          "Data Parcela 1: " + dataParc1.toString("dd/MM/yyyy") + "\n\n" +
          "Valor Parcela 2: " + QString::number(valParc2, 0, 2) + "\n" +
          "Data Parcela 2: " + dataParc2.toString("dd/MM/yyyy") + "\n\n" +
          "Valor Parcela 3: " + QString::number(valParc3, 0, 2) + "\n" +
          "Data Parcela 3: " + dataParc3.toString("dd/MM/yyyy");
  }

  QMessageBox::information(this, titulo, msg);
}
