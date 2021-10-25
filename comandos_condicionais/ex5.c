/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.


*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int num;
    
    printf("Insira um numero inteiro: ");
    scanf("%i", &num);
    
    if(num % 2)
    
        printf("\nNumero impar\n");
    
    else
    
        printf("\nNumero par\n");
        
    return 0;
}
