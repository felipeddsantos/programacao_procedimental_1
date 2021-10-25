/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 14: crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do array. A função deverá preencher os elementos de array com esse valor. Não utilize índices para percorrer o array, apenas aritmética de ponteiros.

*/

#include <stdio.h>
#include <stdlib.h>

void mostrar(int *array){

    for(int i = 0; i < 5; i++)
    
        printf(" %i", *(array + i));
}

void trocar(int *array, int var){

    for(int i = 0; i < 5; i++)
    
        *(array + i) = var;
}

int main(){  

    int array[5] = {10, 20, 30, 40, 50}, var = 1;
   
    printf("Array antes da troca:");
    
    mostrar(array);
   
    printf("\nArray apos a troca:");
    
    trocar(array, var);
    mostrar(array);
    
    printf("\n");
    
    return 0;
}
