/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 37: faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float produto;
    
    printf("Insira o preco do produto: ");
    scanf("%f", &produto);
    
    printf("\nO valor do produto com desconto e: %f\n", 0.88 * produto);

    return 0;
}
