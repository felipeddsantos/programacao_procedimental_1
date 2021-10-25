/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 51: escreva um programa que leia as coordenadas x e y de pontos no plano cartesiano e calcule sua distância da origem.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x, y;
    
    printf("Insira a coordenada x: ");
    scanf("%f", &x);
    
    printf("Insira a coordenada y: ");
    scanf("%f", &y);
    
    printf("\nA distancia do ponto (%f, %f) ate a origem e: %f\n", x, y, sqrt(x * x + y * y));
    
    return 0;
}
