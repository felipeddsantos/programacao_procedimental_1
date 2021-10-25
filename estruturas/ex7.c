/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: faça um programa que converta coordenadas polares para cartesianas:

* Crie e leia um ponto em coordenada polar, composto por raio e argumento em radianos;
* Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo que x = rcosa e y = rsina;
* No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do ponto gerado no plano cartesiano.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Cartesiano{

    float x, y;
};

struct Polar{

    float r, a;
};

void polarCartesiano(struct Polar p, struct Cartesiano *c){

    c->x = p.r * cos(p.a);
    c->y = p.r * sin(p.a);
}

int main(){
    
    struct Polar p;
    struct Cartesiano c;
    
    printf("\nInsira o raio em coordenadas polares: ");
    scanf("%f", &p.r);

    printf("\nInsira o argumento em coordenadas polares: ");
    scanf("%f", &p.a);

    polarCartesiano(p, &c);
                    
    printf("\nO ponto inserido se encontra em (%f, %f) no plano cartesiano\n", c.x, c.y);
                   
    return 0;
}
