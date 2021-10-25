/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

*/

#include <stdio.h>
#include <stdlib.h>

void cres(int n){

    if(n != 0)
    
        cres(n - 1);

    printf(" %i", n);
}

int main(){

    printf("Numeros naturais de 0 ate 10, em ordem crescente:");

    cres(10);
    
    printf("\n");
    
    return 0;
}
