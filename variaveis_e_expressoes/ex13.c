/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 13: leia uma distância em quilômetros e apresente-a convertida em milhas.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float quilo;
    
    printf("Insira uma distancia em quilometros: ");
    scanf("%f", &quilo);
    
    printf("\nA distancia em milhas e: %f\n", quilo / 1.61);

    return 0;
}
