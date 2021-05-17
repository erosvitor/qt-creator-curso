#include "ClienteEdicao.h"
#include "ui_ClienteEdicao.h"

ClienteEdicao::ClienteEdicao(QWidget *parent) : QWidget(parent), ui(new Ui::ClienteEdicao)
{
    ui->setupUi(this);
}

ClienteEdicao::~ClienteEdicao()
{
    delete ui;
}
