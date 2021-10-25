/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 34: leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float raio;
    
    printf("Insira o raio de um circulo: ");
    scanf("%f", &raio);
    
    printf("\nA area do circulo e: %f\n", 3.141592 * raio * raio);

    return 0;
}
