/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 15: escreva um programa para fazer a alocação dinâmica dos blocos de dados conforme solicitado abaixo:

* Vetor de 1024 Bytes (1 Kbyte);
* Matriz de inteiros de dimensão 10 x 10;
* Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código do produto (inteiro) e preço (real);
* Texto de até 100 linhas com até 80 caracteres em cada linha.

*/

#include <stdio.h>
#include <stdlib.h>

struct Registro{

    int codigo;
    float preco;
    char nome[31];
};

int main(){

    int i, **matriz;
    char *vetor, **texto;
    struct Registro *registros;

    registros = (struct Registro *) malloc(50 * sizeof(struct Registro));

    if(registros == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    vetor = (char *) malloc(1024 * sizeof(char));

    if(vetor == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    matriz = (int **) malloc(10 * sizeof(int *));

    for(i = 0; i < 10; i++){

        matriz[i] = (int *) malloc(10 * sizeof(int));

        if(matriz[i] == NULL){
        
            printf("\nMemória insuficiente\n");
            return 1;
        }
    }

    texto = (char **) malloc(100 * sizeof(char *));

    for(i = 0; i < 100; i++){

        texto[i] = (char *) malloc(80 * sizeof(char));

        if(texto[i] == NULL){
        
            printf("\nMemória insuficiente\n");
            return 1;
        }
    }

    printf("Tudo alocado\n");

    free(registros);
    free(vetor);
    
    for(i = 0; i < 10; i++)

        free(matriz[i]);
   
    free(matriz);

    for(i = 0; i < 100; i++)

        free(texto[i]);
   
    free(texto);
        
    return 0;
}
