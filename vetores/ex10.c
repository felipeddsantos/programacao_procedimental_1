/*

Programação Procedimental I - Vetores 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float vet[15], soma = 0;
    
    for(int i = 0; i < 15; i++){
    
        printf("Insira a nota do aluno %i: ", i + 1);
        scanf("%f", &vet[i]);
        
        soma = soma + vet[i];
    }
    
    printf("\nMedia geral: %f\n", soma / 15);
    
    return 0;
}
