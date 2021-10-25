/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: faça um programa que receba dois números e mostre qual deles é o maior.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float num1, num2;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    
    if(num1 > num2)
    
        printf("\nMaior numero: %f\n", num1);
    
    else
    
        printf("\nMaior numero: %f\n", num2);
        
    return 0;
}
