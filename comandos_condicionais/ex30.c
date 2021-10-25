/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 30: faça um programa que receba três números e mostre-os em ordem decrescente.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float num1, num2, num3;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Insira o terceiro numero: ");
    scanf("%f", &num3);
    
    if(num1 > num2 && num1 > num3 && num2 > num3)
    
        printf("\nNumeros em ordem decrescente: %f %f %f\n", num1, num2, num3);
    
    if(num1 > num2 && num1 > num3 && num3 > num2)
    
        printf("\nNumeros em ordem decrescente: %f %f %f\n", num1, num3, num2);
        
    if(num2 > num1 && num2 > num3 && num1 > num3)
    
        printf("\nNumeros em ordem decrescente: %f %f %f\n", num2, num1, num3);

    if(num2 > num1 && num2 > num3 && num3 > num1)
    
        printf("\nNumeros em ordem decrescente: %f %f %f\n", num2, num3, num1);

    if(num3 > num1 && num3 > num2 && num1 > num2)
    
        printf("\nNumeros em ordem decrescente: %f %f %f\n", num3, num1, num2);

    if(num3 > num1 && num3 > num2 && num2 > num1)
    
        printf("\nNumeros em ordem decrescente: %f %f %f\n", num3, num2, num1);
 
    return 0;
}
