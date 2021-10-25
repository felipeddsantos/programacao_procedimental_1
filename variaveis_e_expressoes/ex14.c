/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 14: leia um ângulo em graus e apresente-o convertido em radianos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float grau;
    
    printf("Insira um angulo em graus: ");
    scanf("%f", &grau);
    
    printf("\nO angulo em radianos e: %f\n", 3.141592 * grau / 180);

    return 0;
}
