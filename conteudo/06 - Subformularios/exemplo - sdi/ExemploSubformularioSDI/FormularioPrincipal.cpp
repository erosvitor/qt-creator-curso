#include "FormularioPrincipal.h"
#include "ui_FormularioPrincipal.h"

FormularioPrincipal::FormularioPrincipal(QWidget *parent) : QWidget(parent), ui(new Ui::FormularioPrincipal)
{
    ui->setupUi(this);
    frm = NULL;
}

FormularioPrincipal::~FormularioPrincipal()
{
    delete ui;
}

void FormularioPrincipal::on_pushButton_clicked()
{
    if (frm == NULL) {
      frm = new Subformulario();
      frm->setParent(this, Qt::Window |
                           Qt::CustomizeWindowHint |
                           Qt::WindowCloseButtonHint);
    }
    frm->show();
}
