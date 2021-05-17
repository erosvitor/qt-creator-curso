#ifndef FORMULARIOPRINCIPAL_H
#define FORMULARIOPRINCIPAL_H

#include <QWidget>
#include "Subformulario.h"

namespace Ui {
class FormularioPrincipal;
}

class FormularioPrincipal : public QWidget
{
    Q_OBJECT

public:
    explicit FormularioPrincipal(QWidget *parent = 0);
    ~FormularioPrincipal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormularioPrincipal *ui;
    Subformulario *frm;
};

#endif // FORMULARIOPRINCIPAL_H
