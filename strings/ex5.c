/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: digite um nome, calcule e retorne quantas letras tem esse nome.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int tam = 0;
    char nome[30];
    
    printf("Insira um nome: ");
    fgets(nome, 29, stdin);
    
    for(; nome[tam] != '\n'; tam++);
    
    printf("\nEsse nome tem %i letras\n", tam);
        
    return 0;
}
