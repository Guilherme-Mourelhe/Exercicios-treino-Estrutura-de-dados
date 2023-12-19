// Escreva uma função que receba um vetor de tamanho n e retorne por referência o maior
// e o menor elementos do vetor do vetor. Implemente a função main para testar a função
// criada.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define n 10

void procura_elemento(int *maior, int *menor, int *vetor);

int main(){

    srand(time(NULL));

    int maior, menor, vet[n];

    for(int i = 0; i < n; i++){

        vet[i] = rand();
    }

    procura_elemento(&maior, &menor, vet);

    printf("Menor elemento: %d , Maior elemento: %d ", menor, maior);
     

    return 0;

}

void procura_elemento(int *maior, int *menor, int *vetor){

    *maior = vetor[0];
    *menor = vetor[0];

    for(int i = 0; i < n; i++){

        if(vetor[i] > *maior){
            
            *maior = vetor[i];
        }

        if(vetor[i] < *menor){
            
            *menor = vetor[i];
        }
    }


}