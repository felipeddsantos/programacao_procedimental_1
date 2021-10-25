/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 19: leia um valor de volume em litros e apresente-o convertido em metros cúbicos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float lit;
    
    printf("Insira um volume em litros: ");
    scanf("%f", &lit);
    
    printf("\nO volume em metros cubicos e: %f\n", lit / 1000);

    return 0;
}
