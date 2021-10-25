/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i;
    
    printf("Contagem de 1 ate 100 com o laco for:\n");    
    
    for(i = 1; i <= 100; i++)
    
        printf("%i\n", i);  
    
    i = 1;
    
    printf("\nContagem de 1 ate 100 com o laco while:\n");      
    
    while(i <= 100){
        
        printf("%i\n", i);    
        
        i++;         
    }
    
    i = 1;
    
    printf("\nContagem de 1 ate 100 com o laco do-while:\n");      
    
    do{
        
        printf("%i\n", i);    
        
        i++;  
               
    }while(i <= 100);
    
    return 0;
}
