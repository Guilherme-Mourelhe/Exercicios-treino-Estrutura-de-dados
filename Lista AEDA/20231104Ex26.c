// Implemente uma função para calcular a área de um círculo, definido conforme a especifi-
// cação do exercício 31.
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

typedef struct 
{
    float x, y;
    float raio;
    float area;

}Circulo;

void calcula_area(Circulo *c);

int main(){

    Circulo c;

    c.x = 7.2;
    c.y = 9;
    c.raio = 5;

    //printf("<(%.2f, %.2f)> %.2f",c.x, c.y, c.raio);

    calcula_area(&c);

    printf("Area do circulo: %.2f", c.area);



    return 0;
}


void calcula_area(Circulo *c){

    c->area = (PI*(c->raio*c->raio));

}