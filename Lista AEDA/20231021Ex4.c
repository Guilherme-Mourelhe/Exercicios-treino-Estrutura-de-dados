// Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1−2+ 3−4+. . .
// O número n de termos deverá ser solicitado ao usuário e o resultado da soma deverá ser
// apresentado.
#include<stdio.h>

int main(){

    int soma = 0, n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++ ){

        if(i%2 != 0){
            soma += i;
        }

        if(i%2 == 0){
            soma += (-i);
        }
    }

    printf("Resultado da soma: %d", soma);

    return 0;
}