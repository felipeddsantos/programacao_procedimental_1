/*

Programação Procedimental I - Matrizes 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float mat[3][3], soma = 0;
    
    for(int i = 0; i < 3; i++){
    
        for(int j = 0; j < 3; j++){
    
            printf("Insira o elemento (%i, %i): ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
            
            if(i > j)
            
                soma = soma + mat[i][j];
        }
    }
    
    printf("\nSoma dos elementos abaixo da diagonal principal: %f\n", soma);
    
    return 0;
}
