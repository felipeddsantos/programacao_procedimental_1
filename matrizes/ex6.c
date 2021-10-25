/*

Programação Procedimental I - Matrizes 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int mat1[4][4], mat2[4][4], mat3[4][4], i, j;
    
    for(i = 0; i < 4; i++){
    
        for(j = 0; j < 4; j++){
            
            printf("Insira o elemento da posicao (%i, %i) da primeira matriz: ", i + 1, j + 1);
            scanf("%i", &mat1[i][j]);
            
            printf("Insira o elemento da posicao (%i, %i) da segunda matriz: ", i + 1, j + 1);
            scanf("%i", &mat2[i][j]);
            
            if(mat1[i][j] > mat2[i][j])
            
                mat3[i][j] = mat1[i][j];
            
            else
            
                mat3[i][j] = mat2[i][j];
        }
    }
    
    printf("\nMatriz resultante:\n\n");  
    
    for(i = 0; i < 4; i++){
    
        for(j = 0; j < 4; j++)
    
            printf("%i ", mat3[i][j]);
        
        printf("\n");    
    }  
    
    return 0;
}
