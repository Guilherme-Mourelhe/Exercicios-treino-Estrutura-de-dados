// Desenvolver uma estrutura para representar um círculo no R
// 2
// . Utilize o comando typedef
// para oferecer um sinônimo (apelido) para a estrutura. Desenvolva um programa para criar
// dois círculos, atribuir a eles valores para o par ordenado que representa o centro do círculo
// e um valor para o raio. Apresente na tela os dados dos círculos usando o seguinte formato:
// <(x, y) raio>. Apresente cada círculo em uma linha.
#include <stdlib.h>
#include <stdio.h>

typedef struct{

    float x, y;
    float raio;

}Circulo;

int main(){

    Circulo c1, c2;

    c1.x = 7.4;
    c1.y = 6.3;
    c1.raio = 8;

    
    c2.x = 2.2;
    c2.y = 4.9;
    c2.raio = 10;

    printf(" <(%.2f, %.2f) %.2f> \n ",c1.x, c1.y, c1.raio);
    printf("<(%.2f, %.2f) %.2f> \n ",c2.x, c2.y, c2.raio);

    return 0 ;
}