/*

Programação Procedimental I - Matrizes 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i, j, linha, coluna, achou = 0;
    float mat[5][5], X;
    
    for(i = 0; i < 5; i++){
    
        for(j = 0; j < 5; j++){
            
            printf("Insira o elemento da posicao (%i, %i) da matriz: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
        }
    }
    
    printf("\nInsira o valor X a ser procurado na matriz: ");
    scanf("%f", &X);
    
    for(i = 0; i < 5; i++){
    
        for(j = 0; j < 5; j++){
            
            if(mat[i][j] == X){
            
                achou = 1;
                linha = i;
                coluna = j;
            }
        }
    }
    
    if(achou)
    
        printf("\nO elemento %f esta na posicao (%i, %i)\n", X, linha + 1, coluna + 1);      
    
    else
    
        printf("\nO elemento %f nao existe na matriz\n", X);      
    
    return 0;
}
