/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do cilindro.

*/

#include <stdio.h>
#include <stdlib.h>

float cilindro(float R, float altura){

    return 3.141592 * R * R * altura;
}

int main(){

    printf("Volume de um cilindro de raio 3 e altura 2.14: %f\n", cilindro(3, 2.14));
    
    return 0;
}
