// Implemente uma função que receba uma string e um caractere e retorne como resultado o
// número de ocorrências desse caractere na string. Essa função deve obedecer ao protótipo:
// int conta_char(char *str, char c);.
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int conta_char(char *str, char c);

int main(){

    char string[] = "Luis Guilherme Mourelhe Fernandes";

    char caracter = 'e';


    printf("Quantidade de vezes que o caracter foi encontrado na string: %d", conta_char(string, caracter));


    return 0;
}

int conta_char(char *str, char c){

    int contador = 0;

    for(int i = 0; i < strlen(str); i++){   

        if(str[i] >= 'A' && str[i] <= 'Z'){

            str[i] = (str[i] + 32);
        }
        if(str[i] == c){

            contador++;
        }   
    }
    return contador;
}