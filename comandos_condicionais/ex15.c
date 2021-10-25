/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 15: usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int dia;
    
    printf("Insira um dia: ");
    scanf("%i", &dia);
    
    switch(dia){
    
        case 1:
    
            printf("\nDomingo\n");
            
            break;
            
        case 2:
    
            printf("\nSegunda-Feira\n");
            
            break;
            
        case 3:
    
            printf("\nTerca-Feira\n");
            
            break;
            
        case 4:
    
            printf("\nQuarta-Feira\n");
            
            break;
            
        case 5:
    
            printf("\nQuinta-Feira\n");
            
            break;
            
        case 6:
    
            printf("\nSexta-Feira\n");
            
            break;
            
        case 7:
    
            printf("\nSabado\n");
            
            break;
            
        default:
    
            printf("\nDia invalido\n");
    }     
        
    return 0;
}
