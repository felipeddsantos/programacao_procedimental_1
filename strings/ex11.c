/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 11: faça um programa que receba do usuário uma string. O programa imprime a string sem suas vogais.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    char str[100], aux;
    
    printf("Insira uma string: ");
    fgets(str, 99, stdin);
    
    printf("\nString sem as vogais: ");
    
    for(int i = 0; str[i] != '\0'; i++){
    
        aux = str[i];
    
        if(aux != 'a' && aux != 'e' && aux != 'i' && aux != 'o' && aux != 'u' && aux != 'A' && aux != 'E' && aux != 'I' && aux != 'O' && aux != 'U')
        
            printf("%c", str[i]);
    }
            
    printf("\n");
        
    return 0;
}
