#include "planetas.h"
#include "ui_planetas.h"
#include <QTextStream>
#include <QFile>

Planetas::Planetas(QWidget *parent) : QWidget(parent), ui(new Ui::Planetas)
{
    ui->setupUi(this);
}

Planetas::~Planetas()
{
    delete ui;
}

void Planetas::carregarDados(QString imagem, QString documento)
{
    QPixmap img(imagem);
    ui->imagemPlaneta->setPixmap(img);

    QFile file;
    file.setFileName(documento);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
      QTextStream arq(&file);
      ui->textoPlaneta->setPlainText(arq.readAll());
      file.close();
    }
}

void Planetas::on_btnMercurio_clicked()
{
    carregarDados(":/imagens/01 mercurio.jpg", ":/documentos/01 mercurio.txt");
}

void Planetas::on_btnVenus_clicked()
{
    carregarDados(":/imagens/02 venus.jpg", ":/documentos/02 venus.txt");
}

void Planetas::on_btnTerra_clicked()
{
    carregarDados(":/imagens/03 terra.jpg", ":/documentos/03 terra.txt");
}

void Planetas::on_btnMarte_clicked()
{
    carregarDados(":/imagens/04 marte.jpg", ":/documentos/04 marte.txt");
}

void Planetas::on_btnJupiter_clicked()
{
    carregarDados(":/imagens/05 jupiter.jpg", ":/documentos/05 jupiter.txt");
}

void Planetas::on_btnSaturno_clicked()
{
    carregarDados(":/imagens/06 saturno.jpg", ":/documentos/06 saturno.txt");
}

void Planetas::on_btnUrano_clicked()
{
    carregarDados(":/imagens/08 urano.jpg", ":/documentos/08 urano.txt");
}

void Planetas::on_btnNetuno_clicked()
{
    carregarDados(":/imagens/07 netuno.jpg", ":/documentos/07 netuno.txt");
}

void Planetas::on_btnExportarImagem_clicked()
{
    QString arq = QFileDialog::getSaveFileName(this,
                                               "Selecione um diretório para salvar a imagem",
                                               "c:",
                                               "Imagem JPG (*.jpg)");

    QFile file;
    file.setFileName(arq);

    if (file.open(QIODevice::WriteOnly)) {
        ui->imagemPlaneta->pixmap()->save(&file, "JPG");
        file.close();
    }
}

void Planetas::on_btnExportarTexto_clicked()
{
    QString arq = QFileDialog::getSaveFileName(this,
                                               "Selecione um diretório para salvar o texto",
                                               "c:",
                                               "Arquivos Textos (*.txt)");

    QFile file;
    file.setFileName(arq);

    if (file.open(QIODevice::Text | QIODevice::Append)) {
      QTextStream outFile(&file);
      outFile << ui->textoPlaneta->toPlainText() << endl;
      file.close();
    }
}
