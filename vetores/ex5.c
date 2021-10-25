/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int vet[10], pares = 0;
    
    for(int i = 0; i < 10; i++){
    
        printf("Insira o elemento %i: ", i + 1);
        scanf("%i", &vet[i]);
        
        if(vet[i] % 2 == 0)
        
            pares++;
    }
    
    printf("\nQuantidade de elementos pares: %i\n", pares);
    
    return 0;
}
