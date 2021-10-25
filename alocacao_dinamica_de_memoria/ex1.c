/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: crie um programa que:

* Aloque dinamicamente um array de 5 números inteiros;
* Peça para o usuário digitar os 5 números no espaço alocado;
* Mostre na tela os 5 números;
* Libere a memória alocada.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, *array = (int *) malloc(5 * sizeof(int));

    if(array == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(i = 0; i < 5; i++){

        printf("Insira um inteiro: ");
        scanf("%i", &array[i]);
    }

    printf("\nValores inseridos:");

    for(i = 0; i < 5; i++)

        printf(" %i", array[i]);
    
    printf("\n");

    free(array);
        
    return 0;
}
