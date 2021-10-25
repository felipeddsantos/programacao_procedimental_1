/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: faça um programa que conte o número de 1’s que aparecem em um string.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int inc = 0;
    char str[] = "1010110qaqqahdg    11 0  .";
    
    for(int i = 0; str[i] != '\0'; i++)
    
        if(str[i] == '1')
        
            inc++;
            
    printf("Quantidade de 1's na string: %i\n", inc);
        
    return 0;
}
