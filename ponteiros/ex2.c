/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int var1, var2;
    
    if(&var1 > &var2)
    
        printf("A variavel de maior endereco esta em %p\n", &var1); 
        
    else
        
        printf("A variavel de maior endereco esta em %p\n", &var2); 
    
    return 0;
}
