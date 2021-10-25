/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 12: leia uma distância em milhas e apresente-a convertida em quilômetros.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float milha;
    
    printf("Insira uma distancia em milhas: ");
    scanf("%f", &milha);
    
    printf("\nA distancia em quilometros e: %f\n", 1.61 * milha);

    return 0;
}
