// Escreva uma função que receba um vetor de inteiros de tamanho n e retorne o maior
// elemento presente no vetor. Implemente a função main para testar a função criada.
#include <stdio.h>
#include <stdlib.h>
#define N 10
#include <time.h>

int maior_num(int *vetor);

int main(){     

    srand(time(NULL));  

    int vet[N];

    for (int i = 0; i < N; i++){
        vet[i] = rand();
    }

    for (int i = 0; i < N; i++){
       printf("%d \t" , vet[i] );
    }


    printf("Maior elemento do vetor: %d",maior_num(vet));

    return 0;
}


int maior_num(int *vetor){

    int maior = vetor[0];

    for(int i = 0; i < N; i++){

        if(vetor[i] > maior ){
            
            maior = vetor[i];
        }

    }
    return maior;
}