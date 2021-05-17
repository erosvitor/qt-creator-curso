#ifndef MDIPARENT_H
#define MDIPARENT_H

#include <QWidget>
#include <QList>
#include <QMdiSubWindow>
#include "Subformulario1.h"
#include "Subformulario2.h"

namespace Ui {
class MDIParent;
}

class MDIParent : public QWidget
{
    Q_OBJECT

public:
    explicit MDIParent(QWidget *parent = 0);
    ~MDIParent();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MDIParent *ui;
    Subformulario1 *frm1;
    Subformulario2 *frm2;
};

#endif // MDIPARENT_H
