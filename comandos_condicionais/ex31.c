/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 31: faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostra qual a classificação dessa pessoa.

Altura (m)          Peso: até 60 Kg     Peso: 60 Kg - 90 Kg (inclusive)    Peso: acima de 90 Kg
Menor que 1,20           A                           D                             G
1,20 - 1,70              B                           E                             H
Maior que 1,70           C                           F                             I

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float peso, altura;
    
    printf("Insira o peso: ");
    scanf("%f", &peso);
    
    printf("Insira a altura: ");
    scanf("%f", &altura);
    
    if(altura < 1.2 && peso <= 60)
        
        printf("\nClassificacao: A\n");
    
    if(altura >= 1.2 && altura <= 1.7 && peso <= 60)
        
        printf("\nClassificacao: B\n");
    
    if(altura > 1.7 && peso <= 60)
        
        printf("\nClassificacao: C\n");
    
    if(altura < 1.2 && peso > 60 && peso <= 90)
        
        printf("\nClassificacao: D\n");
    
    if(altura >= 1.2 && altura <= 1.7 && peso > 60 && peso <= 90)
        
        printf("\nClassificacao: E\n");
    
    if(altura > 1.7 && peso > 60 && peso <= 90)
        
        printf("\nClassificacao: F\n");

    if(altura < 1.2 && peso > 90)
      
        printf("\nClassificacao: G\n");
    
    if(altura >= 1.2 && altura <= 1.7 && peso > 90)
    
        printf("\nClassificacao: H\n");
    
    if(altura > 1.7 && peso > 90)
    
        printf("\nClassificacao: I\n");
 
    return 0;
}
