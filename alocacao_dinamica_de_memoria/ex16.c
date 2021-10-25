/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 16: faça um programa que leia números do teclado e os armazene em um vetor alocado dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, sendo que caso ele deseje encerrar a entrada de dados, ele ira digitar o número ZERO. Os dados devem ser armazenados na memória deste modo:

* Inicie com um vetor de tamanho 10 alocado dinamicamente;
* Após, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do vetor anterior adicionado espaço para mais 10 valores (tamanho N+10, onde N inicia com 10);
* Copie os valores já digitados da área inicial para esta área maior e libere a memória da área inicial;
* Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor alocado cada vez que o mesmo estiver cheio. Assim o vetor irá ser "expandido" de 10 em 10 valores.

Ao final, exiba o vetor lido. Não use a função REALLOC.

*/

#include <stdio.h>
#include <stdlib.h>

void copiarVetor(int *vetor, int *vetor_novo, int N){

    for(int i = 0; i < N; i++)

        vetor_novo[i] = vetor[i];
}

int main(){
    
    int valor, *vetor, *vetor_novo, i = 0, N = 10;

    vetor = (int *) malloc(N * sizeof(int));

    if(vetor == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    while(1){

        printf("Insira um número inteiro (zero para finalizar): ");
        scanf("%i", &valor);

        if(valor == 0)

            break;
        
        if(i >= N){

            vetor_novo = (int *) malloc((N + 10) * sizeof(int));

            copiarVetor(vetor, vetor_novo, N);
            free(vetor);
           
            vetor = vetor_novo;
            N += 10;
        }
        
        vetor[i] = valor;
        i++;
    }

    printf("\nValores inseridos:");

    for(int j = 0; j < i; j++)

        printf(" %i", vetor[j]);

    free(vetor);
    
    return 0;
}
