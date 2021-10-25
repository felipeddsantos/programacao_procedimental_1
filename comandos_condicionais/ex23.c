/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 23: determine se um determinado ano lido é bissexto.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int ano;
    
    printf("Insira um ano: ");
    scanf("%i", &ano);
    
    if(ano % 400 == 0){
    
        if(ano > 0)
    
            printf("\nE ano bissexto\n");
           
        else
    
            printf("\nNao e ano bissexto\n");
    }
    
    else{
    
        if(ano % 4 == 0 && ano % 100 != 0 && ano > 0) 
    
            printf("\nE ano bissexto\n");
        
        else
        
            printf("\nNao e ano bissexto\n");
    }     
        
    return 0;
}
