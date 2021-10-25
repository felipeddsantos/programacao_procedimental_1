/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 11: faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor que p. Repita este processo até que seja lido um valor p = 0.

*/

#include <stdio.h>
#include <stdlib.h>

struct Carro{

    int ano;
    float preco;
    char marca[15];
};

int main(){
    
    int i, encontrado = 0;
    float p;
    struct Carro c[5];

    for(i = 0; i < 5; i++){
    
        printf("\nInsira a marca do carro %i: ", i + 1);
        fgets(c[i].marca, 15, stdin);

        printf("Insira o preço do carro %i: ", i + 1);
        scanf("%f", &c[i].preco);

        printf("Insira o ano do carro %i: ", i + 1);
        scanf("%i", &c[i].ano);

        setbuf(stdin, NULL);
    }

    while(1){

        printf("\nInsira um preço: ");
        scanf("%f", &p);

        if(p == 0)

            return 0;

        printf("\nCarros com o preço menor que %f:\n", p);

        for(i = 0; i < 5; i++){

            if(c[i].preco < p){

                printf("\nMarca: %sAno: %i\nPreço: %f\n", c[i].marca, c[i].ano, c[i].preço);

                encontrado = 1;
            }
        }

        if(!encontrado)

            printf("\nNão existem carros mais baratos que %f\n", p);
    }
}
