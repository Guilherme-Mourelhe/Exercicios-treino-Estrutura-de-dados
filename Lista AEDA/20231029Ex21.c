// Implemente uma função que receba uma string e substitua todas as letras por suas suces-
// soras no alfabeto. Por exemplo, a string "Casa"seria alterada para "Dbtb". Essa função

// deve obedecer ao protótipo:
// void shift_string(char *str);.
// Observação: A letra z deve ser substituída pela letra a (e Z por A). Caracteres que não
// forem letras devem permanecer inalterados.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void shift_string(char *str);

int main(){

    char string[] = "Texto para teste";

    shift_string(string);

    printf("String modificada: %s", string);

    return 0;
}

void shift_string(char *str){   

    for(int i = 0; i < strlen(str); i++){

        //Condição para garantir que altere apenas letras na string
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){

            if(str[i] != 'z' && str[i] != 'Z' ){

            str[i] = (str[i] + 1);
            
        }

        if(str[i] == 'z'){
           
            str[i] = 'a';
        }
        if(str[i] == 'Z'){

            str[i] = 'A';
        }

        }

    }

}