/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 18: faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[100], L1, L2;
    
    printf("Insira uma string: ");
    fgets(str, 99, stdin);

    printf("Insira um caractere a ser substituido: ");
    scanf("%c", &L1);
    
    setbuf(stdin, NULL);
    
    printf("Insira um caractere de substituicao: ");
    scanf("%c", &L2);
    
    for(int i = 0; str[i] != '\0'; i++)
    
        if(str[i] == L1)
        
            str[i] = L2;
            
    printf("\nString apos a mudanca: %s\n", str);
        
    return 0;
}
