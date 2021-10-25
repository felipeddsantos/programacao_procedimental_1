/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: proponha um algoritmo recursivo que calcule a multiplicação de dois inteiros.

*/

#include <stdio.h>
#include <stdlib.h>

int mult(int num1, int num2){

    if(num1 == 0 || num2 == 0)
    
        return 0;

    if(num2 == 1)
    
        return num1;
        
    return num1 + mult(num1, num2 - 1);
}

int main(){

    printf("O resultado de 86 * 54: %i\n", mult(86, 54)); 
    
    return 0;
}
