/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 17: leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float cent;
    
    printf("Insira um comprimento em centimetros: ");
    scanf("%f", &cent);
    
    printf("\nO comprimento em polegadas e: %f\n", cent / 2.54);

    return 0;
}
