/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: faça um programa que leia um numero real e o imprima.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num;
    
    printf("Insira um numero real: ");
    scanf("%f", &num);
    
    printf("\nO numero inserido e: %f\n", num);

    return 0;
}
