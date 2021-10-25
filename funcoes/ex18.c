/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 18: escreva uma função para determinar a quantidade de números primos abaixo N.

*/

#include <stdio.h>
#include <stdlib.h>

int primo(int num){

    if(num == 1)
    
        return 0;
        
    if(num == 2)
    
        return 1;

    for(int i = 2; i < num; i++)
    
        if(num % i == 0)
            
            return 0;
    
    return 1;
}

int qntPrimos(int N){

    int inc = 0;

    for(int i = N - 1; i > 1; i--)
    
        if(primo(i))
        
            inc++;
    
    return inc;       
}

int main(){

    printf("Quantidade de numeros primos abaixo de 2542: %i\n", qntPrimos(2542)); 
    
    return 0;
}
