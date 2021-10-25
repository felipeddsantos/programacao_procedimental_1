/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6 números do seu bilhete. O programa então compara quantos números o jogador acertou. Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de números corretos e guarda os números corretos nesse vetor. Finalmente, o programa exibe os números sorteados e os seus números corretos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, bilhete[6], loteria[6], *acertos, tam = 0;

    printf("Insira os números sorteados: ");

    for(i = 0; i < 6; i++)
    
        scanf("%i", &loteria[i]);

    printf("Insira os números do seu bilhete: ");

    for(i = 0; i < 6; i++){
    
        scanf("%i", &bilhete[i]);

        if(bilhete[i] == loteria[i])

            tam++;
    }

    acertos = (int *) malloc(tam * sizeof(int));

    if(acertos == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(int j = 0, i = 0; i < 6; i++){
    
        if(bilhete[i] == loteria[i]){

            acertos[j] = bilhete[i];
            j++;
        }
    }

    printf("\nNúmeros sorteados:");
    
    for(i = 0; i < 6; i++)

        printf(" %i", loteria[i]);

    printf("\nNúmeros acertados:");
    
    for(i = 0; i < tam; i++)

        printf(" %i", acertos[i]);

    printf("\n");

    free(acertos);
        
    return 0;
}
