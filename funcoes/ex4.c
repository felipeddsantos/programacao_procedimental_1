/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não 
negativo que pode ser expresso como o quadrado de outro número inteiro.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int perfeito(int num){

    if(num == sqrt(num) * sqrt(num))
    
        return 1;
    
    return 0;
}

int main(){

    int num = 25;

    if(perfeito(num))

        printf("Esse numero e um quadrado perfeito\n");
        
    else

        printf("Esse numero nao e um quadrado perfeito\n");
    
    return 0;
}
