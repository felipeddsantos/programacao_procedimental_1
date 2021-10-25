/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 11: crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int array[5], *ptr = array;
    
    for(int i = 0; i < 5; i++){
        
        printf("Insira o elemento %i: ", i + 1);
        scanf("%i", ptr + i);
        
        if(*(ptr + i) % 2 == 0)
    
            printf("O endereco desse elemento: %p\n\n", ptr + i); 
    }
    
    printf("\n");
    
    return 0;
}
