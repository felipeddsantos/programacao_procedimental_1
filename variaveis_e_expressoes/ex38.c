/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 38: leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario;
    
    printf("Insira o salario do funcionario: ");
    scanf("%f", &salario);
    
    printf("\nO salario do funcionario apos aumento e: %f\n", 1.25 * salario);

    return 0;
}
