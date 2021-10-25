/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci.

*/

#include <stdio.h>
#include <stdlib.h>

int fib(int n){

    if(n == 0)
    
        return 0;
        
    if(n == 1)
    
        return 1;
    
    return fib(n - 1) + fib(n - 2);
}

int main(){

    printf("Decimo termo da sequencia de Fibonacci: %i\n", fib(10));
    
    return 0;
}
