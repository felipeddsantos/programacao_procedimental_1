/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 33: leia o tamanho do lado de um quadrado e imprima como resultado a sua área.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float lado;
    
    printf("Insira o lado de um quadrado: ");
    scanf("%f", &lado);
    
    printf("\nA area do quadrado e: %f\n", lado * lado);

    return 0;
}
