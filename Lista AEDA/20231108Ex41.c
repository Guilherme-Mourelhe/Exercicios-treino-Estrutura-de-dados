// Implemente uma função recursiva para apresentar o conteúdo de um vetor de inteiros, do
// último ao primeiro item.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostra_vet(int *vet, int tamanho);

int main(){

    srand(time(NULL));

    int tamanho = 15, vetor[tamanho];

    for(int i = 0; i < tamanho; i++){

        vetor[i] = rand()%1000;
    }

    printf("Vetor inicial: \n ");

    for(int i = 0; i < tamanho; i++){

        printf(" [%d]: %d \t ",i, vetor[i]);
    }

    printf("\n");

    mostra_vet(vetor, tamanho);



    return 0;
}

void mostra_vet(int *vet, int tamanho){
    
    if(tamanho == 0){
        
        return;
    }

    else{
        
        printf("%d \t",vet[tamanho - 1]);

        mostra_vet(vet, (tamanho-1));

       // printf("%d \t",vet[tamanho - 1]);
    }
  
}



