#ifndef FILA_H
#define FILA_H
#define MAX 10
#include <iostream>
#include <string.h>

class fila{
    public:
        int i, f, quarto[];

        fila(){
            i = 0;
            f = i;
            quarto[MAX];
        }

        bool enfileira(int enf, int a){
            if(((f+1) % MAX )== i){
                return false;
            }


            quarto[f] = a;
            f = (f+1) % MAX;
            return true;
        }
        bool desenfileira(int *x=NULL){
            if (i == f){
                return false;
            }
            if (x!=NULL){
                *x = quarto[i];
            }
            i=(i+1) % MAX;
            return true;
        }

        int getI(){
            return i;
        }

        int getF(){
            return f;
        }
        int getMax(){
            return MAX;
        }


        int getQuarto(int p){
            return quarto[p];
        }
};

#endif
