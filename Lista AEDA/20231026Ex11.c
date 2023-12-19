// Escreva uma função que receba um número real n (passagem de parâmetros por valor) e
// retorne a parte inteira e a fracionária por meio de passagem de parâmetros por referência.
// Crie um programa para testar a função criada.
#include <stdio.h>

void retorna_num(float n, int *inteira, float *frac);

int main(){


    float n = 7.62;

    int inteira;
    float frac;

    retorna_num(n, &inteira, &frac);

    printf("Parte inteira: %d, parte fracionaria: %f",inteira, frac);


    return 0;
}

void retorna_num(float n, int *inteira, float *frac){


    int aux;

    aux = n;
    *inteira = aux;

     float aux2;

    aux2 = (n - *inteira);

    *frac = aux2;

}