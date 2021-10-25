/*

Programação Procedimental I - Matrizes 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i, j, mat[5][5];
    
    printf("Matriz resultante:\n\n");  
    
    for(i = 0; i < 5; i++){
    
        for(j = 0; j < 5; j++){
        
            if(i == j)
            
                mat[i][j] = 1;
            
            else
            
                mat[i][j] = 0;
                            
            printf("%i ", mat[i][j]);
        }
        
        printf("\n");    
    }   
    
    return 0;
}
