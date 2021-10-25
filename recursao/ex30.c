/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 30: faça uma função recursiva para calcular os números de Catalan.

*/

#include <stdio.h>
#include <stdlib.h>

float catalan(float n){

    if(n == 0)
    
        return 1;
    
    return (4 * n - 2) / (n + 1) * catalan(n - 1);
}

int main(){

    printf("Decimo termo da sequencia de Catalan: %f\n", catalan(10)); 
    
    return 0;
}
