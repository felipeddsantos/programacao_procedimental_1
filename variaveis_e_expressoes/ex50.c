/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 50: implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano, idade;
    
    printf("Insira o ano atual: ");
    scanf("%i", &ano);
    
    printf("Insira a idade: ");
    scanf("%i", &idade);
    
    printf("\nO ano de nascimento e: %i\n", ano - idade);
    
    return 0;
}
