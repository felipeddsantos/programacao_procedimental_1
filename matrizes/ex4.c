/*

Programação Procedimental I - Matrizes 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i, j, mat[4][4], maior, linha = 0, coluna = 0;
    
    for(i = 0; i < 4; i++){
    
        for(j = 0; j < 4; j++){
            
            printf("Insira o elemento da posicao (%i, %i) da matriz: ", i + 1, j + 1);
            scanf("%i", &mat[i][j]);
        }
    }
    
    maior = mat[0][0];
    
    printf("\nMatriz inserida:\n\n");  
    
    for(i = 0; i < 4; i++){
    
        for(j = 0; j < 4; j++){
    
            printf("%i ", mat[i][j]);
            
            if(mat[i][j] > maior){
            
                maior = mat[i][j];
                linha = i;
                coluna = j;
            }
        }
        
        printf("\n");    
    }  
    
    printf("\nO maior valor e %i e esta na posicao (%i, %i)\n", maior, linha + 1, coluna + 1);      
    
    return 0;
}
