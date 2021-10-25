/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: peça ao usuário para digitar três valores inteiros e imprima a soma deles. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3;
    
    printf("Insira o primeiro numero inteiro: ");
    scanf("%i", &num1);
    
    printf("Insira o segundo numero inteiro: ");
    scanf("%i", &num2);
    
    printf("Insira o terceiro numero inteiro: ");
    scanf("%i", &num3);
    
    printf("\nA soma dos tres numeros inseridos e: %i\n", num1 + num2 + num3);

    return 0;
}
