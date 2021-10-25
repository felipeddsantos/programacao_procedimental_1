/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 30: leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float real, dolar;
    
    printf("Insira um valor em real: ");
    scanf("%f", &real);
    
    printf("Insira a cotacao atual do dolar: ");
    scanf("%f", &dolar);
    
    printf("\nO valor em dolares e: %f\n", dolar * real);

    return 0;
}
