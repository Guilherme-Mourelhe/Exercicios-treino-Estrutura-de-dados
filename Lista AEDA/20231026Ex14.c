// Escreva uma função que receba um vetor de inteiros de tamanho n e um valor v. A função
// deve retornar a quantidade de valores iguais a v existente no vetor. Crie um programa
// para testar a função criada gerando números aleatórios para o vetor no intervalo [10, 100].
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define n 10

int retorna_igual(int *vet, int valor);


int main(){

    srand(time(NULL));

    int vetor[n], v = 70;

    for(int i = 0; i < n; i++){ 

        vetor[i] = (rand()%91) + 10;
    }   

     for(int i = 0; i < n; i++){ 

        printf("%d \t",vetor[i]);
    }   


    printf("A quantidade de valores igual a %d encontrada no vetor eh de: %d",v ,retorna_igual(vetor, v));
}

int retorna_igual(int *vet, int valor){

    int cont = 0;

    for(int i = 0; i < n; i++){

        if(vet[i] == valor){
            cont++;
        }

    }

    return cont;
}