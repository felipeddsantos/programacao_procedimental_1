/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 32: escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:

Especificação      Código    Preço (R$)
Cachorro Quente     100        1.20
Bauru Simples       101        1.30
Bauru com Ovo       102        1.50
Hamburguer          103        1.20
Cheeseburguer       104        1.70
Suco                105        2.20
Refrigerante        106        1.00

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int codigo, qnt;
    float total = 0;
    
    printf("Insira o codigo do lanche: ");
    scanf("%i", &codigo);
    
    printf("Insira a quantidade de lanches: ");
    scanf("%i", &qnt);
    
    switch(codigo){
    
        case 100:
    
            printf("\nTotal a pagar: %f\n", 1.2 * qnt);
            
            break;
    
        case 101:
    
            printf("\nTotal a pagar: %f\n", 1.3 * qnt);
            
            break;
        
        case 102:
    
            printf("\nTotal a pagar: %f\n", 1.5 * qnt);
            
            break;
        
        case 103:
    
            printf("\nTotal a pagar: %f\n", 1.2 * qnt);
            
            break;

        case 104:
    
            printf("\nTotal a pagar: %f\n", 1.7 * qnt);
            
            break;
        
        case 105:
    
            printf("\nTotal a pagar: %f\n", 2.2 * qnt);
            
            break;
        
        case 106:

            printf("\nTotal a pagar: %f\n", qnt);
            
            break;
            
        default:
        
            printf("\nCodigo invalido\n");
    }
        
    return 0;
}
