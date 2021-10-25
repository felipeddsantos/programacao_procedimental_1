/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 29: faça uma função recursiva para calcular os números de Pell.

*/

#include <stdio.h>
#include <stdlib.h>

int pell(int n){

    if(n == 0)
    
        return 0;
    
    if(n == 1)
    
        return 1;

    return 2 * pell(n - 1) + pell(n - 2);
}

int main(){

    printf("Decimo termo da sequencia de Pell: %i\n", pell(10)); 
    
    return 0;
}
