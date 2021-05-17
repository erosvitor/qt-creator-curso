#ifndef SUBFORMULARIO_H
#define SUBFORMULARIO_H

#include <QWidget>

namespace Ui {
class Subformulario;
}

class Subformulario : public QWidget
{
    Q_OBJECT

public:
    explicit Subformulario(QWidget *parent = 0);
    ~Subformulario();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Subformulario *ui;
};

#endif // SUBFORMULARIO_H
