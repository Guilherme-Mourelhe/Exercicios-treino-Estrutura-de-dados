// Desenvolver um programa para cada padrão abaixo. Cada programa deve criar
// o padrão utilizando uma única instrução para imprimir os asteriscos como, por exemplo,
// printf("*");. Logo, estruturas de repetição precisarão ser utilizadas. Instruções como
// printf("\n"); podem ser utilizadas para efetuar mudanças de linha.
// ***** * *****
// ***** ** ****
// ***** *** ***
// ***** **** **
// ***** ***** *
#include <stdio.h>

#define TAM 20
#define TAM2 15
int main(){

    int cont = 0;

    for(int i = 1; i <= TAM; i++){

        printf("*");

        if(i % 5 == 0){
            printf("\n");

        }
    }

   for(int i =1; i <= 5; i++){
    for(int j = 1; j<=i; j++){
        printf("*");
    }
    printf("\n");
   }


    for(int i = 5; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}