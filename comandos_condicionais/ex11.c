/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 11: escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos. Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int num, soma = 0;
    
    printf("Insira um numero inteiro: ");
    scanf("%i", &num);
    
    if(num > 0){
    
        while(num > 0){
        
            soma = soma + num % 10;
            num = num / 10;    
        }
            
        printf("\nSoma dos algarismos: %i\n", soma);  
    }
    
    else
    
        printf("\nNumero invalido\n");  
        
    return 0;
}
