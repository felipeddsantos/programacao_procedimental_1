/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i;
    float vet[10], maior, menor;
    
    for(i = 0; i < 10; i++){
    
        printf("Insira o elemento %i: ", i + 1);
        scanf("%f", &vet[i]);
    }
    
    maior = menor = vet[0];
    
    for(i = 0; i < 10; i++){
    
        if(vet[i] > maior)
        
            maior = vet[i];
        
        if(vet[i] < menor)
        
            menor = vet[i];
    }
    
    printf("\nO maior e o menor elementos: %f %f\n", maior, menor);
    
    return 0;
}
