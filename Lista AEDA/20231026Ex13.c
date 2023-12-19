// Escreva uma função que receba um vetor de inteiros de tamanho n e preenche esse vetor
// com valores aleatórios no intervalo [−15, 20]. Crie um programa para testar a função criada,
// preenchendo o vetor e imprimindo seu conteúdo.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define n 7

void preenche_vetor(int *vet);

int main(){

    srand(time(NULL));

    int vetor[n];

    preenche_vetor(vetor);

    printf("Impressao do vetor: \n ");

    for(int i = 0; i < n; i++){
        printf("%d \t", vetor[i]);
    }

    return 0;
}

void preenche_vetor(int *vet){

    for(int i = 0; i < n; i++){

        vet[i] = (rand()%36) - 15;

    }
}