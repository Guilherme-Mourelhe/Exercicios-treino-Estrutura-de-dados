// Implemente uma função para calcular a média das notas de um aluno. Desenvolva um
// programa para criar um aluno. Solicite ao usuário os dados do aluno e suas notas no
// intervalo [1, 10]. Calcule a média usando a função criada e mostre-a na tela.
#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char nome[50];
    int idade;
    char sexo;
    float notas[4];

}Aluno;

void media_notas(Aluno *aluno);

int main(){

    Aluno aluno1;   
    int flag = 0;

    printf("\n Informe o nome do aluno: \n ");
    scanf("%s",&aluno1.nome);

    
    printf("\n Informe a idade do aluno: \n ");
    scanf("%d",&aluno1.idade);

    
    printf("\n Informe o sexo do aluno, 'M' para masculino ou 'F' para feminino: \n ");
    scanf(" %c",&aluno1.sexo);
    

    while(flag == 0){

    for(int i = 0; i < 4; i++){


        printf("Informe a nota %d do aluno. Obs: Nota deve estar entre 1 e 10. : \n", (i+1));
        scanf("%f", &aluno1.notas[i]);

        if(aluno1.notas[i] < 1 || aluno1.notas[i] > 10){
            
            flag++;
            return printf("Numero fora do intervalo");
        }

        if(i == 3){
            
            flag++;
          }
    
      }
    }

    media_notas(&aluno1);

    return 0;
}

void media_notas(Aluno *aluno){

    float media = 0;

    for(int i = 0; i < 4; i++){

        media+= aluno->notas[i];
    }

    printf("Media das notas: %.2f", (media/4));

}