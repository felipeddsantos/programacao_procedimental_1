/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: faça um programa que leia uma quantidade qualquer de números armazenando-os na memória e pare a leitura quando o usuário entrar um número negativo. Em seguida, imprima o vetor lido. Use a função REALLOC.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int valor, i = 0, *vetor = NULL;

    while(1){

        printf("Insira um valor: ");
        scanf("%i", &valor);

        if(valor < 0)

            break;
        
        vetor = realloc(vetor, (i + 1) * sizeof(int));

        if(vetor == NULL){
        
            printf("\nMemória insuficiente\n");
            return 1;
        }
        
        vetor[i] = valor;
        i++;
    }
    
    printf("\nOs valores inseridos no vetor:");

    for(int j = 0; j < i; j++)

        printf(" %i", vetor[j]);

    printf("\n");

    free(vetor);
        
    return 0;
}
