/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 25: faça uma função para calcular o número neperiano usando uma série. A função deve ter como parâmetro o número de termos que serão somados (note que, quanto maior o número, mais próxima a resposta estará do valor e).

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int n){

    int fat = 1;
    
    for(int i = n; i > 1; i--)
    
        fat = i * fat;
    
    return fat;
}

float neperiano(int n){

    float e = 0;
    
    for(int i = 0; i <= n; i++)
    
        e = e + 1.0 / fatorial(i);
    
    return e;
}

int main(){

    printf("Aproximacao para o numero neperiano com 15 iteracoes: %f\n", neperiano(15)); 
    
    return 0;
}
