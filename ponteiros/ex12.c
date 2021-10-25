/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 12: faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.

*/

#include <stdio.h>
#include <stdlib.h>

void troca(int *var1, int *var2){

    int aux = *var1;
    
    *var1 = *var2;
    *var2 = aux;
}

int ord(int *var1, int *var2, int *var3){

    int A = *var1, B = *var2, C = *var3;

    if(A == B && A == C)
    
        return 1;

    if(A > B)
    
        troca(var1, var2);

    if(A > C)
    
        troca(var1, var3);
    
    if(B > C)
        
        troca(var2, var3);
    
    return 0;
}

int main(){  

    int var1, var2, var3;
    
    printf("Insira o valor da primeira variavel: ");
    scanf("%i", &var1);
    
    printf("Insira o valor da segunda variavel: ");
    scanf("%i", &var2);
    
    printf("Insira o valor da terceira variavel: ");
    scanf("%i", &var3);
    
    ord(&var1, &var2, &var3);
      
    printf("\nValor da primeira variavel: %i", var1);
    printf("\nValor da segunda variavel: %i", var2);
    printf("\nValor da terceira variavel: %i\n", var3);
    
    return 0;
}
