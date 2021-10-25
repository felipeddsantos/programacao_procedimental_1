/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:

* O número digitado ao quadrado;
* A raiz quadrada do número digitado.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){  

    float num;
    
    printf("Insira um numero: ");
    scanf("%f", &num);
    
    if(num >= 0)
    
        printf("\nQuadrado e raiz quadrado do numero inserido: %f e %f\n", num * num, sqrt(num));
    
    else
    
        printf("\nNumero negativo\n");
        
    return 0;
}
