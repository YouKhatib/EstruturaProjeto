#include "registro.h"
#include "ui_registro.h"
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include <QDir>


QString local = "login.txt";
QString localSenha = "senha.txt";
Registro::Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
}

Registro::~Registro()
{
    delete ui;
}
void Registro::on_pushButton_clicked()
{
    close();
}

void Registro::on_pushButton_2_clicked()
{

    if(ui->lineEdit_2->text() != ui->lineEdit_3->text()){ //erro caso as senhas nos campos forem diferentes
        QMessageBox::warning(this,"ERRO","Senhas diferentes");
        return;
    }
    if(ui->lineEdit->text() == "" || ui->lineEdit_2->text() == "" || ui->lineEdit_3->text() == "" ||
            ui->lineEdit_4->text() == "" || ui->lineEdit_5->text() == ""){ //caso algum campo não tenha sido preenchido
        QMessageBox::warning(this,"ERRO","Complete todos os campos");
        return;
    }
    QFile arquivo(local);
    if(!arquivo.open(QFile::Append|QFile::Text)){
        QMessageBox::warning(this,"ERRO","arquivo não aberto");
    }
    QTextStream saida(&arquivo);
    QString texto = ui->lineEdit->text();
    saida << texto; //método para escrever no arquivo
    saida << "\n";
    arquivo.flush();
    arquivo.close();

    QFile arquivoSenha(localSenha);
    QTextStream saidaSenha(&arquivoSenha);
    if(!arquivoSenha.open(QFile::Append|QFile::Text)){
        QMessageBox::warning(this,"ERRO","arquivo não aberto");
    }
    QString textoSenha = ui->lineEdit_2->text();
    saidaSenha << textoSenha; //método para escrever no arquivo
    saidaSenha << "\n";
    arquivoSenha.flush();
    arquivoSenha.close();
    QMessageBox::warning(this,"Registro","Registro concluido com sucesso.");

}

