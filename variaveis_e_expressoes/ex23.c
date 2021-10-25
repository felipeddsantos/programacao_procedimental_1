/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 23: leia um valor de comprimento em metros e apresente-o convertido em jardas.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float metro;
    
    printf("Insira um comprimento em metros: ");
    scanf("%f", &metro);
    
    printf("\nO comprimento em jardas e: %f\n", metro / 0.91);

    return 0;
}
