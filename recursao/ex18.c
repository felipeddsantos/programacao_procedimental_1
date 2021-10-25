/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 18: faça uma função recursiva que receba um número inteiro positivo N e retorne o superfatorial desse número.

*/

#include <stdio.h>
#include <stdlib.h>

int fat(int n){

    if(n == 0)
    
        return 1;
        
    return n * fat(n - 1);
}

int superFat(int n){

    if(n == 0)
    
        return 1;
        
    return fat(n) * superFat(n - 1);
}

int main(){

    printf("O superfatorial de 4 e: %i\n", superFat(4)); 
     
    return 0;
}
