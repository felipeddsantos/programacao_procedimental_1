/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int vet[6], i;
    
    for(i = 0; i < 6; i++){
    
        printf("Insira o elemento %i: ", i + 1);
        scanf("%i", &vet[i]);
    }
    
    printf("\nElementos do vetor:");
    
    for(i = 0; i < 6; i++)
    
        printf(" %i", vet[i]);
    
    printf("\n");
    
    return 0;
}
