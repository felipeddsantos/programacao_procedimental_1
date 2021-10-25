/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i, vet[10], maior, posicao;
    
    for(i = 0; i < 10; i++){
    
        printf("Insira o elemento %i: ", i + 1);
        scanf("%i", &vet[i]);
    }
    
    maior = vet[0];
    
    for(i = 0; i < 10; i++){
    
        if(vet[i] > maior)
        
            posicao = i;
    }
    
    printf("\nO maior elemento e sua posicao: %i %i\n", vet[posicao], posicao + 1);
    
    return 0;
}
