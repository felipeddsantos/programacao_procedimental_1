/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: elaborar um programa que leia dois valores inteiros A e B e em seguida faça uma função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.

*/

#include <stdio.h>
#include <stdlib.h>

int dobro(int *A, int *B){

    *A = *A * 2;
    *B = *B * 2;
    
    return *A + *B;
}

int main(){  

    int A, B;
    
    printf("Insira a primeira variavel: ");
    scanf("%i", &A);
    
    printf("Insira a segunda variavel: ");
    scanf("%i", &B);
    
    printf("\nA soma do dobro das variaveis resulta em: %i\n", dobro(&A, &B));
    
    return 0;
}
