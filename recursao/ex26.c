/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 26: faça uma função recursiva que receba um número N e retorne o N-ésimo termo da sequência de Padovan.

*/

#include <stdio.h>
#include <stdlib.h>

int padovan(int n){

    if(n == 0 || n == 1 || n == 2)
    
        return 1;

    return padovan(n - 2) + padovan(n - 3);
}

int main(){

    printf("Decimo termo da sequencia de Padovan: %i\n", padovan(10)); 
    
    return 0;
}
