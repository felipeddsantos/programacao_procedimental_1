/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 45: faça um programa para converter uma letra maiúscula em letra minúscula.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;
    
    printf("Insira uma letra maiuscula: ");
    scanf("%c", &letra);
    
    printf("\nA letra inserida minuscula e: %c\n", letra + 32);
    
    return 0;
}
