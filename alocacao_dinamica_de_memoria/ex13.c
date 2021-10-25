/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 13: escreva um programa que aloque dinamicamente uma matriz de inteiros de dimensões definidas pelo usuário e a leia. Em seguida, implemente uma função que receba um valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso não esteja na matriz.

*/

#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int **matriz, int N, int M){

    for(int i = 0; i < N; i++){

        for(int j = 0; j < M; j++){

            printf("Insira o elemento (%i, %i): ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }
}

int pertenceMatriz(int **matriz, int N, int M, int valor){

    for(int i = 0; i < N; i++)

        for(int j = 0; j < M; j++)

            if(matriz[i][j] == valor)

                return 1;
    return 0;
}

int main(){
    
    int i, N, M, valor, **matriz;
    
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

    printf("\nInsira o valor a ser buscado: ");
    scanf("%i", &valor);

    if(pertenceMatriz(matriz, N, M, valor))

        printf("\nO elemento pertence a matriz\n");

    else

        printf("\nO elemento não pertence a matriz\n");

    for(i = 0; i < N; i++)

        free(matriz[i]);
   
    free(matriz);
        
    return 0;
}
