/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma string por outro caractere ‘1’.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    char str[] = "1010110qaqqahdg    11 0  .";
    
    for(int i = 0; str[i] != '\0'; i++)
    
        if(str[i] == '0')
        
            str[i] = '1';
            
    printf("String após a mudanca: %s\n", str);
        
    return 0;
}
