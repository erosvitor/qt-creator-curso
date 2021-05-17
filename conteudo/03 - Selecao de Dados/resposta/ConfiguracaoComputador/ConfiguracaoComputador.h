#ifndef CONFIGURACAOCOMPUTADOR_H
#define CONFIGURACAOCOMPUTADOR_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
  class ConfiguracaoComputador;
}

class ConfiguracaoComputador : public QWidget
{
    Q_OBJECT

  public:
    explicit ConfiguracaoComputador(QWidget *parent = 0);
    ~ConfiguracaoComputador();

  private slots:
    void on_btnMontarDescricao_clicked();

  private:
    Ui::ConfiguracaoComputador *ui;
};

#endif
