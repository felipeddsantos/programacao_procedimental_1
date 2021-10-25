/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 19: faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas não simultaneamente pelos dois.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int num;
    
    printf("Insira um numero: ");
    scanf("%i", &num);
    
    if((num % 3 == 0 && num % 5 != 0) || (num % 3 != 0 && num % 5 == 0))
    
        printf("\nO numero inserido e divisivel por 3 ou por 5, mas nao por ambos\n");
    
    else
    
        printf("\nO numero inserido ou e divisivel por 5 e por 3 ou por nenhum\n");
    
    return 0;
}
