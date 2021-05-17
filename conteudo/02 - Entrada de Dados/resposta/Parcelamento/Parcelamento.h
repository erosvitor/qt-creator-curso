#ifndef PARCELAMENTO_H
#define PARCELAMENTO_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
    class Parcelamento;
}

class Parcelamento : public QWidget
{
    Q_OBJECT

public:
    explicit Parcelamento(QWidget *parent = 0);
    ~Parcelamento();

private:
    Ui::Parcelamento *ui;

private slots:
    void on_btnCalcularParcelas_clicked();
};

#endif // PARCELAMENTO_H
