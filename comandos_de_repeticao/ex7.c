/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int num;
    float soma = 0;
    
    for(int i = 0; i < 9; i++){
    
        printf("Insira o numero %i: ", i + 1);
        scanf("%i", &num);
        
        if(num > 0)
        
            soma = soma + num;
    }
    
    printf("\nMedia dos numeros positivos inseridos: %f\n", soma / 10);
    
    return 0;
}
