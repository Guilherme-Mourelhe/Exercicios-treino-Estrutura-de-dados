// Desenvolver um programa para efetuar o cálculo do valor de S, sendo S = 1+ 2/3 + 3/5 + 4/7 +. . .
// O número n de termos deverá ser solicitado ao usuário e o resultado da soma deverá ser
// apresentado.
#include <stdio.h>

int main(){

    float soma = 1, cont = 1;
    int n = 0;

    scanf("%d", &n);

    for(int i = 1 ; i<= n; i++){

        if(i != 1){
        soma += (i/(cont+2));
        cont += 2;
        }
    }       
    
    printf("Soma: %f", soma);

    return 0;
}