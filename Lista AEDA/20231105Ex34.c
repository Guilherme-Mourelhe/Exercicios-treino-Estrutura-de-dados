// Crie um programa para imprimir 50 números pseudo-aleatórios no intervalo [0, 50]. Utilize
// as funções rand() e srand() da biblioteca stdlib.h, além da função time() da biblioteca
// time.h.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

int main(){

    srand(time(NULL));  

    for(int i = 0; i < TAM; i++){

        printf("%d \t", rand()%51);
    }

    return 0;
}