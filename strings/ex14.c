/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 14: faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII de cada caractere da palavra. Imprima a string resultante.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    char palavra[51];
    
    printf("Insira uma palavra: ");
    fgets(palavra, 50, stdin);
    
    for(int i = 0; palavra[i] != '\0'; i++)
    
        palavra[i]++;
            
    printf("\nPalavra resultante: %s\n", palavra);
    
    return 0;
}
