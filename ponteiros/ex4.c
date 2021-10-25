/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B conterá o valor de A.

*/

#include <stdio.h>
#include <stdlib.h>

void troca(int *A, int *B){

    int aux = *A;    
    
    *A = *B;
    *B = aux;
}

int main(){  

    int A, B;
    
    printf("Insira a primeira variavel: ");
    scanf("%i", &A);
    
    printf("Insira a segunda variavel: ");
    scanf("%i", &B);
    
    troca(&A, &B);
    
    printf("\nO novo valor da primeira variavel: %i", A);
    printf("\nO novo valor da segunda variavel: %i\n", B);
    
    return 0;
}
