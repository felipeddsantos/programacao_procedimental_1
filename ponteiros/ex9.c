/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, *ptr = &mat[0][0];

    printf("O endereco dos 9 elementos da matriz:");
    
    for(int i = 0; i < 9; i++)
    
        printf(" %p", ptr + i); 
        
    printf("\n"); 
    
    return 0;
}
