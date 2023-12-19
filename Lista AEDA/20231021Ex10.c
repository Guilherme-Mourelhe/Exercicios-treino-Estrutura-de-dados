// Escreva uma função denominada primo que recebe como parâmetro um inteiro m e dois
// outros parâmetros primo_menor e primo_maior passados por referência. A função deve
// retornar em primo_menor o maior número primo que é menor do que m e deve retornar
// em primo_maior o menor número primo que é maior do que m. Crie um programa para
// testar a função criada.
#include <stdio.h>

int primo(int m, int *primo_menor, int *primo_maior);

int main(){

    int primo_menor, primo_maior;

    primo(20, &primo_menor, &primo_maior);

    printf("Primo menor: %d, Primo_maior: %d " ,primo_menor,primo_maior);



    return 0;
}

int primo(int m, int *primo_menor, int *primo_maior){

    

    for(int i = 0; i <= m; i++){

        if(i % 2 !=0 && i % i == 0 && i % 1 == 0){
            
            *primo_menor = i;
        }       
    }

    

    for(int i = m; m != -1; i++){

        if(i % 2 !=0 && i % i == 0 && i % 1 == 0){
            
            *primo_maior = i;
            m = -1;
            break;

        }       

    }
}