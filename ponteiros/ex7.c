/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.

*/

#include <stdio.h>
#include <stdlib.h>

void soma(int *A, int B){

    *A = *A + B;
}

int main(){  

    int A = 2, B = 1;
    
    printf("A primeira variavel antes da chamada da funcao: %i", A);
    printf("\nA segunda variavel antes da chamada da funcao: %i", B);
    
    soma(&A, B);
    
    printf("\nA primeira variavel apos a chamada da funcao: %i", A);
    printf("\nA segunda variavel apos a chamada da funcao: %i\n", B);
    
    return 0;
}
