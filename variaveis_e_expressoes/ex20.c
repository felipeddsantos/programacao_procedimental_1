/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 20: leia um valor de massa em quilogramas e apresente-o convertido em libras.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float quilo;
    
    printf("Insira uma massa em quilogramas: ");
    scanf("%f", &quilo);
    
    printf("\nA massa em libras e: %f\n", quilo / 0.45);

    return 0;
}
