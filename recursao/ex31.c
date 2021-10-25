/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 31: faça uma função recursiva que receba um número N e retorne a N-ésima palavra de Fibonacci.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *palavraFib(int n, char *fib){

    if(n == 0)
    
        return strcat(fib, "b");        
    
    if(n == 1)
    
        return strcat(fib, "a");        
       
    palavraFib(n - 1, fib);
    palavraFib(n - 2, fib);
}

int main(){  

    char fib[100];
    
    printf("Sexta palavra de Fibonacci: %s\n", palavraFib(6, fib)); 
    
    return 0;
}
