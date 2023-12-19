// Implemente uma função recursiva para calcular e retornar a soma dos números naturais
// menores ou iguais a N.
#include <stdio.h>
#include <stdlib.h>

int soma_naturais(int n);

int main(){

    int numero, resultado;

    printf("Informe um numero: \n");
    scanf("%d", &numero);

    resultado = soma_naturais(numero);

    printf("\n Soma dos numeros naturais menores ou igual a N: %d ",resultado);


    return 0;
}

int soma_naturais(int n){

    int resultado;

    
    if(n == 0){

        resultado = 0;
    }

    else {

        resultado = n + soma_naturais(n - 1);
    }

    return resultado;
}