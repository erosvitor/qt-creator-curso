#ifndef LISTWIDGETMULTISELECTION_H
#define LISTWIDGETMULTISELECTION_H

#include <QWidget>

namespace Ui {
    class ListWidgetMultiSelection;
}

class ListWidgetMultiSelection : public QWidget
{
    Q_OBJECT

public:
    explicit ListWidgetMultiSelection(QWidget *parent = 0);
    ~ListWidgetMultiSelection();

private:
    Ui::ListWidgetMultiSelection *ui;

private slots:
    void on_btnAdicionar_clicked();
    void on_btnRetirar_clicked();
};

#endif // LISTWIDGETMULTISELECTION_H
