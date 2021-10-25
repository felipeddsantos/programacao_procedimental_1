/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 17: escreva uma função que dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária deste número. Escreva um programa que chama esta função.

*/

#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *decimal){

    *inteiro = num;
    *decimal = num - *inteiro;
}

int main(){  

    int inteiro;
    float decimal, num = 19.2;
    
    frac(num, &inteiro, &decimal);
    
    printf("Parte inteira: %i", inteiro);
    printf("\nParte fracionaria: %f\n", decimal);
    
    return 0;
}
