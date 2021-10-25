/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 28: faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, num3;
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Insira o terceiro numero: ");
    scanf("%f", &num3);
    
    printf("\nA soma dos quadrados dos numeros e: %f\n", num1 * num1 + num2 * num2 + num3 * num3);

    return 0;
}
