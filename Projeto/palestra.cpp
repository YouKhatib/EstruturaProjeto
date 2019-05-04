#include "palestra.h"
#include "ui_palestra.h"
#include "pilha.h"

#include <qmessagebox.h>

PES stack;

Palestra::Palestra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Palestra)
{
    ui->setupUi(this);

}

Palestra::~Palestra()
{
    delete ui;
}

void Palestra::on_pushButton_clicked()
{
    this->close();
}

void Palestra::on_pushButton_2_clicked()
{

}

void Palestra::on_pushButton_3_clicked()
{
    if(stack.empilha(1) == false){
        QMessageBox::warning(this,"ERRO","Auditório cheio");

    }
}

void Palestra::on_pushButton_4_clicked()
{
    if(stack.desempilha() == false){
        QMessageBox::warning(this,"ERRO","Auditório vazio");

    }
}
