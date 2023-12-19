// Implemente uma função para calcular o perímetro de um círculo, definido conforme a
// especificação do exercício 31.
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

typedef struct 
{
    float x, y;
    float raio;
    float perimetro;

}Circulo;

void calcula_perimetro(Circulo *c);

int main(){

    Circulo c;

    c.x = 7.2;
    c.y = 9;
    c.raio = 5;

    //printf("<(%.2f, %.2f)> %.2f",c.x, c.y, c.raio);

    calcula_perimetro(&c);

    printf("Perimetro do circulo: %.2f", c.perimetro);



    return 0;
}


void calcula_perimetro(Circulo *c){

    c->perimetro = (2*(PI*c->raio));

}