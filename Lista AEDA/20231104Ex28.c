// Desenvolva um programa para criar um círculo. Atribua a suas coordenados um valor
// real no intervalo [-20, 20] e para o raio um valor no intervalo ]0, 10]. Utilize as funções
// implementadas nos exercícios 25, 26 e 27 para apresentar as informações do círculo, sua
// área e seu perímetro.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.14159
typedef struct 
{
    float x, y;
    float raio;
    float area;
    float perimetro;

}Circulo;

void exibe_circulo(Circulo c);
void calcula_area(Circulo *c);
void calcula_perimetro(Circulo *c);

int main(){

    srand(time(NULL));

    Circulo c;

    c.x = (rand()%41) - 20;
    c.y = (rand()%41) - 20;
    c.raio = (rand()%11);

    calcula_area(&c);
    calcula_perimetro(&c);
    exibe_circulo(c);
    

    //printf("%.2f %.2f %.2f", c.x, c.y, c.raio);

    return 0;
}

void exibe_circulo(Circulo c){

    printf(" <(%.2f, %.2f) %.2f> Area: %.2f Perimetro: %.2f \n ",c.x, c.y, c.raio, c.area, c.perimetro);
}


void calcula_area(Circulo *c){

    c->area = (PI*(c->raio*c->raio));

}

void calcula_perimetro(Circulo *c){

    c->perimetro = (2*(PI*c->raio));

}