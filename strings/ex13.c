/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 13: ler uma frase e contar quantos caracteres são espaços em brancos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int inc = 0;
    char frase[100];
    
    printf("Insira uma frase: ");
    fgets(frase, 99, stdin);
    
    for(int i = 0; frase[i] != '\0'; i++)
    
        if(frase[i] == ' ')
        
            inc++;
            
    printf("\nEssa palavra possui %i espacos em branco\n", inc);
    
    return 0;
}
