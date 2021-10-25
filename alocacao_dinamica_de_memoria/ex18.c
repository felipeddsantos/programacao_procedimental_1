/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 18: faça um programa que leia quatro números a, b, c e d, que serão as dimensões de duas matrizes:

* Crie e leia uma matriz, dadas as dimensões dela;
* Crie e construa uma matriz que seja o produto de duas matrizes. Imprima as duas matrizes e o produto entre elas, se existir.

*/

#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **matriz, int a, int b){

    for(int i = 0; i < a; i++)

        for(int j = 0; j < b; j++){

            printf("Insira o elemento (%i, %i): ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
}

void imprimirMatriz(int **matriz, int a, int b){

    for(int i = 0; i < a; i++){

        printf("\n");

        for(int j = 0; j < b; j++)

            printf("%i ", matriz[i][j]);
    }
}

void liberarMatriz(int **matriz, int a){

    for(int i = 0; i < a; i++)

        free(matriz[i]);
    
    free(matriz);
}

void multiplicarMatrizes(int **matriz1, int **matriz2, int **matriz3, int a, int b, int d){

    int aux = 0;

    for(int i = 0; i < a; i++){

        for(int j = 0; j < d; j++){

            for(int k = 0; k < b; k++)

                aux += matriz1[i][k] * matriz2[k][j];
            
            matriz3[i][j] = aux;
            aux = 0;
        }
    }
}

int main(){

    int a, b, c, d, i, **matriz1, **matriz2, **matriz3;

    printf("Insira a quantidade de linhas da primeira matriz: ");
    scanf("%i", &a);

    printf("Insira a quantidade de colunas da primeira matriz: ");
    scanf("%i", &b);

    matriz1 = (int **) malloc(a * sizeof(int *));

    if(matriz1 == NULL){

        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(i = 0; i < a; i++){

        matriz1[i] = (int *) malloc(b * sizeof(int));

        if(matriz1[i] == NULL){

            printf("\nMemória insuficiente\n");
            return 1;
        }
    }

    lerMatriz(matriz1, a, b);

    printf("\nInsira a quantidade de linhas da segunda matriz: ");
    scanf("%i", &c);

    printf("Insira a quantidade de colunas da segunda matriz: ");
    scanf("%i", &d);

    matriz2 = (int **) malloc(c * sizeof(int *));

    if(matriz2 == NULL){

        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(i = 0; i < c; i++){

        matriz2[i] = (int *) malloc(d * sizeof(int));

        if(matriz2[i] == NULL){

            printf("\nMemória insuficiente\n");
            return 1;
        }
    }

    lerMatriz(matriz2, c, d);

    printf("\nPrimeira matriz:");
    imprimirMatriz(matriz1, a, b);

    printf("\n\nSegunda matriz:");
    imprimirMatriz(matriz2, c, d);

    if(b == c){

        matriz3 = (int **) malloc(a * sizeof(int *));

        if(matriz3 == NULL){

            printf("\nMemória insuficiente\n");
            return 1;
        }

        for(i = 0; i < a; i++){

            matriz3[i] = (int *) malloc(d * sizeof(int));

            if(matriz3[i] == NULL){

                printf("\nMemória insuficiente\n");
                return 1;
            }
        }

        multiplicarMatrizes(matriz1, matriz2, matriz3, a, b, d);
        
        printf("\n\nProduto entre as matrizes:");
        imprimirMatriz(matriz3, a, d);

        liberarMatriz(matriz3, a);
    }

    else

        printf("\n\nAs matrizes não admitem produto\n");
    
    liberarMatriz(matriz1, a);
    liberarMatriz(matriz2, c);

    return 0;
}
