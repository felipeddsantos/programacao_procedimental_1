/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 41: faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, horas;
    
    printf("Insira o valor da hora de trabalho: ");
    scanf("%f", &valor);
    
    printf("Insira o numero de horas trabalhadas: ");
    scanf("%f", &horas);
    
    printf("\nA quantia liquida que o funcionario recebera e: %f\n", 1.1 * horas * valor);

    return 0;
}
