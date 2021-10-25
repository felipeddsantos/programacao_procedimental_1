/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente.

*/

#include <stdio.h>
#include <stdlib.h>

void paresCres(int n){

    if(n != 0)
    
        paresCres(n - 2);

    printf(" %i", n);
}

int main(){

    printf("Numeros naturais pares de 0 ate 10, em ordem crescente:");

    paresCres(10);
    
    printf("\n");
    
    return 0;
}
