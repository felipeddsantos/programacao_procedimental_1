/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:

* Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
* Armazene em uma variável inteira a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma;
* Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
* Mostre na tela cada valor do vetor A, um em cada linha.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int A[] = {1, 0, 5, -2, -5, 7}, soma = A[0] + A[1] + A[5];
    
    printf("Resultado da soma dos elementos A[0], A[1] e A[5]: %i\n", soma);
    
    A[3] = 100; 
    
    printf("\nElementos do vetor:\n");
    
    for(int i = 0; i < 6; i++)
    
        printf("%i\n", A[i]);
        
    return 0;
}
