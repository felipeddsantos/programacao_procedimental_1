/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.

*/

#include <stdio.h>
#include <stdlib.h>

int soma(int n){

    if(n == 1)
    
        return 1;

    return n + soma(n - 1);
}

int main(){

    printf("Somatorio dos numeros inteiros de 1 a 100: %i\n", soma(100));
    
    return 0;
}
