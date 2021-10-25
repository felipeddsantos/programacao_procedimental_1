/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: faça um programa que receba uma palavra e a imprima de trás-para-frente.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){  

    int tam;
    char str[100];
    
    printf("Insira uma string: ");
    fgets(str, 99, stdin);
    
    tam = strlen(str);
    
    printf("\nA string invertida: ");
    
    for(int i = tam - 1; i >= 0; i--)
    
        printf("%c", str[i]);
    
    printf("\n");
        
    return 0;
}
