/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: faça um programa que leia um número N e:

* Crie dinamicamente e leia um vetor de inteiro de N posições;
* Leia um número inteiro X e conte e mostre os múltiplos desse número que existem no vetor.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, N, X, *array;

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

    printf("Insira um número X: ");
    scanf("%i", &X);

    printf("\nMúltiplos de %i presentes no vetor:", X);

    for(i = 0; i < N; i++)

        if(array[i] % X == 0)

            printf(" %i", array[i]);
        
    printf("\n");

    free(array);
        
    return 0;
}
