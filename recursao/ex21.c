/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 21: escreva uma função recursiva que calcule a sequência dada por:

f(1) = 1
f(2) = 2
f(n) = 2 * f(n - 1) + 3 * f(n - 2)

*/

#include <stdio.h>
#include <stdlib.h>

int f(int n){

    if(n == 1)
    
        return 1;
    
    if(n == 2)
    
        return 2;
    
    return 2 * f(n - 1) + 3 * f(n - 2);
}

int main(){

    printf("O decimo termo da serie: %i\n", f(10)); 
    
    return 0;
}
