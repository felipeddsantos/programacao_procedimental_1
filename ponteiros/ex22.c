/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 22: crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente então a função retornará 0. Caso a função seja concluída com sucesso a mesma deve retornar o valor 1. Utilize aritmética de ponteiros para manipulação do array.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5

void mostrar(float *array){

    for(int i = 0; i < N; i++)
    
        printf(" %f", *(array + i));
}

int somar(float *array1, float *array2, float *array3){
    
    if(N != M)
    
        return 0;
    
    for(int i = 0; i < N; i++)
    
        *(array3 + i) = *(array1 + i) + *(array2 + i);
    
    return 1;
}

int main(){  

    float array1[N] = {1, 2, 3, 4, 5}, array2[M] = {1, 2, 3, 4, 5}, array3[N];
    
    if(somar(array1, array2, array3)){
    
        printf("Array resultante:");   
    
        mostrar(array3);
    }
    
    else
    
        printf("Impossivel somar arrays");   
    
    printf("\n");
    
    return 0;
}
