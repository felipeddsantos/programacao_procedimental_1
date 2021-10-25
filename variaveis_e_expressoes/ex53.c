/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 53: faça um programa para ler as dimensões de um terreno, bem como o preço do metro de tela. Imprima o custo para cercar este mesmo terreno com tela.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float comp, larg, preco;
    
    printf("Insira o comprimento do terreno: ");
    scanf("%f", &comp);
    
    printf("Insira a largura do terreno: ");
    scanf("%f", &larg);
    
    printf("Insira o preco do metro de tela: ");
    scanf("%f", &preco);
    
    printf("\nO custo para cercar este terreno e: %f\n", preco * (comp + larg));
    
    return 0;
}
