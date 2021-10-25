/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float k;
    
    printf("Insira uma temperatura em Kelvin: ");
    scanf("%f", &k);
    
    printf("\nA temperatura em Celsius e: %f\n", k - 273.15);

    return 0;
}
