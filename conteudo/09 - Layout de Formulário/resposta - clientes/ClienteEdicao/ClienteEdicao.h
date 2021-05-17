#ifndef CLIENTEEDICAO_H
#define CLIENTEEDICAO_H

#include <QWidget>

namespace Ui {
class ClienteEdicao;
}

class ClienteEdicao : public QWidget
{
    Q_OBJECT

public:
    explicit ClienteEdicao(QWidget *parent = 0);
    ~ClienteEdicao();

private:
    Ui::ClienteEdicao *ui;
};

#endif // CLIENTEEDICAO_H
