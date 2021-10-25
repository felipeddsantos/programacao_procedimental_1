/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 16: leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float pol;
    
    printf("Insira um comprimento em polegadas: ");
    scanf("%f", &pol);
    
    printf("\nO comprimento em centimetros e: %f\n", 2.54 * pol);

    return 0;
}
