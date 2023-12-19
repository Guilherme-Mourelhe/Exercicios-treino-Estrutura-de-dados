// Implemente uma função para mover um círculo no R^2
// com base nos deslocamentos em x e y. Crie um programa para mostrar o perfeito funcionamento da função.
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float x, y;

}Circulo;

void move_circulo(Circulo *c);

int main(){

    Circulo c;

    c.x = 5.0;
    c.y = 5.0;

    printf("Coordenadas primarias: (%.2f,%.2f) \n ", c.x, c.y);

    move_circulo(&c);

    printf(" \n Coordenadas novas : (%.2f, %.2f) \n ", c.x, c.y);

    return 0;
}

void move_circulo(Circulo *c){

    float newX, newY;

    printf("Informe as novas coordenadas desejadas para x e y respectivamente. : \n");
    scanf("%f %f", &newX, &newY);

    c->x = newX;
    c->y = newY;

}