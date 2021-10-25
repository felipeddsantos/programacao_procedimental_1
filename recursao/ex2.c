/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.

*/

#include <stdio.h>
#include <stdlib.h>

int fat(int n){

    if(n == 0)
    
        return 1;

    return n * fat(n - 1);
}

int main(){

    printf("Fatorial de 7: %i\n", fat(7));
    
    return 0;
}
