// Implemente uma função recursiva para calcular e retornar o produto dos números inteiros
// maiores que 0 e menores ou iguais a N.
#include <stdio.h>
#include <stdlib.h>

int produto_inteiros(int n);

int main(){

    int numero, resultado;

    printf("Informe um numero: \n");
    scanf("%d", &numero);

    resultado = produto_inteiros(numero);

    printf("Produto dos numeros inteiros maiores que 0 e menores ou iguais a %d : %d",numero, resultado);


    return 0;
}

int produto_inteiros(int n){

    int resultado;

    if(n == 0){

        resultado = 1;
    }

    else{

        resultado = n * produto_inteiros(n-1);
    }

    return resultado;

}