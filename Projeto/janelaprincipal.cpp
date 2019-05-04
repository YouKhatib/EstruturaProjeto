#include "janelaprincipal.h"
#include "ui_janelaprincipal.h"
#include "mainwindow.h"
#include "quartos.h"
#include "palestra.h"
#include "servico.h"


JanelaPrincipal::JanelaPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaPrincipal)
{
    ui->setupUi(this);
}

JanelaPrincipal::~JanelaPrincipal()
{
    delete ui;
}

void JanelaPrincipal::on_pushButton_3_clicked()
{
    this->close();
}

void JanelaPrincipal::on_pushButton_clicked()
{
    Quartos quartos;
    quartos.setModal(true);
    quartos.exec();
}

void JanelaPrincipal::on_pushButton_2_clicked()
{
    Palestra Palestra;
    Palestra.setModal(true);
    Palestra.exec();
}

void JanelaPrincipal::on_pushButton_4_clicked()
{
    Servico serQuarto;
    serQuarto.setModal(true);
    serQuarto.exec();

}
