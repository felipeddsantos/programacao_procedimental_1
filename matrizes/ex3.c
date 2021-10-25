/*

Programação Procedimental I - Matrizes 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i, j, mat[4][4];
    
    printf("Matriz resultante:\n\n");  
    
    for(i = 0; i < 4; i++){
    
        for(j = 0; j < 4; j++){
            
            mat[i][j] = i * j;
            
            printf("%i ", mat[i][j]);
        }
        
        printf("\n");    
    }
    
    return 0;
}
