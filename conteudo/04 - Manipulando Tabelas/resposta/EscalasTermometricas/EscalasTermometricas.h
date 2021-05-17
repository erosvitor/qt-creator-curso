#ifndef ESCALASTERMOMETRICAS_H
#define ESCALASTERMOMETRICAS_H

#include <QWidget>
#include <QTableWidgetItem>

namespace Ui {
    class EscalasTermometricas;
}

class EscalasTermometricas : public QWidget
{
    Q_OBJECT

public:
    explicit EscalasTermometricas(QWidget *parent = 0);
    ~EscalasTermometricas();

private:
    Ui::EscalasTermometricas *ui;

private slots:
    void on_btnCalcular_clicked();
};

#endif // ESCALASTERMOMETRICAS_H
