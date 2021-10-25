/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: escreva uma função recursiva que calcule a soma dos primeiros n cubos.

*/

#include <stdio.h>
#include <stdlib.h>

int cubos(int n){

    if(n == 1)
    
        return 1;

    return n * n * n + cubos(n - 1);
}

int main(){

    printf("Somatorio dos primeiros 10 cubos: %i\n", cubos(10));
    
    return 0;
}
