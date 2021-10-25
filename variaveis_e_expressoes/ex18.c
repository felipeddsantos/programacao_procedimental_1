/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 18: leia um valor de volume em metros cúbicos e apresente-o convertido em litros.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float m3;
    
    printf("Insira um volume em metros cubicos: ");
    scanf("%f", &m3);
    
    printf("\nO volume em litros e: %f\n", 1000 * m3);

    return 0;
}
