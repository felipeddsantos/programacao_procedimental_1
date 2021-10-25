/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 16: Faça uma função que receba um inteiro N como parâmetro, calcule e retorne o resultado da seguinte série: S = 2/4 + 5/5 + 10/6 + ... + (N^2 + 1)/(N + 3).

*/

#include <stdio.h>
#include <stdlib.h>

float serie(int n){

    float s = 0;
    
    for(float i = 1; i <= n; i++)
    
        s = s + (i * i + 1) / (i + 3);
    
    return s;
}

int main(){

    printf("Serie para n = 20: %f\n", serie(20)); 
    
    return 0;
}
