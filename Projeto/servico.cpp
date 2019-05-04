#include "servico.h"
#include "ui_servico.h"
#include "fila.h"

#include <qmessagebox.h>
// O PROGRAMA ESTA COM ERRO RELACIONADO AO QT APÓS ESTOURAR O LIMITE DOS SERVIÇOS E VOLTAR PARA ALTERAR CARDAPIO
// PROGRAMA CRASHA SE TENTARMOS REALIZAR QUALQUER AÇÃO RELACIONADO AO CARDAPIO

fila queue;

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

void Servico::on_pushButton_clicked()
{
    this->close();
}

void Servico::on_pushButton_2_clicked()
{
    ui->textBrowser->setText("");
    int x;
    for(x = queue.getI(); x !=queue.getF(); x=((x+1) % queue.getMax())){    //Pega posição para imprimir
       QString a = QString::number(queue.getQuarto(x));                     //Converte para QString
       if(queue.getQuarto(x) == 1){                                         //Imprime os Quartos
           ui->textBrowser->append("Serviço de quarto Solteiro Comum");
       }
       if(queue.getQuarto(x) == 2){
           ui->textBrowser->append("Serviço de quarto Casal Comum");
       }
       if(queue.getQuarto(x) == 3){
           ui->textBrowser->append("Serviço de quarto Solteiro Duplo Comum");
       }
       if(queue.getQuarto(x) == 4){
           ui->textBrowser->append("Serviço de quarto Solteiro Master");
       }
       if(queue.getQuarto(x) == 5){
           ui->textBrowser->append("Serviço de quarto Casal Master");
       }
       if(queue.getQuarto(x) == 6){
           ui->textBrowser->append("Serviço de quarto Solteiro Duplo Master");
       }
       if(queue.getQuarto(x) == 7){
           ui->textBrowser->append("Serviço de quarto Presidencial");
       }

    }
}

void Servico::on_pushButton_3_clicked()
{
    //Pega o valor do cb
    QString cb = ui->comboBox->currentText();

    //Checa se a Fila de serviços esta cheia, se não, ele preenche
    if(cb == "1 - Solteiro Comum"){
        if(queue.enfileira(0, 1) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("Serviço de quarto registrado");
            return;
        }
    }

    if(cb == "2 - Casal Comum"){
        if(queue.enfileira(0, 2) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("Serviço de quarto registrado");
            return;
        }
    }

    if(cb == "3 - Solteiro Duplo Comum"){
        if(queue.enfileira(0, 3) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("Serviço de quarto registrado");
            return;
        }
    }

    if(cb == "4 - Solteiro Master"){
        if(queue.enfileira(0,4) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("Serviço de quarto registrado");
            return;
        }
    }

    if(cb == "5 - Casal Master"){
        if(queue.enfileira(0,5) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("Serviço de quarto registrado");
            return;
        }
    }

    if(cb == "6 - Solteiro Duplo Master"){
        if(queue.enfileira(0,6) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("Serviço de quarto registrado");
            return;
        }
    }

    if(cb == "7 - Suíte Presidencial"){
        if(queue.enfileira(0,7) == false){
            QMessageBox::warning(this,"ERRO","Fila de Serviço cheia");
            return;
        }
        else{
            ui->label->setText("Serviço de quarto registrado");
            return;
        }
    }
}

void Servico::on_pushButton_4_clicked()                     //Desenfileira na ordem FIFO dos quartos chamados
{
    queue.desenfileira();
}
