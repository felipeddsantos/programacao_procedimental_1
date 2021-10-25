/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 13: escreva uma função recursiva que devolve a soma da série de valores do intervalo [i, j], com incremento k.

*/

#include <stdio.h>
#include <stdlib.h>

int somaSerie(int i, int j, int k){

    if(i > j)
    
        return 0;
    
    return i + somaSerie(i + k, j, k);
}

int main(){

    printf("Somatorio dos valores impares no intervalo [1, 100]: %i\n", somaSerie(1, 100, 2));
    
    return 0;
}
