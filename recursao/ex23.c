/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 23: faça uma função recursiva que permita somar os elementos de um vetor de inteiros.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int somaVet(int *vet, int i){

    if(i == N - 1)
    
        return *vet;

    return *vet + somaVet(vet + 1, i + 1);
}

int main(){

    int vet[N] = {1, 2, 3, -7, 21, 56, -111, 12, 100, 0};

    printf("Soma dos elementos do vetor: %i\n", somaVet(vet, 0)); 
    
    return 0;
}
