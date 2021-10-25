/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 47: leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, milhares, centenas, dezenas, unidades;
    
    printf("Insira um numero inteiro de quatro digitos: ");
    scanf("%i", &num);
    
    milhares = num / 1000;
    centenas = (num - 1000 * milhares) / 100;
    dezenas = (num - 1000 * milhares - 100 * centenas) / 10;
    unidades = num - 1000 * milhares - 100 * centenas - 10 * dezenas;
    
    printf("\nPrimeiro digito: %i", milhares);
    printf("\nSegundo digito: %i", centenas);
    printf("\nTerceiro digito: %i", dezenas);
    printf("\nQuarto digito: %i\n", unidades);
    
    return 0;
}
