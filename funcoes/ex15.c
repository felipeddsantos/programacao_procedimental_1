/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 15: faça um algoritmo que receba um número inteiro positivo n e calcule o somatório de 1 até n.

*/

#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){

    int s = 0;
    
    for(int i = 1; i <= n; i++)
    
        s = s + i;
    
    return s;
}

int main(){

    printf("Valor do somatorio de 1 ate 100: %i\n", somatorio(100)); 
    
    return 0;
}
