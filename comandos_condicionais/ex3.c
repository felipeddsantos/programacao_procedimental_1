/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o numero ao quadrado.

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
    
        printf("\nQuadrado do numero inserido: %f\n", num * num);
        
    return 0;
}
