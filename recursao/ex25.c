/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 25: faça uma função recursiva que receba um número N e retorne o N-ésimo termo da sequência de tetranacci.

*/

#include <stdio.h>
#include <stdlib.h>

int tetra(int n){

    if(n == 0 || n == 1 || n == 2)
    
        return 0;
    
    if(n == 3)
    
        return 1;

    return tetra(n - 1) + tetra(n - 2) + tetra(n - 3) + tetra(n - 4);
}

int main(){

    printf("Decimo segundo termo da sequência de Tetranacci: %i\n", tetra(12)); 
    
    return 0;
}
