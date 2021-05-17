#ifndef SUBFORMULARIO2_H
#define SUBFORMULARIO2_H

#include <QWidget>

namespace Ui {
class Subformulario2;
}

class Subformulario2 : public QWidget
{
    Q_OBJECT

public:
    explicit Subformulario2(QWidget *parent = 0);
    ~Subformulario2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Subformulario2 *ui;
};

#endif // SUBFORMULARIO2_H
