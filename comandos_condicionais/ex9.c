/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float salario, prestacao;
    
    printf("Insira o salario: ");
    scanf("%f", &salario);
    
    printf("Insira a prestacao: ");
    scanf("%f", &prestacao);
    
    if(prestacao > 0.2 * salario)
    
        printf("\nEmprestimo nao concedido\n");
   
    else
    
        printf("\nEmprestimo concedido\n");
      
    return 0;
}
