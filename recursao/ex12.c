/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 12: crie um programa que contenha uma função recursiva para encontrar o menor elemento em um vetor.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int menor(int *vet, int i, int m){

    if(i == N)
       
        return m;
    
    if(*vet < m)
    
        return menor(vet + 1, i + 1, *vet);
    
    return menor(vet + 1, i + 1, m);
}

int main(){

    int vet[N] = {4, 32, 1, 0, -2, -4, 3, 3, 1, -10};
    
    printf("Menor elemento do vetor: %i\n", menor(vet, 0, vet[0]));
    
    return 0;
}
