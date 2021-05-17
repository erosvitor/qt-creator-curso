#include "Signos.h"
#include "ui_Signos.h"

Signos::Signos(QWidget *parent) : QWidget(parent), ui(new Ui::Signos)
{
    ui->setupUi(this);
}

Signos::~Signos()
{
    delete ui;
}

void Signos::exibirSigno(QString imagem)
{
  QPixmap img(imagem);
  ui->lblImagemSigno->setPixmap(img);
}

void Signos::on_btnMostrarDados_clicked()
{
    QDate data = ui->edtDataNascimento->date();

    int dia = data.day();
    int mes = data.month();
    int ano = data.year();

    // Definição se o ano é ou não bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
      ui->edtBissexto->setText("Sim");
    }
    else {
      ui->edtBissexto->setText("Não");
    }

    // Definição do signo do zodíaco
    if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)) {
      ui->edtSignoZodiaco->setText("Áries");
      exibirSigno(":/imagens/aries.jpg");
      ui->edtAstro->setText("Marte");
    }
    else if ((dia >= 21 && mes == 4) || (dia <= 21 && mes == 5)) {
      ui->edtSignoZodiaco->setText("Touro");
      exibirSigno(":/imagens/touro.jpg");
      ui->edtAstro->setText("Vênus");
    }
    else if ((dia >= 22 && mes == 5) || (dia <= 21 && mes == 6)) {
      ui->edtSignoZodiaco->setText("Gêmeos");
      exibirSigno(":/imagens/gemeos.jpg");
      ui->edtAstro->setText("Mercúrio");
    }
    else if ((dia >= 22 && mes == 6) || (dia <= 22 && mes == 7)) {
      ui->edtSignoZodiaco->setText("Câncer");
      exibirSigno(":/imagens/cancer.jpg");
      ui->edtAstro->setText("Lua");
    }
    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)) {
      ui->edtSignoZodiaco->setText("Leão");
      exibirSigno(":/imagens/leao.jpg");
      ui->edtAstro->setText("Sol");
    }
    else if ((dia >= 23 && mes == 8) || (dia <= 23 && mes == 9)) {
      ui->edtSignoZodiaco->setText("Virgem");
      exibirSigno(":/imagens/virgem.jpg");
      ui->edtAstro->setText("Mercúrio");
    }
    else if ((dia >= 24 && mes == 9) || (dia <= 23 && mes == 10)) {
      ui->edtSignoZodiaco->setText("Libra");
      exibirSigno(":/imagens/libra.jpg");
      ui->edtAstro->setText("Vênus");
    }
    else if ((dia >= 24 && mes == 10) || (dia <= 22 && mes == 11)) {
      ui->edtSignoZodiaco->setText("Escorpião");
      exibirSigno(":/imagens/escorpiao.jpg");
      ui->edtAstro->setText("Plutão");
    }
    else if ((dia >= 23 && mes == 11) || (dia <= 21 && mes == 12)) {
      ui->edtSignoZodiaco->setText("Sagitário");
      exibirSigno(":/imagens/sagitario.jpg");
      ui->edtAstro->setText("Júpiter");
    }
    else if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 01)) {
      ui->edtSignoZodiaco->setText("Capricórnio");
      exibirSigno(":/imagens/capricornio.jpg");
      ui->edtAstro->setText("Saturno");
    }
    else if ((dia >= 21 && mes == 01) || (dia <= 19 && mes == 02)) {
      ui->edtSignoZodiaco->setText("Aquário");
      exibirSigno(":/imagens/aquario.jpg");
      ui->edtAstro->setText("Urano");
    }
    else if ((dia >= 20 && mes == 02) || (dia <= 20 && mes == 03)) {
      ui->edtSignoZodiaco->setText("Peixes");
      exibirSigno(":/imagens/peixes.jpg");
      ui->edtAstro->setText("Netuno");
    }
}
