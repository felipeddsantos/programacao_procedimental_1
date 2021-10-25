/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 32: dado um número n na base decimal, escreva uma função recursiva que converte este número para binário.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decBin(int dec, char *bin){

    if(dec > 1)
    
        decBin(dec / 2, bin);
   
    if(dec % 2)
    
        strcat(bin, "1");        
    
    else
    
        strcat(bin, "0");    
}

int main(){  

    char bin[100];
    
    decBin(1002, bin);
    
    printf("Numero 1002 em binario: %s\n", bin); 
    
    return 0;
}
