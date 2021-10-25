/*

Programação Procedimental I - Matrizes 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:

* A[i][j] = 2*i + 7*j − 2 se i < j;
* A[i][j] = 3*i^2 − 1 se i = j;
* A[i][j] = 4*i^3 − 5*j^2 + 1 se i > j.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int mat[10][10];
    
    printf("Matriz preenchida:\n\n");
    
    for(int i = 0; i < 10; i++){
    
        for(int j = 0; j < 10; j++){
    
            if(i == j)
            
                mat[i][j] = 3 * i * i - 1;
                
            if(i > j)
            
                mat[i][j] = 4 * i * i * i - 5 * j * j;
                
            else
            
                mat[i][j] = 2 * i + 7 * j - 2;
            
            printf("%i ", mat[i][j]);
        }
        
        printf("\n");    
    }
    
    return 0;
}
