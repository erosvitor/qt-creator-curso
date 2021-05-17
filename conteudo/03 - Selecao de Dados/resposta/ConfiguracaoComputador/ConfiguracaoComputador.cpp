#include "ConfiguracaoComputador.h"
#include "ui_ConfiguracaoComputador.h"

ConfiguracaoComputador::ConfiguracaoComputador(QWidget *parent) : QWidget(parent), ui(new Ui::ConfiguracaoComputador)
{
  ui->setupUi(this);
}

ConfiguracaoComputador::~ConfiguracaoComputador()
{
  delete ui;
}

void ConfiguracaoComputador::on_btnMontarDescricao_clicked()
{
  QString descricao;

  if (ui->rbDesktop->isChecked())
    descricao = "Descrição do computador Desktop\n\n";
  else
    descricao = "Descrição do computador Notebook\n\n";

  descricao += "Processador: " + ui->edtProcessador->text() + " GHz\n";

  descricao += "Memória: " + ui->edtRAM->text() + "GB\n";

  descricao += "Disco rígido: " + ui->edtHD->text() + "GB\n";

  descricao += "Conectividade: ";
  if (ui->cbWireless->isChecked())
    descricao += "- Wireless ";
  if (ui->cbBluetooth->isChecked())
    descricao += "- Bluetooth ";
  if (ui->cbEthernet->isChecked())
    descricao += "- Ethernet";
  descricao += "\n";

  if (ui->cboLeitorCartao->currentIndex() > 0)
    descricao += "Leitor Cartão: " + ui->cboLeitorCartao->currentText() + "\n";

  descricao += "USB: " + ui->edtUSB->text();

  QMessageBox::information(this, "Configuração Computador", descricao);
}
