// Desenvolver uma estrutura para representar um aluno contendo nome, idade, sexo e um
// vetor com 4 notas. Inicie cada informação de um aluno e apresente-as conforme formato
// abaixo:
// Nome: ...
// Idade: ...
// Sexo: ...
// Notas: n1 n2 n3 n4
// No local de cada . . . deve aparecer a informação usada na inicialização. Da mesma forma,
// no local de cada nota ni deverá aparecer a i-ésima nota do aluno.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{

    char nome[50];
    int idade;
    char sexo;
    float notas[4];

}Aluno;

int main(){

    srand(time(NULL));

    Aluno a1;

    strcpy(a1.nome, "Bruno");
    a1.idade = 16;
    a1.sexo = 'M';

    for(int i = 0; i < 4; i++){

        a1.notas[i] = rand()%11;
    }

    printf("\n Nome: %s \n ",a1.nome);
    printf("Idade: %d \n ",a1.idade);
    printf("Sexo: %s \n ",((a1.sexo == 'M' || a1.sexo == 'm') ? "Masculino" : "Feminino"));
    
    printf("Notas:");

    for(int i = 0; i < 4; i++){

        printf("%.2f ", a1.notas[i]);
    }

    return 0;
}