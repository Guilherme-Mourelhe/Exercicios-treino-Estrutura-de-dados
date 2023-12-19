// Escreva uma função que receba um vetor de tamanho n e retorne por referência o maior
// elemento do vetor e o número de vezes que esse elemento ocorreu no vetor. Implemente a
// função main para testar a função criada.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define n 10

void procura_elemento(int *maior, int *vetor, int *contador);

int main(){

    srand(time(NULL));

    int maior, vet[n], contador = 0;

    for(int i = 0; i < n; i++){

        vet[i] = rand();
    }

    procura_elemento(&maior, vet, &contador);

    printf("Maior elemento: %d, Numero de ocorrencias: %d", maior, contador);
     

    return 0;

}

void procura_elemento(int *maior, int *vetor, int *contador){


    *contador = 0;
    *maior = vetor[0];
    

    for(int i = 0; i < n; i++){

        if(vetor[i] > *maior){
            
            *maior = vetor[i];
        }
    }

    for(int i = 0; i < n; i++){

        if(vetor[i] == *maior){
            
           *contador = *contador + 1;
        }
    }


}