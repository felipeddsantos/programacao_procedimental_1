/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 14: faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa:

* Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em kW) e tempo ativo por dia (real, em horas);
* Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodoméstico (consumo/consumo total) nesse perı́odo de tempo. Apresente este último dado em porcentagem.

*/

#include <stdio.h>
#include <stdlib.h>

struct Eletrodomestico{

    float potencia, tempo;
    char nome[15];
};

int main(){
    
    float tempo, consumo = 0;
    struct Eletrodomestico e[5];

    for(int i = 0; i < 5; i++){
    
        printf("\nInsira o nome do eletrodoméstico %i: ", i + 1);
        fgets(e[i].nome, 15, stdin);

        printf("Insira a potência do eletrodoméstico %i: ", i + 1);
        scanf("%f", &e[i].potencia);

        printf("Insira o tempo ativo diário do eletrodoméstico %i: ", i + 1);
        scanf("%f", &e[i].tempo);

        consumo = consumo + e[i].potencia * e[i].tempo;

        setbuf(stdin, NULL);
    }

    printf("\nInsira a quantidade de dias para o cálculo do consumo de cada eletrodoméstico: ");
    scanf("%f", &tempo);

    printf("\nLista de eletrodomésticos e seus respectivos gastos:\n");

    for(int i = 0; i < 5; i++)
    
        printf("\nNome: %sConsumo: %f\n", e[i].nome, e[i].potencia * e[i].tempo / consumo);
    
    printf("\nConsumo total da casa (KW): %f\n", consumo);

    return 0;
}
