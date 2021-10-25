/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: crie um programa que calcula o comprimento de uma string (não use a função strlen).

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int tam = 0;
    char str[] = "Ola mundo";
    
    for(; str[tam] != '\0'; tam++);
    
    printf("A string tem comprimento: %i\n", tam);
        
    return 0;
}
