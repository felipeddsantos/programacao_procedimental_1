/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float num, menor, maior;
    
    for(int i = 0; i < 9; i++){
    
        printf("Insira o numero %i: ", i + 1);
        scanf("%f", &num);
        
        if(i == 0)
        
            maior = menor = num;
        
        if(num > maior)
            
            maior = num;
        
        if(num < menor)
        
            menor = num;
    }
    
    printf("\nO menor e o maior valores sao: %f e %f\n", menor, maior);
    
    return 0;
}
