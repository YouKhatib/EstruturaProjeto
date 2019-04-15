#include "mudarcardapio.h"
#include "ui_mudarcardapio.h"

mudarCardapio::mudarCardapio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mudarCardapio)
{
    ui->setupUi(this);
}

mudarCardapio::~mudarCardapio()
{
    delete ui;
}
