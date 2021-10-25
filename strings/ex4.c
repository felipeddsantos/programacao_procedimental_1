/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: faça um programa que leia um nome e imprima as 4 primeiras letras do nome.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    char nome[30];
    
    printf("Insira um nome: ");
    fgets(nome, 29, stdin);
    
    printf("\nAs quatro primeiras letras do nome: ");
    
    for(int i = 0; i < 4; i++)
    
        printf("%c", nome[i]);
    
    printf("\n");
        
    return 0;
}
