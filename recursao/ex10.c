/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem decrescente.

*/

#include <stdio.h>
#include <stdlib.h>

void paresDecres(int n){

    printf(" %i", n);
    
    if(n != 0)
       
        paresDecres(n - 2);
}

int main(){

    printf("Numeros naturais pares de 0 ate 10, em ordem decrescente:");

    paresDecres(10);
    
    printf("\n");
    
    return 0;
}
