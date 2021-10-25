/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 16: faça um programa que controle o fluxo de vôos nos aeroportos de um paı́s. Com 5 vôos e 5 aeroportos:

* Crie e leia um vetor de vôos, sendo que cada vôo contém um código de aeroporto de origem e um de destino;
* Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade de voos que saem e quantidade de voos que chegam;
* Cada aeroporto é identificado por um código inteiro entre 0 e 4. Não aceite aeroportos de código inexistente.

*/

#include <stdio.h>
#include <stdlib.h>

struct Aeroporto{

    int codigo, qntSaem, qntChegam;
};

struct Voo{

    int origem, destino;
};

int main(){
    
    int i;
    struct Aeroporto a[5];
    struct Voo v[5];

    for(i = 0; i < 5; i++){

        while(1){

            printf("\nInsira o código do aeroporto %i: ", i + 1);
            scanf("%i", &a[i].codigo);

            if(a[i].codigo > 4 || a[i].codigo < 0)
                
                printf("\nCódigo inválido. Insira algo entre 0 e 4");
            
            else
    
                break;
        }

        printf("Insira a quantidade de voos que chegam ao aeroporto %i: ", i + 1);
        scanf("%i", &a[i].qntChegam);

        printf("Insira a quantidade de voos que saem do aeroporto %i: ", i + 1);
        scanf("%i", &a[i].qntSaem);

        while(1){

            printf("\nInsira o código do aeroporto de origem do voo %i: ", i + 1);
            scanf("%i", &v[i].origem);

            if(v[i].origem > 4 || v[i].origem < 0)
                
                printf("\nCódigo inválido. Insira algo entre 0 e 4");
            
            else
    
                break;
        }

        while(1){

            printf("\nInsira o código do aeroporto de destino do voo %i: ", i + 1);
            scanf("%i", &v[i].destino);

            if(v[i].destino > 4 || v[i].destino < 0)
                
                printf("\nCódigo inválido. Insira algo entre 0 e 4");
            
            else
    
                break;
        }
    }
    
    printf("\n");
        
    return 0;
}
