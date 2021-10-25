/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 21: leia um valor de massa em libras e apresente-o convertido em quilogramas.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float libra;
    
    printf("Insira uma massa em libras: ");
    scanf("%f", &libra);
    
    printf("\nA massa em quilogramas e: %f\n", 0.45 * libra);

    return 0;
}
