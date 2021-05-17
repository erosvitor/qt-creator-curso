#ifndef TELASOBRE_H
#define TELASOBRE_H

#include <QWidget>

namespace Ui {
    class TelaSobre;
}

class TelaSobre : public QWidget
{
    Q_OBJECT

public:
    explicit TelaSobre(QWidget *parent = 0);
    ~TelaSobre();

private:
    Ui::TelaSobre *ui;

private slots:
    void on_btnOk_clicked();
};

#endif // TELASOBRE_H
