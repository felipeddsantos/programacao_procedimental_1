/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 14: faça um programa que leia dois números N e M e:

* Crie e leia uma matriz de inteiros N x M;
* Localize os três maiores números de uma matriz e mostre a linha e a coluna onde estão.

*/

#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int **matriz, int N, int M){

    printf("\n");

    for(int i = 0; i < N; i++){

        for(int j = 0; j < M; j++){

            printf("Insira o elemento (%i, %i): ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }
}

void tresMaiores(int **matriz, int *maiores, int N, int M){

    int m1 = matriz[0][0], m2 = matriz[0][0], m3 = matriz[0][0];

    for(int i = 0; i < N; i++){

        for(int j = 0; j < M; j++){

            if(matriz[i][j] > m1){

                m3 = m2;
                m2 = m1;
                m1 = matriz[i][j];
            }
            
            else if(matriz[i][j] > m2){

                m3 = m2;
                m2 = matriz[i][j];
            }
            
            else if(matriz[i][j] > m3)

                m3 = matriz[i][j];
        }
    }

    maiores[0] = m1;
    maiores[1] = m2;
    maiores[2] = m3;
}

int main(){
    
    int i, N, M, maiores[3], **matriz;
    
    printf("Insira a quantidade de linhas: ");
    scanf("%i", &N);

    printf("Insira a quantidade de colunas: ");
    scanf("%i", &M);

    matriz = (int **) malloc(N * sizeof(int *));

    for(i = 0; i < N; i++){

        matriz[i] = (int *) malloc(M * sizeof(int));

        if(matriz[i] == NULL){
        
            printf("\nMemória insuficiente\n");
            return 1;
        }
    }

    preencherMatriz(matriz, N, M);
    tresMaiores(matriz, maiores, N, M);

    printf("\nOs três maiores elementos da matriz são:");
    
    for(i = 0; i < 3; i++)

        printf(" %i", maiores[i]);

    for(i = 0; i < N; i++)

        free(matriz[i]);
   
    free(matriz);

    printf("\n");
        
    return 0;
}
