// Implemente uma função recursiva para apresentar o conteúdo de um vetor de inteiros, do
// primeiro ao último item.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

void mostra_vet(int *vet, int contador);

int main(){

    srand(time(NULL));

    int contador = -1, vetor[TAM];

    for(int i = 0; i < TAM; i++){

        vetor[i] = rand()%1000;
    }
    

    printf("Vetor inicial: \n ");


    for(int i = 0; i < TAM; i++){

        printf(" [%d]: %d \t ",i, vetor[i]);
    }

    printf("\n \n \n ");

    mostra_vet(vetor, contador);



    return 0;
}

void mostra_vet(int *vet, int contador){
    
    if(contador == (TAM - 1)){
        
        return;
    }
    

    else{
        
        printf("%d \t",vet[contador + 1]);

        mostra_vet(vet, (contador+1));

      
    }
  
}