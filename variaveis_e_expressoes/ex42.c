/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 42: receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario;
    
    printf("Insira o salario do funcionario: ");
    scanf("%f", &salario);
    
    printf("\nA quantia liquida que o funcionario recebera e: %f\n", 0.98 * salario);

    return 0;
}
