/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: faça um programa para armazenar em memória um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:

* Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com zero;
* Atribua para cada elemento do vetor o valor do seu ı́ndice junto a este vetor;
* Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.

*/

#include <stdio.h>
#include <stdlib.h>

void iniciarVetor(int *vetor){

    for(int i = 0; i < 1500; i++)

        vetor[i] = 0;
}

void atribuirVetor(int *vetor){

    for(int i = 0; i < 1500; i++){

        if(vetor[i] != 0){

            printf("O vetor não foi inicializado corretamente\n");
            exit(1);
        }

        vetor[i] = i;
    }
}

int main(){
    
    int *vetor;

    vetor = (int *) calloc(1500, sizeof(int));

    if(vetor == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }
    
    iniciarVetor(vetor);
    atribuirVetor(vetor);

    printf("Os 10 primeiros elementos do vetor:");

    for(int i = 0; i < 10; i++)

        printf(" %i", vetor[i]);
    
    printf("\nOs 10 últimos elementos do vetor:");

    for(int i = 1490; i < 1500; i++)

        printf(" %i", vetor[i]);

    free(vetor);

    printf("\n");
        
    return 0;
}
