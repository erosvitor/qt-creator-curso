#include "UrnaEletronica.h"
#include "ui_UrnaEletronica.h"

UrnaEletronica::UrnaEletronica(QWidget *parent) : QWidget(parent), ui(new Ui::UrnaEletronica)
{
  ui->setupUi(this);

  votosHulk = 0;
  votosHomemFerro = 0;
  votosThor = 0;
  votosCapitaoAmerica = 0;
  branco = 0;
  nulo = 0;
}

UrnaEletronica::~UrnaEletronica()
{
  delete ui;
}

void UrnaEletronica::on_btnCandidato1_clicked()
{
  this->votosHulk++;
}

void UrnaEletronica::on_btnCandidato2_clicked()
{
  this->votosHomemFerro++;
}

void UrnaEletronica::on_btnCandidato3_clicked()
{
  this->votosThor++;
}

void UrnaEletronica::on_btnCandidato4_clicked()
{
  this->votosCapitaoAmerica++;
}

void UrnaEletronica::on_btnBranco_clicked()
{
  this->branco++;
}

void UrnaEletronica::on_btnNulo_clicked()
{
  this->nulo++;
}

void UrnaEletronica::on_btnFinalizar_clicked()
{
  QString resultado;

  resultado.append("Resultado eleições: ");
  resultado.append("\n\n");
  resultado.append("Total votos Hulk.............: " + QString::number(this->votosHulk));
  resultado.append("\n");
  resultado.append("Total votos Homem de Ferro...: " + QString::number(this->votosHomemFerro));
  resultado.append("\n");
  resultado.append("Total votos Thor.............: " + QString::number(this->votosThor));
  resultado.append("\n");
  resultado.append("Total votos Capitão América..: " + QString::number(this->votosCapitaoAmerica));
  resultado.append("\n");
  resultado.append("Total votos Brancos..........: " + QString::number(this->branco));
  resultado.append("\n");
  resultado.append("Total votos Nulos............: " + QString::number(this->nulo));

  QMessageBox::information(this, "Resultado", resultado);

  QMessageBox *box = new QMessageBox(QMessageBox::Information, "Resultado", resultado);
  QFont font = QFont("Courier 10 Pitch", 12);
  box->setFont(font);
  box->show();

  votosHulk = 0;
  votosHomemFerro = 0;
  votosThor = 0;
  votosCapitaoAmerica = 0;
  branco = 0;
  nulo = 0;
}
