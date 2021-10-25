/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 46: faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999) e gere outro número formado pelos dígitos invertidos do número lido.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, centenas, dezenas, unidades;
    
    printf("Insira um numero inteiro de tres digitos: ");
    scanf("%i", &num);
    
    centenas = num / 100;
    dezenas = (num - 100 * centenas) / 10;
    unidades = num - 100 * centenas - 10 * dezenas;
    
    printf("\nO numero invertido e: %i\n", 100 * unidades + 10 * dezenas + centenas);
    
    return 0;
}
