#ifndef lde_H
#define lde_H
#include <string>


//Classe LDE junto com a classe No.
using namespace std;
class lde{
public:
    lde* primeiro;
    int n;
    double val;
    std::string nome;
    lde* proximo;

    lde(){
        primeiro = NULL;
        proximo = NULL;
        nome = "";
        val = 0;
        n = 0;
    }
    void insere(double x, std::string name){ //Método de inserir da LDE
        lde* novo = new lde;
        novo->val = x;
        novo->nome = name;
        novo->proximo = NULL;
        lde* anterior = NULL;
        lde* proximo = primeiro;
        if(!primeiro){
            primeiro = novo;
            n++;
            return;
        }
        while(proximo && proximo->val < x){
          anterior = proximo;
          proximo = proximo->proximo;
        }

        if(anterior)
          anterior->proximo = novo;
        else{
          primeiro = novo;
          primeiro->nome = name;
        }
        novo->proximo = proximo;
        n++;

    }
    bool remove(std::string idx) { // método de remoção
         lde *atual = primeiro;
         lde *anterior = NULL;
         int i;
         while(atual && atual->nome != idx) {
             anterior = atual;
             atual = atual->proximo;
         }
         if(!atual){
             return false;
         }
         if (atual->proximo == NULL && atual->nome != idx){
             return false;
         }
         if (anterior)
             anterior->proximo = atual->proximo;
         else
             primeiro = atual->proximo;

         delete atual;
         return true;
     }

    int getN(){
        return n;
    }

    virtual ~lde() {
        lde *atual = primeiro, *prox = NULL;
        while (atual) {
            prox = atual->proximo;
            delete atual;
            atual = prox;
        }
    }

};

#endif // lde_H
