/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *ptr = array;

    printf("O endereco dos 10 elementos do array sao:");
    
    for(int i = 0; i < 10; i++)
        
        printf(" %p", ptr + i);
        
    printf("\n"); 
    
    return 0;
}
