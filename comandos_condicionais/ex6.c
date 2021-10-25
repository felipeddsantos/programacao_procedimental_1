/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int num1, num2;
    
    printf("Insira o primeiro numero inteiro: ");
    scanf("%i", &num1);
    
    printf("Insira o segundo numero inteiro: ");
    scanf("%i", &num2);
    
    if(num1 == num2)
    
        printf("\nNumeros iguais\n");
    
    else{
    
        if(num1 > num2) 
    
            printf("\nMaior numero: %i\n. Diferenca entre eles: %i", num1, num1 - num2);
        
        else
        
            printf("\nMaior numero: %i\n. Diferenca entre eles: %i", num2, num2 - num1);
    }     
        
    return 0;
}
