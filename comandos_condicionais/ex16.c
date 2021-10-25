/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 16: usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int mes;
    
    printf("Insira um mes: ");
    scanf("%i", &mes);
    
    switch(mes){
    
        case 1:
    
            printf("\nJaneiro\n");
            
            break;
            
        case 2:
    
            printf("\nFevereiro\n");
            
            break;
            
        case 3:
    
            printf("\nMarco\n");
            
            break;
            
        case 4:
    
            printf("\nAbril\n");
            
            break;
            
        case 5:
    
            printf("\nMaio\n");
            
            break;
            
        case 6:
    
            printf("\nJunho\n");
            
            break;
            
        case 7:
    
            printf("\nJulho\n");
            
            break;
            
        case 8:
    
            printf("\nAgosto\n");
            
            break;
            
        case 9:
    
            printf("\nSetembro\n");
            
            break;
            
        case 10:
    
            printf("\nOutubro\n");
            
            break;
            
        case 11:
    
            printf("\nNovembro\n");
            
            break;
            
        case 12:
    
            printf("\nDezembro\n");
            
            break;
            
        default:
    
            printf("\nMes invalido\n");
    }     
        
    return 0;
}
