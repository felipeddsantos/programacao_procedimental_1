/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 16: leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    char str[100];
    
    printf("Insira uma string: ");
    fgets(str, 99, stdin);
    
    for(int i = 0; str[i] != '\0'; i++)
    
        if(str[i] >= 97 && str[i] <= 122)
    
            str[i] = str[i] - 32;
            
    printf("\nString resultante: %s\n", str);
    
    return 0;
}
