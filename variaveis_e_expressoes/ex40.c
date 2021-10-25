/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 40: uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float dias;
    
    printf("Insira a quantidade de dias trabalhados pelo encanador: ");
    scanf("%f", &dias);
    
    printf("\nA quantia liquida que o encanador recebera e: %f\n", 27.6 * dias);

    return 0;
}
