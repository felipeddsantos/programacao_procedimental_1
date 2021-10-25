/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: faça uma função que receba os valores dos catetos a e b e calcule o valor da hipotenusa.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(float a, float b){

    return sqrt(a * a + b * b);
}

int main(){

    printf("Com os catetos 6 e 9, a hipotenusa vale: %f\n", hipotenusa(6, 9));
    
    return 0;
}
