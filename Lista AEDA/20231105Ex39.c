// Implemente uma função recursiva para calcular o resultado do cálculo de um número a
// elevado a um número natural b, ou seja, a
// b

#include <stdio.h>
#include <stdlib.h>

int exponencial(int base, int expoente);

int main(){

    int base, expoente, resultado;

    printf("Informe a base: \n");
    scanf("%d", &base);

    printf("Informe o expoente: \n");
    scanf("%d", &expoente);
    

    resultado = exponencial(base, expoente);

    printf("\n %d elevado a %d : %d ",base, expoente, resultado);


    return 0;
}

int exponencial(int base, int expoente){

    int resultado;

    if(expoente == 0){

        resultado = 1;
    }

    if(expoente == 1){

        resultado = base;
    }

    else{

        resultado = base * exponencial(base, (expoente-1));
    }

    return resultado;
}   