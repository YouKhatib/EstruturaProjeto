#include "adm.h"
#include "ui_adm.h"

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
