/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 24: faça uma função recursiva que receba um número N e retorne o N-ésimo termo da sequência de tribonacci.

*/

#include <stdio.h>
#include <stdlib.h>

int trib(int n){

    if(n == 0 || n == 1)
    
        return 0;
    
    if(n == 2)
    
        return 1;

    return trib(n - 1) + trib(n - 2) + trib(n - 3);
}

int main(){

    printf("Decimo termo da sequencia de Tribonacci: %i\n", trib(10)); 
    
    return 0;
}
