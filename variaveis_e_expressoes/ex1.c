/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: faça um programa que leia um numero inteiro e o imprima.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    
    printf("Insira um numero inteiro: ");
    scanf("%i", &num);
    
    printf("\nO numero inserido e: %i\n", num);

    return 0;
}
