/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor de double, depois use a função MALLOC para reservar o espaço de memória de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10 elementos. Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleatórios (usando a função rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.

*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    
    int i, N;
    double *vetor;

    srand(time(NULL));

    while(1){

        printf("Insira a quantidade de elementos do vetor: ");
        scanf("%i", &N);

        if(N >= 10)

            break;
        
        printf("\nO vetor deve possuir no mínimo 10 elementos\n\n");
    }
    
    vetor = (double *) malloc(N * sizeof(double));

    if(vetor == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }
    
    for(i = 0; i < 10; i++)

        vetor[i] = rand() % 100;
    
    printf("\nOs 10 primeiros elementos do vetor:");

    for(i = 0; i < 10; i++)

        printf(" %f", vetor[i]);

    printf("\n");

    free(vetor);
        
    return 0;
}
