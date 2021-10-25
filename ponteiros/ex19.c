/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 19: escreva uma função que aceita como parâmetro um array de inteiros com N valores, e determina o maior elemento do array e o número de vezes que este elemento ocorreu no array.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

void maior(int *array, int *m, int *inc){

    int i;
    
    *m = *array;
    *inc = 0;

    for(i = 0; i < N; i++)
    
        if(*(array + i) > *m)
        
            *m = *(array + i);
    
    for(i = 0; i < N; i++)
    
        if(*(array + i) == *m)
        
            (*inc)++;
}

int main(){  

    int array[N] = {10, 21, 9, 0, 21, 21, 20, 0, -1, 11}, m, inc;
    
    maior(array, &m, &inc);
    
    printf("O maior elemento do array e %i e ocorre %i vezes\n", m, inc);
    
    return 0;
}
