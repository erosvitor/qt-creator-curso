#ifndef SIGNOS_H
#define SIGNOS_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
    class Signos;
}

class Signos : public QWidget
{
    Q_OBJECT

public:
    explicit Signos(QWidget *parent = 0);
    ~Signos();

private:
    Ui::Signos *ui;

    void exibirSigno(QString imagem);

private slots:
    void on_btnMostrarDados_clicked();
};

#endif // SIGNOS_H
