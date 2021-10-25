/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 14: faça uma função chamada ‘simplifica’ que recebe como parâmetro o numerador e o denominador de uma fração. Esta função deve simplificar a fração recebida dividindo o numerador e o denominador pelo maior fator possível. A função deve modificar as variáveis passadas como parâmetro.

*/

#include <stdio.h>
#include <stdlib.h>

void simplifica(int *num, int *den){

    int a = *num, b = *den, r;

    while(b != 0){
    
        r = a % b; 
        a = b;   
        b = r;
    }
   
   *num = *num / a;
   *den = *den / a;
}

int main(){

    int num = 240, den = 32;
    
    simplifica(&num, &den);

    printf("Simplificacao da fracao 240/32: %i/%i\n", num, den); 
    
    return 0;
}
