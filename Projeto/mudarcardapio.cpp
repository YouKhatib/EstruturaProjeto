#include "mudarcardapio.h"
#include "ui_mudarcardapio.h"
#include "lde.h"
#include <QMessageBox>

lde obj;
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

void mudarCardapio::on_pushButton_clicked()
{
    std::string nome = ui->lineEdit_2->text().toStdString();
    double preco = ui->lineEdit_3->text().toDouble();
    obj.insere(preco, nome);
}

void mudarCardapio::on_pushButton_2_clicked()
{
    std::string nome = ui->lineEdit->text().toStdString();
    if(obj.remove(nome) == NULL){
        QMessageBox::warning(this,"ERRO","Prato não encontrado");
        return;
    }

}
void mudarCardapio::on_pushButton_3_clicked()
{
    lde* atual = obj.getPrimeiro(obj);

    //while(atual){
        QString qstr =QString::fromStdString(atual->getNome());
        ui->textBrowser->setText(qstr);
        //atual = atual->proximo;
    //}
}

void mudarCardapio::on_pushButton_4_clicked()
{
    this->close();
}
