/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int array[5], *ptr = array;
    
    for(int i = 0; i < 5; i++){
        
        printf("Insira o elemento %i: ", i + 1);
        scanf("%i", ptr + i);
        
        printf("O dobro do valor inserido: %i\n", *(ptr + i) * 2);
    }
    
    return 0;
}
