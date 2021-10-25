/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: considerando a estrutura:

struct Vetor{
    
    float x;
    float y;
    float z;
};

para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.

*/

#include <stdio.h>
#include <stdlib.h>

struct Vetor{

    float x, y, z;
};

int main(){
    
    struct Vetor V1 = {1.2, 3.4}, V2 = {1.1, 7.5}, V3;
    
    V3.x = V1.x + V2.x;
    v3.y = V1.y + V2.y;
    V3.z = V1.z + V2.z;
 
    printf("Vetor soma: (%f, %f, %f)\n", V3.x, V3.y, V3.z);
    
    return 0;
}
