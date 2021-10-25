/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float nota1, nota2;
    
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    
    if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
    
        printf("\nMedia das notas: %f\n", (nota1 + nota2) / 2);
    
    else
    
        printf("\nNotas invalidas\n");  
        
    return 0;
}
