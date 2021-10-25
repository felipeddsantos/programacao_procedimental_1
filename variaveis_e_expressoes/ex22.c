/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 22: leia um valor de comprimento em jardas e apresente-o convertido em metros.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float jarda;
    
    printf("Insira um comprimento em jardas: ");
    scanf("%f", &jarda);
    
    printf("\nO comprimento em metros e: %f\n", 0.91 * jarda);

    return 0;
}
