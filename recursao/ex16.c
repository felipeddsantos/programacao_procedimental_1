/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 16: faça uma função recursiva que receba um número inteiro positivo impar N e retorne o fatorial duplo desse número.

*/

#include <stdio.h>
#include <stdlib.h>

int fatDuplo(int n){

    if(n == 1)
    
        return 1;
    
    return n * fatDuplo(n - 2);
}

int main(){

    printf("O fatorial duplo de 13 e: %i\n", fatDuplo(13)); 
    
    return 0;
}
