/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: faça um programa que leia uma string e a imprima.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    char str[100];
    
    printf("Insira uma string: ");
    fgets(str, 99, stdin);
    
    printf("\nA string inserida e: %s\n", str);
        
    return 0;
}
