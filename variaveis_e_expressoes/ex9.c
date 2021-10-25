/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float c;
    
    printf("Insira uma temperatura em Celsius: ");
    scanf("%f", &c);
    
    printf("\nA temperatura em Kelvin e: %f\n", c + 273.15);

    return 0;
}
