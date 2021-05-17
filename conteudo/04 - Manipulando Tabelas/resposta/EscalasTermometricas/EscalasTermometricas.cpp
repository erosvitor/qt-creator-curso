#include "EscalasTermometricas.h"
#include "ui_EscalasTermometricas.h"

EscalasTermometricas::EscalasTermometricas(QWidget *parent) : QWidget(parent), ui(new Ui::EscalasTermometricas)
{
  ui->setupUi(this);

  QFont font;
  font.setPointSize(12);
  ui->tblDados->horizontalHeader()->setFont(font);

  ui->tblDados->horizontalHeaderItem(1)->setForeground(Qt::black);
  ui->tblDados->horizontalHeaderItem(2)->setForeground(Qt::black);
  ui->tblDados->horizontalHeaderItem(3)->setForeground(Qt::black);

  ui->tblDados->setColumnWidth(0, 123);
  ui->tblDados->setColumnWidth(1, 123);
  ui->tblDados->setColumnWidth(2, 123);
  ui->tblDados->setColumnWidth(3, 123);
}

EscalasTermometricas::~EscalasTermometricas()
{
  delete ui;
}

void EscalasTermometricas::on_btnCalcular_clicked()
{
  int celsiusInicial, celsiusFinal;
  int linha;
  float tempFah, tempKel, tempRan;

  celsiusInicial = ui->edtCelsiusInicial->value();
  celsiusFinal = ui->edtCelsiusFinal->value();

  linha = 1;

  while (celsiusInicial <= celsiusFinal) {
    ui->tblDados->setRowCount(linha);

    QTableWidgetItem *celsius = new QTableWidgetItem();
    celsius->setText(QString::number(celsiusInicial));
    celsius->setTextAlignment(Qt::AlignCenter);
    celsius->setForeground(Qt::red);
    ui->tblDados->setItem(linha-1, 0, celsius);

    QTableWidgetItem *fahrenheit = new QTableWidgetItem();
    tempFah = celsiusInicial * 1.8 + 32;
    fahrenheit->setText(QString::number(tempFah, 'f', 2));
    fahrenheit->setTextAlignment(Qt::AlignCenter);
    fahrenheit->setForeground(Qt::blue);
    ui->tblDados->setItem(linha-1, 1, fahrenheit);

    QTableWidgetItem *kelvin = new QTableWidgetItem();
    tempKel = celsiusInicial + 273.15;
    kelvin->setText(QString::number(tempKel, 'f', 2));
    kelvin->setTextAlignment(Qt::AlignCenter);
    kelvin->setForeground(Qt::green);
    ui->tblDados->setItem(linha-1, 2, kelvin);

    QTableWidgetItem *rankine = new QTableWidgetItem();
    tempRan = (celsiusInicial + 273.15) * 9.0/5.0;
    rankine->setText(QString::number(tempRan, 'f', 2));
    rankine->setTextAlignment(Qt::AlignCenter);
    ui->tblDados->setItem(linha-1, 3, rankine);

    celsiusInicial++;
    linha++;
  }
}
