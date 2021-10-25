/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){  

    float num;
    
    printf("Insira um numero: ");
    scanf("%f", &num);
    
    if(num >= 0)
    
        printf("\nRaiz quadrada do numero inserido: %f\n", sqrt(num));
    
    else
    
        printf("\nNumero invalido\n");
        
    return 0;
}
