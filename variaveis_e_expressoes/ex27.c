/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 27: leia um valor de área em hectares e apresente-o convertido em metros quadrados.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float hec;
    
    printf("Insira uma area em hectares: ");
    scanf("%f", &hec);
    
    printf("\nA area em metros quadrados e: %f\n", 10000 * hec);

    return 0;
}
