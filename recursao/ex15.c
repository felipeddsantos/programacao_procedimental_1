/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 15: faça uma função recursiva que calcule o valor da série (1 + n * n) / n para um valor n > 0 a ser fornecido como parâmetro para a mesma.

*/

#include <stdio.h>
#include <stdlib.h>

float serie(float n){

    if(n == 1)
    
        return 2;
    
    return (1 + n * n) / n + serie(n - 1);
}

int main(){

    printf("Valor do somatório para n = 50: %f\n", serie(50)); 
    
    return 0;
}
