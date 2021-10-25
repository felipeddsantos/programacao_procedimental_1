/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 19: faça um programa que:

* Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e as armazene em um vetor de estruturas (N é informado pelo usuário);
* Crie uma matriz de distâncias entre cidades de tamanho N x N;
* Calcule as distância entre cada duas cidades e armazene na matriz;
* Exiba na tela a matriz de distâncias obtida;
* Quando o usuário digitar o número de duas cidades o programa deverá retornar a distância entre elas.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Cidade cidade;

struct Cidade{

    float X, Y;
    char nome[31];
};

void calcularDistancias(cidade *cidades, float **distancias, int N){

    for(int i = 0; i < N; i++)

        for(int j = 0; j < N; j++)

            distancias[i][j] = sqrt(pow((cidades[i].X - cidades[j].X), 2) + pow((cidades[i].Y - cidades[j].Y), 2));
}

void imprimirDistancias(float **distancias, int N){

    printf("\nMatriz de distâncias:\n");

    for(int i = 0; i < N; i++){

        printf("\n");

        for(int j = 0; j < N; j++)

            printf("%f ", distancias[i][j]);
    }
}

int procurarCidade(cidade *cidades, char *nome, int N){

    for(int i = 0; i < N; i++)

        if(!strcmp(cidades[i].nome, nome))

            return i;

    return -1;
}

int main(){
    
    int i, N, linha, coluna;
    float **distancias;
    char nome[31];
    cidade *cidades;

    printf("Insira a quantidade de cidades: ");
    scanf("%i", &N);

    cidades = (cidade *) malloc(N * sizeof(cidade));

    if(cidades == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(i = 0; i < N; i++){

        setbuf(stdin, NULL);

        printf("\nInsira o nome da cidade %i: ", i + 1);
        fgets(cidades[i].nome, 30, stdin);

        printf("Insira a coordenada X da cidade %i: ", i + 1);
        scanf("%f", &cidades[i].X);

        printf("Insira a coordenada Y da cidade %i: ", i + 1);
        scanf("%f", &cidades[i].Y);
    }

    distancias = (float **) malloc(N * sizeof(float *));

    if(distancias == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(i = 0; i < N; i++){

        distancias[i] = (float *) malloc(N * sizeof(float));

        if(distancias[i] == NULL){
        
            printf("\nMemória insuficiente\n");
            return 1;
        }
    }

    calcularDistancias(cidades, distancias, N);
    imprimirDistancias(distancias, N);

    setbuf(stdin, NULL);

    while(1){

        printf("\n\nInsira o nome da primeira cidade: ");
        fgets(nome, 30, stdin);

        linha = procurarCidade(cidades, nome, N);

        printf("Insira o nome da segunda cidade: ");
        fgets(nome, 30, stdin);

        coluna = procurarCidade(cidades, nome, N);

        if(linha < 0 || coluna < 0)

            printf("\nCidades inexistentes");
        
        else

            break;
    }

    printf("\nDistância entre as duas cidades: %f", distancias[linha][coluna]);

    for(i = 0; i < N; i++)

        free(distancias[i]);
                
    free(distancias);
    free(cidades);
        
    return 0;
}
