#include "MDIParent.h"
#include "ui_MDIParent.h"

MDIParent::MDIParent(QWidget *parent) : QWidget(parent), ui(new Ui::MDIParent)
{
    ui->setupUi(this);
}

MDIParent::~MDIParent()
{
    delete ui;
}

void MDIParent::on_pushButton_clicked()
{
    QList<QMdiSubWindow *> telas = ui->mdiArea->subWindowList();
    QMdiSubWindow *tela;
    bool telaNaoExiste = true;

    for (int i=0; i < telas.size(); i++) {
        tela = telas.at(i);
        if (tela->windowTitle() == "Subformulário 1") {
            telaNaoExiste = false;
            break;
        }
    }

    if (telaNaoExiste) {
        frm1 = new Subformulario1();
        ui->mdiArea->addSubWindow(frm1);
    }
    frm1->show();
}

void MDIParent::on_pushButton_2_clicked()
{
    QList<QMdiSubWindow *> telas = ui->mdiArea->subWindowList();
    QMdiSubWindow *tela;
    bool telaNaoExiste = true;

    for (int i=0; i < telas.size(); i++) {
      tela = telas.at(i);
      if (tela->windowTitle() == "Subformulário 2") {
        telaNaoExiste = false;
        break;
      }
    }

    if (telaNaoExiste) {
      frm2 = new Subformulario2();
      ui->mdiArea->addSubWindow(frm2);
    }
    frm2->show();
}
