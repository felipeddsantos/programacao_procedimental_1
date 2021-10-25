/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 18: faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int op;
    float num1, num2;
    
    printf("Insira uma opcao:\n\n(1) Adicao\n(2) Subtracao\n(3) Multiplicacao\n(4) Divisao\n\n");
    scanf("%i", &op);
    
    switch(op){
    
        case 1:

            printf("Insira o primeiro numero: ");
            scanf("%f", &num1);
    
            printf("Insira o segundo numero: ");
            scanf("%f", &num2);
        
            printf("\n%f + %f = %f\n", num1, num2, num1 + num2);
            
            break;
    
        case 2:

            printf("Insira o primeiro numero: ");
            scanf("%f", &num1);
    
            printf("Insira o segundo numero: ");
            scanf("%f", &num2);
        
            printf("\n%f - %f = %f\n", num1, num2, num1 - num2);
            
            break;
    
        case 3:

            printf("Insira o primeiro numero: ");
            scanf("%f", &num1);
    
            printf("Insira o segundo numero: ");
            scanf("%f", &num2);
        
            printf("\n%f x %f = %f\n", num1, num2, num1 * num2);
            
            break;
    
        case 4:

            printf("Insira o primeiro numero: ");
            scanf("%f", &num1);
    
            printf("Insira o segundo numero: ");
            scanf("%f", &num2);
        
            if(num2 != 0)
        
                printf("\n%f / %f = %f\n", num1, num2, num1 / num2);
        
            else
        
                printf("\nDivisao indefinida\n");
                
            break;
    
        default:
    
            printf("\nOpcao invalida\n");       
    }
 
    return 0;
}
