/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: leia um numero real e imprima o resultado do quadrado desse número. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num;
    
    printf("Insira um numeo real: ");
    scanf("%f", &num);
    
    printf("\nO quadrado do numero inserido e: %f\n", num * num);

    return 0;
}
