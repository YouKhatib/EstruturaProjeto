#ifndef PALESTRA_H
#define PALESTRA_H

#include <QDialog>
#include "pilha.h"

namespace Ui {
class Palestra;
}

class Palestra : public QDialog
{
    Q_OBJECT

public:
    explicit Palestra(QWidget *parent = nullptr);
    ~Palestra();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Palestra *ui;
};

#endif // PALESTRA_H
