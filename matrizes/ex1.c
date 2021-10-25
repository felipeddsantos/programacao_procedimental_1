/*

Programação Procedimental I - Matrizes 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int inc = 0;
    float mat[4][4];
    
    for(int i = 0; i < 4; i++){
    
        for(int j = 0; j < 4; j++){
        
            printf("Insira o elemento da posicao (%i, %i) da matriz: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
            
            if(mat[i][j] > 10)
            
                inc++;
        }
    }   
        
    printf("\nEssa matriz possui %i elementos maiores que 10\n", inc);  
    
    return 0;
}
