/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 39: uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor salário terão um aumento proporcionalmente maior do que os funcionários com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:

* O valor do salário atual do funcionário;
* O tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

Salário (R$)       Reajuste (%)    Tempo de serviço (anos)     Bônus (R$)
Até 500,00            25                  até 1                   0
Até 1000,00           20                  1 - 3                 100,00
Até 1500,00           15                  4 - 6                 200,00  
Até 2000,00           10                  7 - 10                300,00
Acima de 2000,00       0                acima de 10             500,00

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float salario, tempo, reajuste = 0, bonus = 0;
    
    printf("Insira o salario: ");
    scanf("%f", &salario);
    
    printf("Insira o tempo de servico: ");
    scanf("%f", &tempo);
      
    if(salario <= 500)
    
        reajuste = 1.25;
    
    if(salario > 500 && salario <= 1000)
    
        reajuste = 1.2;
        
    if(salario > 1000 && salario <= 1500)
    
        reajuste = 1.15;
        
    if(salario > 1500 && salario <= 2000)
    
        reajuste = 1.1;

    if(tempo > 1 && tempo <= 3)
    
        bonus = 100;
        
    if(tempo > 4 && tempo <= 6)
    
        bonus = 200;
        
    if(tempo > 7 && tempo <= 10)
    
        bonus = 300;

    if(tempo > 10)
    
        bonus = 500;
    
    if(reajuste == 0 && bonus == 0)
    
        printf("\nO trabalhador nao tem direito a reajuste salarial\n");
        
    else
        
        printf("\nO salario do trabalhador apos reajuste e de: %f\n", reajuste * salario + bonus);
        
    return 0;
}
