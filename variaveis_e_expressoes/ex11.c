/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 11: leia uma velocidade em m/s e apresente-a convertida em km/h.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float ms;
    
    printf("Insira uma velocidade em m/s: ");
    scanf("%f", &ms);
    
    printf("\nA velocidade em km/h e: %f\n", 3.6 * ms);

    return 0;
}
