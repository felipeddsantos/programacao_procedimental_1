/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 17: faça um programa que calcule e mostre a área de um trapézio. Lembre-se que a base maior e a base menor devem ser números maiores que zero.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float maior, menor, altura;
    
    printf("Insira a base maior: ");
    scanf("%f", &maior);
    
    printf("Insira a base menor: ");
    scanf("%f", &menor);
    
    printf("Insira a altura: ");
    scanf("%f", &altura);
    
    if(maior > 0 && menor > 0)
    
        printf("\nArea do trapezio: %f\n", (maior + menor) * altura / 2);
    
    else
    
        printf("\nInformacoes invalidas\n");    
        
    return 0;
}
