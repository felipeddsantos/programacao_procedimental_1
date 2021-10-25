/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 36: escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor. Para calcular a comissão, considere a tabela abaixo:

Venda mensal (R$)                                        Comissão (R$)
Maior ou igual a 100.000,00                              700,00 + 16% das vendas
Menor que 100.000,00 e maior ou igual a 80.000,00        650,00 + 14% das vendas
Menor que 80.000,00 e maior ou igual a 60.000,00         600,00 + 14% das vendas
Menor que 60.000,00 e maior ou igual a 40.000,00         550,00 + 14% das vendas
Menor que 40.000,00 e maior ou igual a 20.000,00         500,00 + 14% das vendas
Menor que 20.000,00                                      400,00 + 14% das vendas

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float venda, comissao;
    
    printf("Insira a venda mensal: ");
    scanf("%f", &venda);
    
    if(venda < 20000)
    
        comissao = 0.14 * venda + 400;
    
    if(venda >= 20000 && venda < 40000)
    
        comissao = 0.14 * venda + 500;
        
    if(venda >= 40000 && venda < 60000)
    
        comissao = 0.14 * venda + 550;
        
    if(venda >= 60000 && venda < 80000)
    
        comissao = 0.14 * venda + 600;

    if(venda >= 80000 && venda < 100000)
    
        comissao = 0.14 * venda + 650;
        
    if(venda >= 100000)
    
        comissao = 0.16 * venda + 700;
        
    printf("\nO vendedor recebera uma comissao de: %f\n", comissao);
        
    return 0;
}
