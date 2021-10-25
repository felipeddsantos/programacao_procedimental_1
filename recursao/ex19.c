/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 19: faça uma função recursiva que receba um número inteiro positivo N e retorne o hiperfatorial desse número.

*/

#include <stdio.h>
#include <stdlib.h>

int pot(int bas, int exp){

    if(exp == 0)
    
        return 1;
    
    return bas * pot(bas, exp - 1);
}

int hiperFat(int n){

    if(n == 1)
    
        return 1;
        
    return pot(n, n) * hiperFat(n - 1);
}

int main(){

    printf("O hiperfatorial de 4 e: %i\n", hiperFat(4)); 
    
    return 0;
}
