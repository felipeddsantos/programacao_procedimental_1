/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 26: leia um valor de área em metros quadrados e apresente-o convertido em hectares.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float m2;
    
    printf("Insira uma area em metros quadrados: ");
    scanf("%f", &m2);
    
    printf("\nA area em hectares e: %f\n", 0.0001 * m2);

    return 0;
}
