/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros. Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int var1 = 0, *ptr1 = &var1;
    float var2 = 0.0, *ptr2 = &var2;
    char var3 = 'a', *ptr3 = &var3;
    
    printf("Primeira variavel antes da modificacao: %i", var1); 
    printf("\nSegunda variavel antes da modificacao: %f", var2); 
    printf("\nTerceira variavel antes da modificacao: %c", var3); 
    
    *ptr1 = 10;
    *ptr2 = 11.2;
    *ptr3 = 'z';
    
    printf("\nPrimeira variavel apos a modificacao: %i", var1); 
    printf("\nSegunda variavel apos a modificacao: %f", var2); 
    printf("\nTerceira variavel apos a modificacao: %c\n", var3);
    
    return 0;
}
