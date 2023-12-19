// Desenvolver uma estrutura para representar um quadrado no R^2
// . Utilize o comando
// typedef para oferecer um sinônimo (apelido) para a estrutura. Implemente uma função
// para calcular a área do quadrado e outra para seu perímetro. Desenvolva um programa
// para criar um quadrado, atribuir a ele valores e apresente na tela sua área e seu perímetro.
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct 
{
    float x, y;
    float lado;
    float area;
    float perimetro;

}Quadrado;

void calcula_area(Quadrado *quad);
void calcula_perimetro(Quadrado *quad);

int main(){

    srand(time(NULL));

    Quadrado quad;

    quad.x = rand()%101;
    quad.y = rand()%101;
    quad.lado = rand()%51;

    calcula_area(&quad);
    calcula_perimetro(&quad);

    printf("Area: %.2f, Perimetro: %.2f", quad.area, quad.perimetro);

    return 0;
}

void calcula_area(Quadrado *quad){

    quad->area = (quad->lado * quad->lado);
}

void calcula_perimetro(Quadrado *quad){

    quad->perimetro = (4*quad->lado);
}