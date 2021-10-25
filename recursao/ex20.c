/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 20: faça uma função recursiva que receba um número inteiro positivo N e retorne o fatorial exponencial desse número.

*/

#include <stdio.h>
#include <stdlib.h>

int pot(int bas, int exp){

    if(exp == 0)
    
        return 1;
    
    return bas * pot(bas, exp - 1);
}

int fatExp(int n){

    if(n == 1)
    
        return 1;

    return pot(n, fatExp(n - 1));
}

int main(){

    printf("O fatorial exponencial de 4 e: %i\n", fatExp(4)); 
    
    return 0;
}
