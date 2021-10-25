/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo que o raio é passado por parâmetro.

*/

#include <stdio.h>
#include <stdlib.h>

float esfera(float R){

    return 4 / 3 * 3.141592 * R * R * R;
}

int main(){

    printf("Volume de uma esfera de raio 3: %f\n", esfera(3));
    
    return 0;
}
