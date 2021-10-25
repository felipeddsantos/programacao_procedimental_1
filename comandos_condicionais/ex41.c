/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 41: faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a tabela abaixo:

IMC             Classificação
até 18,5        Abaixo do Peso
18,6 - 24,9     Saudável
25,0 - 29,9     Peso em excesso
30,0 - 34,9     Obesidade Grau I
35,0 - 39,9     Obesidade Grau II
acima de 40,0   Obesidade Grau III

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float peso, altura, imc;
    
    printf("Insira a altura: ");
    scanf("%f", &altura);
    
    printf("Insira o peso: ");
    scanf("%f", &peso);
    
    if(altura != 0){
    
        imc = peso / (altura * altura);
    
        if(imc <= 18.5)
        
            printf("\nClassificacao: Abaixo do peso\n");
            
        if(imc >= 18.6 && imc <= 24.9)
        
            printf("\nClassificacao: Saudavel\n");
            
        if(imc >= 25 && imc <= 29.9)
        
            printf("\nClassificacao: Peso em excesso\n");
            
        if(imc >= 30 && imc <= 34.9)
        
            printf("\nClassificacao: Obesidade grau I\n");
            
        if(imc >= 35 && imc <= 39.9)
        
            printf("\nClassificacao: Obesidade grau II\n");
            
        if(imc >= 40)
        
            printf("\nClassificacao: Obesidade grau III\n");
    }
    
    else
    
        printf("\nIMC indeterminado\n");
        
    return 0;
}
