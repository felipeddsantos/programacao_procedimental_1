/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 17: faça uma função recursiva que receba um número inteiro positivo N e retorne o fatorial quádruplo desse número.

*/

#include <stdio.h>
#include <stdlib.h>

int fatQuadruplo(int n){

    if(n == 1)
    
        return 2;
    
    return (4 * n - 2) * fatQuadruplo(n - 1);
}

int main(){

    printf("O fatorial quadruplo de 4 e: %i\n", fatQuadruplo(4)); 
     
    return 0;
}
