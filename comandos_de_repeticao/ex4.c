/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    printf("Valores de 0 a 100000, incrementados de 1000 a 1000: ");

    for(int i = 0; i <= 100000; i = i + 1000)
    
        printf(" %i", i);
    
    printf("\n");
    
    return 0;
}
