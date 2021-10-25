/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 11: escreva uma função recursiva que exibe todos os elementos em um array de inteiros, separados por espaço.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

void imprimeArray(int *vet, int i){

    printf(" %i", *vet);
    
    if(i < N - 1)
       
        imprimeArray(vet + 1, i + 1);
}

int main(){

    int vet[N] = {4, 32, 1, 0, -2, -4, 3, 3, 1, 10};

    printf("Array separado por espaco:");

    imprimeArray(vet, 0);
    
    printf("\n");
    
    return 0;
}
