/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 36: leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float raio, altura;
    
    printf("Insira o raio da base do cilindro: ");
    scanf("%f", &raio);
    
    printf("Insira a altura do cilindro: ");
    scanf("%f", &altura);
    
    printf("\nO volume do cilindro e: %f\n", 3.141592 * raio * raio * altura);

    return 0;
}
