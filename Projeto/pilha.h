#ifndef PILHA_H
#define PILHA_H

#include <iostream>
#define MAX 5

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

        return true;
    }

    /**void print(){
        for (int i = n-1; i >= 0; i--)
            cout << v[i] << " ";
        cout << endl;
    }*/

    void limpa(){
        n = 0;
    }

private:
    int n;
    int v[MAX];

};

#endif // PILHA_H
