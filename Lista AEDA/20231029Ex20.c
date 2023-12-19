// Implemente uma função que receba uma string e altere nela as ocorrências de caracteres
// maiúsculos para minúsculos. Essa função deve obedecer ao protótipo:
// void minusculo(char *str);.
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void minusculo(char *str);

int main(){

    char string[] = "GUILHERME";

    minusculo(string);
    printf("String com caracteres minusculos: %s",string);
    


    return 0;
}

void minusculo (char *str){

    for(int i = 0; i < strlen(str); i++){

        if(str[i] >= 'A' && str[i] <= 'Z'){

            str[i] = (str[i] + 32);
        }
    }

}