/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 52: três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio com base no valor investido.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float amigo1, amigo2, amigo3, premio, parcela;
    
    printf("Insira o investimento do primeiro amigo: ");
    scanf("%f", &amigo1);
    
    printf("Insira o investimento do segundo amigo: ");
    scanf("%f", &amigo2);
    
    printf("Insira o investimento do terceiro amigo: ");
    scanf("%f", &amigo3);

    printf("Insira o valor do premio: ");
    scanf("%f", &premio);
    
    parcela = premio / (amigo1 + amigo2 + amigo3);
    
    printf("\nO primeiro amigo ganharia: %f", amigo1 * parcela);
    printf("\nO segundo amigo ganharia: %f", amigo2 * parcela);
    printf("\nO terceiro amigo ganharia: %f\n", amigo3 * parcela);
    
    return 0;
}
