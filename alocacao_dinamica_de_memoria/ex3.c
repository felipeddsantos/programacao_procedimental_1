/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são ı́mpares.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int N, *array, par = 0, impar = 0;

    printf("Insira o tamanho do vetor: ");
    scanf("%i", &N);

    array = (int *) malloc(N * sizeof(int));

    if(array == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }
    
    for(int i = 0; i < N; i++){

        printf("Insira um inteiro: ");
        scanf("%i", &array[i]);

        if(array[i] % 2 == 0)

            par++;
        
        else

            impar++;
    }
    
    printf("\nExistem %i valores pares e %i valores ímpares\n", par, impar);

    free(array);
        
    return 0;
}
