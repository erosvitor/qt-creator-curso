#ifndef SUBFORMULARIO1_H
#define SUBFORMULARIO1_H

#include <QWidget>

namespace Ui {
class Subformulario1;
}

class Subformulario1 : public QWidget
{
    Q_OBJECT

public:
    explicit Subformulario1(QWidget *parent = 0);
    ~Subformulario1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Subformulario1 *ui;
};

#endif // SUBFORMULARIO1_H
