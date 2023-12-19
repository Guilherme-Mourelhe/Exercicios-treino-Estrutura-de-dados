// Implemente uma função para apresentar as coordenadas de um círculo usando o formato
// <(x, y) raio>.
#include <stdlib.h>
#include <stdio.h>

typedef struct{

    float x, y;
    float raio;

}Circulo;

void exibe_circulo(Circulo c);

int main(){

    Circulo c1;

    c1.x = 7.4;
    c1.y = 6.3;
    c1.raio = 8;

    exibe_circulo(c1);
   

    return 0 ;
}

void exibe_circulo(Circulo c){

    printf(" <(%.2f, %.2f) %.2f> \n ",c.x, c.y, c.raio);
}