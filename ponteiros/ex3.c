/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int var1, var2;
    
    printf("Insira a primeira variavel: ");
    scanf("%i", &var1);
    
    printf("Insira a segunda variavel: ");
    scanf("%i", &var2);
    
    if(&var1 > &var2)
    
        printf("\nA variavel de maior endereco contem o seguinte conteudo: %i\n", var1);
    
    else
    
        printf("\nA variavel de maior endereco contem o seguinte conteudo: %i\n", var2);
        
    return 0;
}
