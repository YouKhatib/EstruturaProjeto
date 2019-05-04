#include "adm.h"
#include "ui_adm.h"
#include "mudarcardapio.h"
#include "quartos.h"
#include "servico.h"

adm::adm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adm)
{
    ui->setupUi(this);
}

adm::~adm()
{
    delete ui;
}

void adm::on_pushButton_4_clicked()
{
    this->close();
}

void adm::on_pushButton_2_clicked()
{
    mudarCardapio cardapio;
    cardapio.setModal(true);
    cardapio.exec();
}

void adm::on_pushButton_clicked()
{
    Quartos quartos;
    quartos.setModal(true);
    quartos.exec();
}

void adm::on_pushButton_3_clicked()
{
    Servico servico;
    servico.setModal(true);
    servico.exec();
}
