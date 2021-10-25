/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float c;
    
    printf("Insira uma temperatura em Celsius: ");
    scanf("%f", &c);
    
    printf("\nA temperatura em Fahrenheit e: %f\n", 1.8 * c + 32.0);

    return 0;
}
