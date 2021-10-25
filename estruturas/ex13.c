/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 13: faça um programa que seja uma agenda de compromissos:

* Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
* Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o procedimento até ler M = 0.

*/

#include <stdio.h>
#include <stdlib.h>

struct Data{

    int dia, mes, ano;
};

struct Compromisso{

    char descricao[60];
    struct Data d;
};

int main(){
    
    int i, M, A, encontrado = 0;
    struct Compromisso agenda[5];

    for(i = 0; i < 5; i++){
    
        printf("\nInsira a descrição do compromisso %i: ", i + 1);
        fgets(agenda[i].descricao, 60, stdin);

        printf("Insira o dia do compromisso %i: ", i + 1);
        scanf("%i", &agenda[i].d.dia);

        printf("Insira o mês do compromisso %i: ", i + 1);
        scanf("%i", &agenda[i].d.mes);

        printf("Insira o ano do compromisso %i: ", i + 1);
        scanf("%i", &agenda[i].d.ano);

        setbuf(stdin, NULL);
    }

    while(1){

        printf("\nInsira o mês a ser pesquisado: ");
        scanf("%i", &M);

        if(M == 0)

            return 0;

        printf("\nInsira o ano a ser pesquisado: ");
        scanf("%i", &A);

        printf("\nCompromissos dessa data:\n");

        for(i = 0; i < 5; i++){

            if(agenda[i].d.mes == M && agenda[i].d.ano == A){

                printf("\nCompromisso: %s", agenda[i].descricao);

                encontrado = 1;
            }
        }

        if(!encontrado)

            printf("\nSem compromissos para essa data\n");
    }
}
