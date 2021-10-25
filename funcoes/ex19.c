/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 19: faça uma função que retorne o maior fator primo de um número.

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

int fatorPrimo(int num){

    for(int i = num - 1; i > 1; i--)
    
        if(primo(i) && num % i == 0)
        
            return i;
    
    return 1;       
}

int main(){

    int result = fatorPrimo(2542);
    
    if(result == 1)    
        
        printf("Esse numero nao possui fatores primos, pois e primo\n"); 
        
    else
        
        printf("O maior fator primo de 2542: %i\n", result); 
    
    return 0;
}
