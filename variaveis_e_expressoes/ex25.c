/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 25: leia um valor de área em acres e apresente-o convertido em metros quadrados.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float acre;
    
    printf("Insira uma area em acres: ");
    scanf("%f", &acre);
    
    printf("\nA area em metros quadrados e: %f\n", 4048.58 * acre);

    return 0;
}
