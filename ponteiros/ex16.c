/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 16: considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quádruplo.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int A, *B = &A, **C = &B, ***D = &C;
    
    printf("Insira um valor: ");
    scanf("%i", &A);
    
    printf("\nO dobro do numero inserido: %i", *B * 2);
    printf("\nO triplo do numero inserido: %i", **C * 3);
    printf("\nO quadruplo do numero inserido: %i\n", ***D * 4);
    
    return 0;
}
