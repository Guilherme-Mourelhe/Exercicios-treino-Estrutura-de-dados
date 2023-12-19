// Crie uma função para calcular a soma dos primeiros 100 números naturais. Considere
// o número 1 como primeiro número natural. Faça um programa para usar a função e
// apresentar a soma para o usuário.
#include <stdio.h>

void soma_100naturais(int *soma);

int main(){

    int soma = 0;

    soma_100naturais(&soma);
     printf("Soma dos primeiros 100 numeros naturais: %d", soma);

    return 0;
}

void soma_100naturais(int *soma){

    for(int i = 1; i <= 100; i++){

        *soma += i;
    }

}