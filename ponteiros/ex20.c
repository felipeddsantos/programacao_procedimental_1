/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 20: implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne quantos números negativos há nesse array.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int negativos(float *array){

    int inc = 0;

    for(int i = 0; i < N; i++)
    
        if(*(array + i) < 0)
        
            inc++;
    
    return inc;
}

int main(){  

    float array[N] = {10, 21, 9, 0, 21, 21, -20, 0, -1, 11};
    
    printf("Existem %i numeros negativos no array\n", negativos(array));
    
    return 0;
}
