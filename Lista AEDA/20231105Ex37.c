// (JOGO) Crie um programa em C que sorteia um número entre 1 e 100. Um jogador
// (você ou outra pessoa) tenta adivinhar o número sorteado. Uma mensagem na tela deve
// ser apresentada ao usuário, solicitando-o um palpite entre 1 e 100. Para cada palpite, o
// programa deve informar se o palpite é maior, menor ou igual ao número sorteado. Caso
// seja igual, o jogo termina e o jogador vence. Caso contrário, o jogador faz um novo palpite
// para tentar acertar o número sorteado. Um jogador tem direito a fazer 10 palpites. Caso
// ele não acerte o número nesses 10 palpites, o computador ganha o jogo.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main(){

    srand(time(NULL));

    int numero_sorteado = (rand()%100 + 1);
    int contador = 1, numero = 1;

    printf("Bem vindo ao JOGO!, adivinhe o numero que a maquina pensou no intervalo de 1 e 100  para ganhar.");

    while(contador != TAM && numero > 0 && numero < 101){

        printf("Qual numero voce acha que foi sorteado? \n");
        scanf("%d", &numero);


        if(numero == numero_sorteado){

            printf("Parabens! Voce advinhou o numero correto e ganhou da maquina!!!");
            break;
        }

        if(numero > numero_sorteado){

            printf("O palpite e maior que o numero pensado pela maquina, tente de novo.");
        }

         if(numero < numero_sorteado){

            printf("O palpite e menor que o numero pensado pela maquina, tente de novo.");
        }

        contador++;
    }

    if(contador == TAM){

        printf("\n GAME OVER! haha");
    }



    return 0;

}