/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int N, i, *array;

    printf("Insira o tamanho do vetor: ");
    scanf("%i", &N);

    array = (int *) malloc(N * sizeof(int));

    if(array == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }
    
    for(i = 0; i < N; i++){

        printf("Insira um inteiro: ");
        scanf("%i", &array[i]);
    }

    printf("\nValores inseridos:");

    for(i = 0; i < N; i++)

        printf(" %i", array[i]);
    
    printf("\n");

    free(array);
        
    return 0;
}
