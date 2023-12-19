// Crie um programa para imprimir 100 números pseudo-aleatórios no intervalo [5, 25]. Utilize
// as funções rand() e srand() da biblioteca stdlib.h, além da função time() da biblioteca
// time.h.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main(){

    srand(time(NULL));  

    for(int i = 0; i < TAM; i++){

        printf("%d \t", (rand()%21) + 5);
    }

    return 0;
}