/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 32: leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    
    printf("Insira um numero inteiro: ");
    scanf("%i", &num);
    
    printf("\nA soma do sucessor do triplo com o antecessor do dobro do numero e: %i\n", 5 * num);

    return 0;
}
