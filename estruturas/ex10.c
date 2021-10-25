/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 10: utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e telefone de 5 pessoas e os imprima em ordem alfabética.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Registro{

    char nome[20], endereco[20], telefone[20];
};

void inserir(struct Registro *r, struct Registro nova, int qnt){

    if(qnt > 0){

        for(int i = 0; i <= qnt; i++){

            if(strcmp(r[i].nome, nova.nome) > 0){

                for(int j = qnt; j > i; j--)

                    r[j] = r[j - 1];

                r[i] = nova;

                break;
            }

            if(i == qnt){

                r[qnt] = nova;

                break;
            }
        }
    }

    else

        r[0] = nova;    
}

int main(){
    
    struct Registro r[5], aux;

    for(int i = 0; i < 5; i++){
                
        printf("\nInsira o nome da pessoa %i: ", i + 1);
        fgets(aux.nome, 20, stdin);

        printf("Insira o endereço da pessoa %i: ", i + 1);
        fgets(aux.endereco, 20, stdin);

        printf("Insira o telefone da pessoa %i: ", i + 1);
        fgets(aux.telefone, 20, stdin);

        inserir(r, aux, i);
    }
    
    printf("\nInformações inseridas em ordem alfabética de nome:\n");

    for(int i = 0; i < 5; i++)

        printf("\nNome: %sEndereço: %sTelefone: %s", r[i].nome, r[i].endereco, r[i].telefone);

    return 0;
}
