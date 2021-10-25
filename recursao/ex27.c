/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 27: implemente a função h definida recursivamente por:

h(m, n) = m + 1, se n = 1;
h(m, n) = n + 1, se m = 1;
h(m, n) = h(m, n - 1) + h(m - 1, n), se m > 1, n > 1.

*/

#include <stdio.h>
#include <stdlib.h>

int h(int m, int n){

    if(n == 1)
    
        return m + 1;
    
    if(m == 1)
    
        return n + 1;

    return h(m, n - 1) + h(m - 1, n);
}

int main(){

    printf("Resultado da funcao h com parametros 5 e 6: %i\n", h(5, 6)); 
    
    return 0;
}
