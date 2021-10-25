/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 22: escreva uma função recursiva que calcule a sequência dada por:

fibg(f0, f1, 0) = f0
fibg(f0, f1, 1) = f1
fibg(f0, f1, n) = fibg(f0, f1, n - 1) + fibg(f0, f1, n - 2), se n > 1.

*/

#include <stdio.h>
#include <stdlib.h>

int fibg(int f0, int f1, int n){

    if(n == 0)
    
        return f0;
    
    if(n == 1)
    
        return f1;

    return fibg(f0, f1, n - 1) + fibg(f0, f1, n - 2);
}

int main(){

    printf("O decimo termo da serie com parametros 4 e 5 e: %i\n", fibg(4, 5, 10)); 
    
    return 0;
}
