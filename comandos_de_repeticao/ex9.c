/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int N, num = 0, i = 0;
    
    printf("Insira um numero: ");
    scanf("%i", &N);
    
    printf("\nOs primeiros %i numeros impares:", N);
    
    while(i < N){
        
        if(num % 2){
            
            printf(" %i", num);
            
            i++;
        }
        
        num++;
    }
    
    printf("\n");
    
    return 0;
}
