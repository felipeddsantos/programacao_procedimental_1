/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 23: escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um programa que leia N valores inteiros, imprima o array com k elementos por linha, e o maior elemento. O valor de k também deve ser fornecido pelo usuário.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int maior(int *array){

    int m = *array;

    for(int i = 0; i < N; i++)
    
        if(*(array + i) > m)
        
            m = *(array + i);
    
    return m;
}

int main(){  

    int array[N], k, i, inc = 1;
    
    for(i = 0; i < N; i++){
    
        printf("Insira o elemento %i: ", i + 1);
        scanf("%i", array + i);
    }
    
    i = 0;
        
    printf("\nInsira a quantidade de elementos a serem mostrados por linha: ");
    scanf("%i", &k);
    
    printf("\nArray com elementos divididos pelas linhas:\n");
    
    while(i < N){
    
        for(; i < k * inc && i < N; i++)
    
            printf("%i ", *(array + i));
        
        printf("\n");
           
        inc++;
    }
    
    printf("\nO maior elemento: %i\n", maior(array));
    
    return 0;
}
