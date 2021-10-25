/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i = 2;
    
    printf("Os 5 primeiros multiplos de 3:");        
    
    while(i <= 6){
    
        printf(" %i", 3 * i);
        
        i++;
    }
        
    printf("\n");  
    
    return 0;
}
