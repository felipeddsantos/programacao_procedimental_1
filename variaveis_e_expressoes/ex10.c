/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: leia uma velocidade em km/h e apresente-a convertida em m/s.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float km;
    
    printf("Insira uma velocidade em km/h: ");
    scanf("%f", &km);
    
    printf("\nA velocidade em m/s e: %f\n", km / 3.6);

    return 0;
}
