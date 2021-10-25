/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int soma = 0, i = 0;
    
    while(i <= 50){
        
        if(i % 2 == 0)
        
            soma = soma + i;
        
        i++;
    }
       
    printf("Soma dos primeiros 50 numeros pares: %i\n", soma);
    
    return 0;
}
