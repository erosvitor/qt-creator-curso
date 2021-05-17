#include "ListWidgetMultiSelection.h"
#include "ui_ListWidgetMultiSelection.h"

ListWidgetMultiSelection::ListWidgetMultiSelection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWidgetMultiSelection)
{
    ui->setupUi(this);
}

ListWidgetMultiSelection::~ListWidgetMultiSelection()
{
    delete ui;
}

void ListWidgetMultiSelection::on_btnAdicionar_clicked()
{
    QList<QListWidgetItem *> itensSelecionados;
    QListWidgetItem *item;

    itensSelecionados = ui->lstItensDisponiveis->selectedItems();

    for (int i=0; i < itensSelecionados.size(); i++) {
      item = itensSelecionados.at(i);
      ui->lstItensSelecionados->addItem(item->text());
    }

    qDeleteAll(ui->lstItensDisponiveis->selectedItems());
}

void ListWidgetMultiSelection::on_btnRetirar_clicked()
{
    QList<QListWidgetItem *> itensSelecionados;
    QListWidgetItem *item;

    itensSelecionados = ui->lstItensSelecionados->selectedItems();

    for (int i=0; i < itensSelecionados.size(); i++) {
      item = itensSelecionados.at(i);
      ui->lstItensDisponiveis->addItem(item->text());
    }

    qDeleteAll(ui->lstItensSelecionados->selectedItems());

}
