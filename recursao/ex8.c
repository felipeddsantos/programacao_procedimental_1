/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

*/

#include <stdio.h>
#include <stdlib.h>

void decres(int n){

    printf(" %i", n);

    if(n != 0)
    
        decres(n - 1);
}

int main(){

    printf("Numeros naturais de 0 ate 10, em ordem decrescente:");

    decres(10);
    
    printf("\n");
    
    return 0;
}
