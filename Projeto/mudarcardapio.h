#ifndef MUDARCARDAPIO_H
#define MUDARCARDAPIO_H

#include <QDialog>

namespace Ui {
class mudarCardapio;
}

class mudarCardapio : public QDialog
{
    Q_OBJECT

public:
    explicit mudarCardapio(QWidget *parent = nullptr);
    ~mudarCardapio();

private:
    Ui::mudarCardapio *ui;
};

#endif // MUDARCARDAPIO_H
