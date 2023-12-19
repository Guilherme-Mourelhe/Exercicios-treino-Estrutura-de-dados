// Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1− 1/2 + 1/3 − 1/4 +. . .
// O número n de termos deverá ser solicitado ao usuário e o resultado da soma deverá ser
// apresentado.
#include <stdio.h>

int main(){

    float soma = 0, aux = 1;
    int n;

    scanf("%d", &n);


    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){ 
            soma += (1.0/i);
        }

        else if(i % 2 == 0){
            soma += -(1.0/i);
        }
    }

    printf("Soma: %f", soma);
    
    return 0;
}