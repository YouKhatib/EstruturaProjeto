#include "quartos.h"
#include "ui_quartos.h"
#include "janelaprincipal.h"
#include <qmessagebox.h>

//Quantidade de quartos
Les<5> sc, cc, sdc;
Les<3> sm, cm, sdm;
Les<1> p;
Quartos::Quartos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quartos)
{
    ui->setupUi(this);
}

Quartos::~Quartos()
{
    delete ui;
}

//Função para inserir na LES (Check-In)
void Quartos::on_pushButton_2_clicked()
{
    //Pega o valor do cb
    QString cb = ui->comboBox->currentText();

    //Checa se quarto escolhido está cheio, se não, ele preenche
    if(cb == "1 - Solteiro Comum"){
        if(sc.insere(0) == false){
            QMessageBox::warning(this,"ERRO","Este quarto não está disponível");
            return;
        }
        else{
            ui->label->setText("Check in realizado");
            return;
        }
    }

    if(cb == "2 - Casal Comum"){
        if(cc.insere(0) == false){
            QMessageBox::warning(this,"ERRO","Este quarto não está disponível");
            return;
        }
        else{
            ui->label->setText("Check in realizado");
            return;
        }
    }

    if(cb == "3 - Solteiro Duplo Comum"){
        if(sdc.insere(0) == false){
            QMessageBox::warning(this,"ERRO","Este quarto não está disponível");
            return;
        }
        else{
            ui->label->setText("Check in realizado");
            return;
        }
    }

    if(cb == "4 - Solteiro Master"){
        if(sm.insere(0) == false){
            QMessageBox::warning(this,"ERRO","Este quarto não está disponível");
            return;
        }
        else{
            ui->label->setText("Check in realizado");
            return;
        }
    }

    if(cb == "5 - Casal Master"){
        if(cm.insere(0) == false){
            QMessageBox::warning(this,"ERRO","Este quarto não está disponível");
            return;
        }
        else{
            ui->label->setText("Check in realizado");
            return;
        }
    }

    if(cb == "6 - Solteiro Duplo Master"){
        if(sdm.insere(0) == false){
            QMessageBox::warning(this,"ERRO","Este quarto não está disponível");
            return;
        }
        else{
            ui->label->setText("Check in realizado");
            return;
        }
    }

    if(cb == "7 - Suíte Presidencial"){
        if(p.insere(0) == false){
            QMessageBox::warning(this,"ERRO","Este quarto não está disponível");
            return;
        }
        else{
            ui->label->setText("Check in realizado");
            return;
        }
    }
}

//Botão que fechar a janela
void Quartos::on_pushButton_clicked()
{
    this->close();
}

//Função que imprime os quartos disponíveis
void Quartos::on_pushButton_3_clicked()
{
    ui->textBrowser->setText("");
    int b =sc.getMax() - sc.getN();
    QString c = QString::number(b);
    ui->textBrowser->append("Solteiro Comum: " + c);

    int d =cc.getMax() - cc.getN();
    QString f = QString::number(d);
    ui->textBrowser->append("Casal Comum: " + f);

    int g =sdc.getMax() - sdc.getN();
    QString h = QString::number(g);
    ui->textBrowser->append("Solteiro Duplo Comum: " + h);

    int i =sm.getMax() - sm.getN();
    QString j = QString::number(i);
    ui->textBrowser->append("Solteiro Master: " + j);

    int k =cm.getMax() - cm.getN();
    QString l = QString::number(k);
    ui->textBrowser->append("Casal Master: " + l);

    int m =sdm.getMax() - sdm.getN();
    QString n = QString::number(m);
    ui->textBrowser->append("Solteiro Duplo Master: " + n);

    int o =p.getMax() - p.getN();
    QString q = QString::number(o);
    ui->textBrowser->append("Suíte Presidencial: " + q);

}

//Função que remove o quarto alocado na LES(Check - Out)
void Quartos::on_pushButton_4_clicked()
{
    //Pega o valor de cb
    QString cb = ui->comboBox->currentText();

    //Checa se algum quarto está alocado, se sim, desaloca
    if(cb == "1 - Solteiro Comum"){
        if(sc.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Não há ninguém hospedado neste quarto");
            return;
        }
        else{
            ui->label->setText("Check out realizado");
            return;
        }
    }

    if(cb == "2 - Casal Comum"){
        if(cc.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Não há ninguém hospedado neste quarto");
            return;
        }
        else{
            ui->label->setText("Check out realizado");
            return;
        }
    }

    if(cb == "3 - Solteiro Duplo Comum"){
        if(sdc.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Não há ninguém hospedado neste quarto");
            return;
        }
        else{
            ui->label->setText("Check out realizado");
            return;
        }
    }

    if(cb == "4 - Solteiro Master"){
        if(sm.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Não há ninguém hospedado neste quarto");
            return;
        }
        else{
            ui->label->setText("Check out realizado");
            return;
        }
    }

    if(cb == "5 - Casal Master"){
        if(cm.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Não há ninguém hospedado neste quarto");
            return;
        }
        else{
            ui->label->setText("Check out realizado");
            return;
        }
    }

    if(cb == "6 - Solteiro Duplo Master"){
        if(sdm.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Não há ninguém hospedado neste quarto");
            return;
        }
        else{
            ui->label->setText("Check out realizado");
            return;
        }
    }

    if(cb == "7 - Suíte Presidencial"){
        if(p.remove(0) == false){
            QMessageBox::warning(this,"ERRO","Não há ninguém hospedado neste quarto");
            return;
        }
        else{
            ui->label->setText("Check out realizado");
            return;
        }
    }

}
