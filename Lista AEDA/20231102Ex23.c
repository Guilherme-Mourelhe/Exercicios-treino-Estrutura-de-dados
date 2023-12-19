// Implemente uma função que receba uma string como parâmetro e desloque os seus caracte-
// res uma posição para a direita. Por exemplo, a string "casa"seria substituída para "acas".

// Repare que o último caractere vai para o início da string. Essa função deve obedecer ao
// protótipo:
// void roda_string(char *str);.
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void roda_string(char *str);

int main(){

    char string[] = "casa";

    roda_string(string);

}

void roda_string(char *str){

    int tamanho = strlen(str);
    char auxiliar;

    auxiliar = str[tamanho-1];
    
    

    for(int i = (tamanho - 1); i > 0 ; i--){

        str[i] = str[i - 1];

    }

    str[0] = auxiliar;

    printf("A nova string eh: %s", str);

}