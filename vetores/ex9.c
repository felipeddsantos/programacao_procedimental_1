/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int negativos;
    float vet[10], soma = 0;
    
    for(int i = 0; i < 10; i++){
    
        printf("Insira o elemento %i: ", i + 1);
        scanf("%f", &vet[i]);
        
        if(vet[i] < 0)
        
            negativos++;
        
        else
        
            soma = soma + vet[i];
    }
    
    printf("\nQuantidade de valores negativos: %i", negativos);
    
    printf("\nSoma dos valores positivos: %f\n", soma);
    
    return 0;
}
