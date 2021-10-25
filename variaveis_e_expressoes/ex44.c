/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 44: receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float degrau, altura;
    
    printf("Insira a altura do degrau: ");
    scanf("%f", &degrau);
    
    printf("Insira a altura que o usuário deseja alcancar: ");
    scanf("%f", &altura);
    
    printf("\nA quantidade de degraus que o usuario deve subir para alcancar seu objetivo e: %f\n", altura / degrau);
    
    return 0;
}
