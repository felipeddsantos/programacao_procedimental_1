/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y .

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int X, Y;
    float vet[8];
    
    for(int i = 0; i < 8; i++){
    
        printf("Insira o elemento %i: ", i + 1);
        scanf("%f", &vet[i]);
    }
    
    printf("Insira uma posicao X: ");
    scanf("%i", &X);
    
    printf("Insira uma posicao Y: ");
    scanf("%i", &Y);
    
    if(X > 0 && X < 9 && Y > 0 && Y < 9)
    
        printf("\nSoma dos elementos %i e %i: %f\n", X, Y, vet[X - 1] + vet[Y - 1]);
    
    else
    
        printf("\nPosicoes invalidas\n");
    
    return 0;
}
