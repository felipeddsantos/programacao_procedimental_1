/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: faça uma função que receba dois números e retorne qual deles é o maior.

*/

#include <stdio.h>
#include <stdlib.h>

float maior(float num1, float num2){

    if(num1 > num2)
    
        return num1;
    
    return num2;
}

int main(){

    printf("O maior entre 3.14 e 2.71: %f\n", maior(3.14, 2.71));
    
    return 0;
}
