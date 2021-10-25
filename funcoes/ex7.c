/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit.

*/

#include <stdio.h>
#include <stdlib.h>

float fahrenheit(float C){

    return 1.8 * C + 32;
}

int main(){

    printf("118 graus Celsius equivalem a %f graus Fahrenheit\n", fahrenheit(118));
    
    return 0;
}
