/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i;
    float vet[10], quad[10];
    
    for(i = 0; i < 10; i++){
    
        printf("Insira o elemento %i: ", i + 1);
        scanf("%f", &vet[i]);
        
        quad[i] = vet[i] * vet[i];
    }
    
    printf("\nElementos do vetor primeiro vetor:");
    
    for(i = 0; i < 10; i++)
    
        printf(" %f", vet[i]);
    
    printf("\nElementos do segundo vetor:");
    
    for(i = 0; i < 10; i++)
    
        printf(" %f", quad[i]);
    
    printf("\n");
    
    return 0;
}
