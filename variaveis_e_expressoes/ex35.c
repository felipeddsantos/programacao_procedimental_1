/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 35: faça um programa que receba os valores de a e b e calcule o valor da hipotenusa. Imprima o resultado dessa operação.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a, b;
    
    printf("Insira o primeiro cateto: ");
    scanf("%f", &a);

    printf("Insira o segundo cateto: ");
    scanf("%f", &b);
    
    printf("\nA hipotenusa e: %f\n", sqrt(a * a + b * b));

    return 0;
}
