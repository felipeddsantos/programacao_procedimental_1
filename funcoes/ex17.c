/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 17: Faça um algoritmo que receba um número inteiro positivo n e calcule o seu fatorial.

*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){

    int fat = 1;
    
    for(int i = n; i > 1; i--)
    
        fat = i * fat;
    
    return fat;
}

int main(){

    printf("O fatorial de 7 e: %i\n", fatorial(7)); 
     
    return 0;
}
