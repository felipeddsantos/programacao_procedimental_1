/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 9: faça um programa que faça operações simples de números complexos:

* Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária;
* Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo de ambos.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct complexo Complexo;

struct complexo{

    float real, img;
};

float modulo(Complexo z){

    return sqrt(z.real * z.real + z.img * z.img); 
}

void soma(Complexo z, Complexo w, Complexo *sum){

    sum->real = z.real + w.real;
    sum->img = z.img + w.img;
}

void subtracao(Complexo z, Complexo w, Complexo *sub){

    sub->real = z.real - w.real;
    sub->img = z.img - w.img;
}

void produto(Complexo z, Complexo w, Complexo *prod){

    prod->real = z.real * w.real - z.img * w.img; 
    prod->img = z.real * w.img + z.img * w.real;
}

int main(){
    
    Complexo z, w, sum, sub, prod;
    
    printf("\nInsira a parte real de z: ");
    scanf("%f", &z.real);

    printf("Insira a parte imaginária de z: ");
    scanf("%f", &z.img);

    printf("\nInsira a parte real de w: ");
    scanf("%f", &w.real);

    printf("\nInsira a parte imaginária de w: ");
    scanf("%f", &w.img);

    soma(z, w, &sum);
    subtracao(z, w, &sub);
    produto(z, w, &prod);
                    
    printf("\n\nMódulo de z: %f", modulo(z));
    printf("\nMódulo de w: %f", modulo(w));
    printf("\nSoma entre z e w - Parte real: %f, Parte imaginária: %f", sum.real, sum.img);
    printf("\nSubtração entre z e w - Parte real: %f, Parte imaginária: %f", sub.real, sub.img);
    printf("\nProduto entre z e w - Parte real: %f, Parte imaginária: %f\n", prod.real, prod.img);
                   
    return 0;
}
