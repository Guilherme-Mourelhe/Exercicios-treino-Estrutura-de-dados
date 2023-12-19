// Implemente uma função para calcular a soma dos primeiros 50 números naturais ímpares.
// Considere o número 1 como primeiro número natural. Faça um programa para usar a
// função e apresentar a soma para o usuário.
#include <stdio.h>

int soma_50naturaisimp(int soma);

int main() {

    int soma = 0;

    printf("Soma dos primeiros 50 naturais impares: %d",soma_50naturaisimp(soma));

    return 0;
}

int soma_50naturaisimp(int soma){


    for(int i = 1; i<= 50; i++){

        if(i % 2 != 0){
            soma += i;
        }
    }

    return soma;
}