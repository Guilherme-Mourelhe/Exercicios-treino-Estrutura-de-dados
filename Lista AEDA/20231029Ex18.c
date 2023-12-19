// Implemente uma função que receba uma string como parâmetro e retorno como resultado
// o número de vogais nessa string. Essa função deve obedecer ao protótipo:
// int conta_vogais(char *str);.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int conta_vogais(char *str);


int main(){

    char string[] = "GuilhermeCod";

    printf("Numero de vogais presentes na string: %d", conta_vogais(string));


    return 0;
}

int conta_vogais(char *str){

    int contador = 0;

    for(int i = 0; i < strlen(str); i++){

        if(str[i] >= 65 && str[i] <= 90){

            str[i] = (str[i] + 32);
        }
    }

      for(int i = 0; i < strlen(str); i++){

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){

            contador++;
        }
      }

    return contador;
}
