/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 15: leia um ângulo em radianos e apresente-o convertido em graus.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float rad;
    
    printf("Insira um angulo em radianos: ");
    scanf("%f", &rad);
    
    printf("\nO angulo em graus e: %f\n", 180 * rad / 3.141592);

    return 0;
}
