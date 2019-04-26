#include "mudarcardapio.h"
#include "ui_mudarcardapio.h"
#include <QMessageBox>

lde obj, *atual;
mudarCardapio::mudarCardapio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mudarCardapio)
{
    ui->setupUi(this);

    if(obj.getN() == 0){
        obj.insere(16.00, "Omelete");
        obj.insere(10.00, "Pão com manteiga na chapa");
        obj.insere(12.50, "Ovo mexido");
        obj.insere(25.99, "Café da manhã especial");
        obj.insere(30.00, "Picanha");
        obj.insere(30.00, "Filet Mignon");
        obj.insere(23.40, "Caesar Salad");
        obj.insere(40.00, "Almoço especial");
        obj.insere(20.50, "Sopa de Queijo");
        obj.insere(23.20, "Sopa de feijão");
        obj.insere(45.00, "Pizza");
        obj.insere(50.00, "Jantar especial");
    }
}

mudarCardapio::~mudarCardapio()
{
    delete ui;
}


void mudarCardapio::on_pushButton_clicked()
{
    std::string nome = ui->lineEdit_2->text().toStdString();
    double preco = ui->lineEdit_3->text().toDouble();
    if(nome == ""){
        QMessageBox::warning(this, "ERRO", "Insira o nome do prato");
        return;
    }
    if(preco == 0){
        QMessageBox::warning(this, "ERRO", "Insira um valor válido");
        return;
    }
    obj.insere(preco, nome);
}

void mudarCardapio::on_pushButton_2_clicked()
{
    std::string nome = ui->lineEdit->text().toStdString();
    if(obj.remove(nome) == false){
        QMessageBox::warning(this,"ERRO","Prato não encontrado");
        return;
    }

}
void mudarCardapio::on_pushButton_3_clicked()
{
    ui->textBrowser->setText("");
    atual = obj.primeiro;
    while(atual){
        QString nome = QString::fromStdString(atual->nome);
        QString preco = QString::number(atual->val);
        ui->textBrowser->append(nome + " | " + preco + " R$");
        atual = atual->proximo;
    }
}

void mudarCardapio::on_pushButton_4_clicked()
{
    this->close();
}

lde mudarCardapio::getObj(){
    return obj;
}
