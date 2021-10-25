/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float f;
    
    printf("Insira uma temperatura em Fahrenheit: ");
    scanf("%f", &f);
    
    printf("\nA temperatura em Celsius e: %f\n", (f - 32.0) / 1.8);

    return 0;
}
