#include "servico.h"
#include "ui_servico.h"

Servico::Servico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Servico)
{
    ui->setupUi(this);
}

Servico::~Servico()
{
    delete ui;
}
