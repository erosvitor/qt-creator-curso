#ifndef URNAELETRONICA_H
#define URNAELETRONICA_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
  class UrnaEletronica;
}

class UrnaEletronica : public QWidget
{
  Q_OBJECT

  public:
    explicit UrnaEletronica(QWidget *parent = 0);
    ~UrnaEletronica();

    int votosHulk;
    int votosHomemFerro;
    int votosThor;
    int votosCapitaoAmerica;
    int branco;
    int nulo;

  private slots:
    void on_btnCandidato1_clicked();
    void on_btnCandidato2_clicked();
    void on_btnCandidato3_clicked();
    void on_btnCandidato4_clicked();
    void on_btnBranco_clicked();
    void on_btnNulo_clicked();
    void on_btnFinalizar_clicked();

  private:
    Ui::UrnaEletronica *ui;
};

#endif
