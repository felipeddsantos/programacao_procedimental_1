/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 21: escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array. Agora, some mais um a cada posição do array usando o ponteiro.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int array[5] = {11, 12, 13, 14, 15}, *ptr = array;
    
    printf("Array apos a modificacao:");
    
    for(int i = 0; i < 5; i++){
    
        (*(ptr + i))++;
        
        printf(" %i", *(ptr + i));
    }
    
    printf("\n");
    
    return 0;
}
