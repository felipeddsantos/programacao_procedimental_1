/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiúscula ou minúscula).

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    char nome[30];
    
    printf("Insira um nome: ");
    fgets(nome, 29, stdin);
    
    if(nome[0] == 'A' || nome[0] == 'a')
    
        printf("\nO nome inserido e: %s\n", nome);
        
    return 0;
}
