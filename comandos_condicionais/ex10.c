/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):

* Homens: (72,7 ∗ h) − 58;
* Mulheres: (62,1 ∗ h) − 44,7.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float altura;
    char sexo;
    
    printf("Insira uma altura: ");
    scanf("%f", &altura);
    
    setbuf(stdin, NULL);
    
    printf("Insira um sexo (M para masculino e F para feminino): ");
    scanf("%c", &sexo);
    
    switch(sexo){
    
        case 'M':
    
            printf("\nPeso ideal: %f\n", 72.7 * altura - 58);
    
            break;
        
        case 'F':
    
            printf("\nPeso ideal: %f\n", 62.1 * altura - 44.7);
        
            break; 
        
        default:
        
            printf("\nSexo invalido\n");
    }
    
    return 0;
}
