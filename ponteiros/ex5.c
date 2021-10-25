/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.

*/

#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int *var1, int *var2){

    int aux = *var1;

    if(*var1 < *var2){
            
        *var1 = *var2;
        *var2 = aux;
    }
}

int main(){

    int var1, var2;
    
    printf("Insira a primeira variavel: ");
    scanf("%i", &var1);
    
    printf("Insira a segunda variavel: ");
    scanf("%i", &var2);
    
    maiorMenor(&var1, &var2);

    printf("\nO novo valor da primeira variavel: %i", var1); 
    printf("\nO novo valor da segunda variavel: %i\n", var2); 

    return 0;
}
