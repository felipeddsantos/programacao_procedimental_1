/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 28: faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário: Geométrica, Ponderada, Harmônica e Aritmética.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){  

    int num1, num2, num3, op;
    float media;
    
    printf("Insira o primeiro numero: ");
    scanf("%i", &num1);
    
    printf("Insira o segundo numero: ");
    scanf("%i", &num2);
    
    printf("Insira o terceiro numero: ");
    scanf("%i", &num3);
    
    printf("\nInsira uma opcao de metrica:\n\n(0) Media geometrica\n(1) Media ponderada\n(2) Media aritmetica\n(3) Media harmonica\n\n");
    scanf("%i", &op);
    
    switch(op){
    
        case 0:
    
            printf("\nMedia geometrica dos valores inseridos: %f\n", pow(num1 * num2 * num3, 1 / 3));  
            
            break;
    
        case 1:
    
            printf("\nMedia ponderada dos valores inseridos: %f\n", (num1 + 2 * num2 + 3 * num3) / 6);
            
            break;
    
        case 2:
    
            printf("\nMedia aritmetica dos valores inseridos: %i\n", num1 + num2 + num3);
            
            break;
    
        case 3:
    
            if(num1 != 0 && num2 != 0 && num3 != 0)
    
                printf("\nMedia harmonica dos valores inseridos: %f\n", 1 / (1 / num1 + 1 / num2 + 1 / num3));
        
            else
        
                printf("\nMedia harmonica indefinida\n");
                
            break;
    
        default:
    
            printf("\nOpcao invalida\n");
    }
 
    return 0;
}
