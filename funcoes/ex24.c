/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 24: faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule o valor do cosseno hiperbólico desse ângulo usando sua respectiva série de Taylor. Considerar n variando de 0 até 5.

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

float cossenoh(float rad){

    float s = 0;
    
    for(int i = 0; i < 6; i++)
    
        s = s + pow(rad, 2 * i) / fatorial(2 * i);
    
    return s;
}

int main(){

    printf("Aproximacao para cosseno hiperbolico de pi: %f\n", cossenoh(3.141592)); 
    
    return 0;
}
