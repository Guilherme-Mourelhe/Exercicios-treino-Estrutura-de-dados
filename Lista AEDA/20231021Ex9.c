// Desenvolver uma função que calcule a soma de dois números passados por parâmetro e
// utilize um terceiro parâmetro para retornar o resultado da soma. Segue uma sugestão de
// protótipo da função: void soma(int a, int b, int *s);. Implemente a função main
// para testar a função criada.
#include <stdio.h>

void soma(int a, int b, int *s);

int main(){
    int som, aux;

    soma(5,5,&som);

    printf("Soma: %d ",som);
    
    return 0;
}

void soma(int a, int b, int *soma){
    
    *soma = a + b;
}