#ifndef PLANETAS_H
#define PLANETAS_H

#include <QWidget>
#include <QFileDialog>

namespace Ui {
    class Planetas;
}

class Planetas : public QWidget
{
    Q_OBJECT

public:
    explicit Planetas(QWidget *parent = 0);
    ~Planetas();

private:
    Ui::Planetas *ui;

    void carregarDados(QString imagem, QString documento);

private slots:
    void on_btnNetuno_clicked();
    void on_btnUrano_clicked();
    void on_btnSaturno_clicked();
    void on_btnJupiter_clicked();
    void on_btnMarte_clicked();
    void on_btnTerra_clicked();
    void on_btnVenus_clicked();
    void on_btnMercurio_clicked();
    void on_btnExportarImagem_clicked();
    void on_btnExportarTexto_clicked();
};

#endif // PLANETAS_H
