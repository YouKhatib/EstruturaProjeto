#ifndef QUARTOS_H
#define QUARTOS_H

#include <QDialog>
#include "les.h"

namespace Ui {
class Quartos;
}

class Quartos : public QDialog
{
    Q_OBJECT

public:
    explicit Quartos(QWidget *parent = nullptr);
    ~Quartos();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Quartos *ui;
};

#endif // QUARTOS_H
