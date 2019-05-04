#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#define MAX 50

class PES{
public:
    PES (): n(0){}

    bool empilha(int x){
        if(n >= MAX)
            return false;

        v[n++] = x;
        return true;
    }

    bool desempilha(int* x = NULL){
        if (n ==0)
            return false;

        n--;

        if (x)
            *x = v[n];
        v[n] = 0;
        return true;
    }

    int getN(){
        return n;
    }

    int getV(int a){
        return v[a];
    }

    void limpa(){
        n = 0;
    }

    int getMAX(){
        return MAX;
    }

private:
    int n;
    int v[MAX];

};

#endif // PILHA_H
