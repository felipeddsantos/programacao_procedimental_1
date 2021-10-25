/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 12: ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número inválido”. Se o número for positivo, calcular o logaritmo deste numero.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){  

    float num;
    
    printf("Insira um numero: ");
    scanf("%f", &num);
    
    if(num > 0)
    
        printf("\nLogaritmo do numero inserido: %f\n", log(num));
          
    else
    
        printf("\nNumero invalido\n");
        
    return 0;
}
