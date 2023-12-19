// Crie um programa para imprimir 30 números pseudo-aleatórios no intervalo [0, 10]. Utilize
// as funções rand() e srand() da biblioteca stdlib.h, além da função time() da biblioteca
// time.h.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 30

int main(){

    srand(time(NULL));  

    for(int i = 0; i < TAM; i++){

        printf("%d \t", rand()%11);
    }

    return 0;
}