/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 18: implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R.

*/

#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

void esfera(float R, float *area, float *volume){

    *area = 4 * pi * R * R;
    *volume = 4 * pi * R * R * R / 3;
}

int main(){  

    float R, area, volume;
    
    printf("Insira o raio da esfera: ");
    scanf("%f", &R);
    
    esfera(R, &area, &volume);
      
    printf("\nArea da superficie da esfera: %f", area);
    printf("\nVolume da esfera: %f\n", volume);
    
    return 0;
}
