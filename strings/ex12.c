/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 12: faça um programa que receba uma palavra e calcule quantas vogais possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int inc = 0;
    char palavra[100], aux, sub;
    
    printf("Insira uma palavra: ");
    fgets(palavra, 99, stdin);
    
    printf("Insira um caractere para substituicao: ");
    scanf("%c", &sub);
    
    for(int i = 0; palavra[i] != '\0'; i++){
    
        aux = palavra[i];
    
        if(aux == 'a'||aux == 'e'||aux == 'i'||aux == 'o'||aux == 'u'||aux == 'A'||aux == 'E'||aux == 'I'||aux == 'O'||aux == 'U'){
        
            palavra[i] = sub;
            inc++;
        }
    }
            
    printf("\nEssa palavra possui %i vogais", inc);
    printf("\nPalavra com as vogais substituidas: %s", palavra);
    
    return 0;
}
