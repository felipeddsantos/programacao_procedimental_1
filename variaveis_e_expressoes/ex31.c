/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 31: leia um número inteiro e imprima o seu antecessor e o seu sucessor.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    
    printf("Insira um numero inteiro: ");
    scanf("%i", &num);
    
    printf("\nO antecessor e o sucessor desse numero sao: %i e %i\n", num - 1, num + 1);

    return 0;
}
