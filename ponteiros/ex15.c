/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 15: crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para percorrer o array, apenas aritmética de ponteiros.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 5

void mostrar(int *array){

    for(int i = 0; i < N; i++)
    
        printf(" %i", *(array + i));
}

int main(){  

    int array[N] = {10, 20, 30, 40, 50};
   
    printf("Array:");
    
    mostrar(array);
      
    printf("\n");
    
    return 0;
}
