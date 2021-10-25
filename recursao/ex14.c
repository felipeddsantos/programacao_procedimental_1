/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 14: escreva uma função recursiva que imprime na tela a série de valores do intervalo [i, j], com incremento k.

*/

#include <stdio.h>
#include <stdlib.h>

void imprimeSerie(int i, int j, int k){

    printf(" %i", i); 

    if(i + k <= j)
    
        imprimeSerie(i + k, j, k);
}

int main(){

    printf("Série dos valores impares de [1, 50]:"); 
    
    imprimeSerie(1, 50, 2);
    
    printf("\n");
    
    return 0;
}
