/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 17: faça um programa para armazenar um livro de receitas e:

* Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de ingredientes e ingredientes;
* Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor de ingredientes, sendo que cada ingrediente contém nome e quantidade;
* Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar, informe ao usuário. Repita o processo até digitar uma string vazia.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct receita Receita;

struct Ingrediente{

    float qnt;
    char nome[20];
};

struct receita{

    int qntIngredientes;
    char nome[20];
    struct Ingrediente ingd[20];
};

void imprimirReceita(Receita r){

    printf("\nEssa receita possui %i ingredientes:\n", r.qntIngredientes);

    for(int i = 0; i < r.qntIngredientes; i++)

        printf("\nIngrediente: %sQuantidade: %f\n", r.ingd[i].nome, r.ingd[i].qnt);
}

int buscarReceita(Receita *livro, char *nome){

    int encontrado = 0;

    for(int i = 0; i < 5; i++){
    
        if(!strcmp(livro[i].nome, nome)){
        
            imprimirReceita(livro[i]);

            encontrado = 1;
        }
    }

    return encontrado;
}

int main(){
    
    char nome[20];
    Receita livro[5];
    
    for(int i = 0; i < 5; i++){

        printf("\nInsira o nome da receita %i: ", i + 1);
        fgets(livro[i].nome, 20, stdin);

        printf("Insira a quantidade de ingredientes da receita %i: ", i + 1);
        scanf("%i", &livro[i].qntIngredientes);

        setbuf(stdin, NULL);

        for(int j = 0; j < livro[i].qntIngredientes; j++){

            printf("\nInsira o nome do ingrediente %i da receita %i: ", j + 1, i + 1);
            fgets(livro[i].ingd[j].nome, 20, stdin);

            printf("Insira a quantidade do ingrediente %i da receita %i: ", j + 1, i + 1);
            scanf("%f", &livro[i].ingd[j].qnt);

            setbuf(stdin, NULL);
        }
    }
    
    while(1){

        printf("\nInsira o nome de uma receita: ");
        fgets(nome, 20, stdin);

        if(!strcmp(nome, "\n"))

            return 0;
        
        if(!buscarReceita(livro, nome))

            printf("\nReceita não encontrada\n");               
    }
}
