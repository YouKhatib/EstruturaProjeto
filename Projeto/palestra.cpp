#include "palestra.h"
#include "ui_palestra.h"
#include "pilha.h"

#include <qmessagebox.h>

PES stack;
int t;
Palestra::Palestra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Palestra)
{
    ui->setupUi(this);
    //Se o desempilha retornar falso, quer dizer que é a primeira abertura desta função
    if(!stack.desempilha()){
        //For de inicialização - Significa que todos os lugares estão vagos
        for (int a = 0; a < stack.getMAX(); a++)
            stack.empilha(0);
        t = stack.getN();
        stack.limpa();
    }
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
        ui->textBrowser->setText("");
        //Função de print no painel
        int p = 0;
        while(p < 50){
            for (int i = t-1; i >= 0; i--){
                if(p % 10 == 0 && p != 0)
                    ui->textBrowser->append("");

                QString val = QString::number(stack.getV(i));
                //Faz com que haja quebra de linha a cada inserção
                QTextCursor prev_cursor = ui->textBrowser->textCursor();
                ui->textBrowser->moveCursor(QTextCursor::EndOfWord);
                ui->textBrowser->insertPlainText(val);
                ui->textBrowser->setTextCursor(prev_cursor);
                p++;
            }
        }

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
