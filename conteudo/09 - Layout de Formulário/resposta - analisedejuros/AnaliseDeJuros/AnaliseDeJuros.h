#ifndef ANALISEDEJUROS_H
#define ANALISEDEJUROS_H

#include <QWidget>
#include <QtMath>
#include <QResizeEvent>
#include <QTableWidgetItem>

namespace Ui {
class AnaliseDeJuros;
}

class AnaliseDeJuros : public QWidget
{
    Q_OBJECT

public:
    explicit AnaliseDeJuros(QWidget *parent = 0);
    ~AnaliseDeJuros();

private slots:
    void on_btnCalcular_clicked();

private:
    Ui::AnaliseDeJuros *ui;

protected:
    void resizeEvent(QResizeEvent *event);
};

#endif // ANALISEDEJUROS_H
