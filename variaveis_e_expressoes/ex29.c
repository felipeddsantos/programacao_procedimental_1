/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 29: leia quatro notas, calcule a média aritmética e imprima o resultado.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, nota3, nota4;
    
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Insira a quarta nota: ");
    scanf("%f", &nota4);
    
    printf("\nA media aritmetica das notas e: %f\n", (nota1 + nota2 + nota3 + nota4) / 4);

    return 0;
}
