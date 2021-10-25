/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: leia um numero real e imprima a quinta parte deste número. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num;
    
    printf("Insira um numero real: ");
    scanf("%f", &num);
    
    printf("\nA quinta parte do numero inserido e: %f\n", num / 5);

    return 0;
}
