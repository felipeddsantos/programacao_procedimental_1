/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 15: escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    char str[100];
    
    printf("Insira uma string: ");
    fgets(str, 99, stdin);
    
    for(int i = 0; str[i] != '\0'; i++)
    
        if(str[i] >= 65 && str[i] <= 90)
    
            str[i] = str[i] + 32;
            
    printf("\nString resultante: %s\n", str);
    
    return 0;
}
