// Desenvolver um programa para efetuar o cálculo do valor de S utilizando os n primeiros
// termos (n é informado pelo usuário), sendo S = 1 + 1/2 + 1/3 + 1/4 + . . . O resultado da soma
// deverá ser apresentado.
#include <stdio.h>

int main(){

    float soma = 0;
    int n;

    scanf("%d",&n);

    for(int i = 1; i <= n; i++){

        soma += (1/i);
    }

    printf("soma: %.2f", soma);

    return 0;
}