// Implemente uma função para calcular o produto dos primeiros N números naturais ímpares.
// Leia um número natural N e calcule o produto dos números naturais ímpares, menores ou
// iguais a N. Considere o número 1 como primeiro número natural. Faça um programa para
// usar a função e apresentar o resultado para o usuário.
#include <stdio.h>

int prod_Nnaturais_imp(int N);

int main() {

    int N;

    scanf("%d", &N);

    printf("Produto dos naturais impares ate N: %d",prod_Nnaturais_imp(N));

    return 0;
}

int prod_Nnaturais_imp(int N){

    int produto = 1;

    for(int i = 1; i <= N; i++){
        if(i % 2 != 0){
            produto *= i; 
        }
    }

    return produto;
}