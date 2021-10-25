/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 18: faça um programa que armazena filmes produzidos por vários diretores e:

* Crie e leia um vetor de 5 diretores, cada um contendo nome (máximo 20 letras), quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado após ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração;
* Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o processo até digitar uma string vazia.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct diretor Diretor;

struct Filme{

    int ano;
    float duracao;
    char nome[20];
};

struct diretor{

    int qntFilmes;
    char nome[20];
    struct Filme flm[20];
};

void imprimirFilme(Diretor d){

    printf("\nEsse diretor produziu %i filmes:\n", d.qntFilmes);

    for(int i = 0; i < d.qntFilmes; i++)

        printf("\nNome: %sAno de estreia: %i\nDuração: %f\n", d.flm[i].nome, d.flm[i].ano, d.flm[i].duracao);
}

int buscarNome(Diretor *d, char *nome){

    int encontrado = 0;

    for(int i = 0; i < 5; i++){
    
        if(!strcmp(d[i].nome, nome)){
        
            imprimirFilme(d[i]);

            encontrado = 1;
        }
    }

    return encontrado;
}

int main(){
    
    char nome[20];
    Diretor d[5];
    
    for(int i = 0; i < 5; i++){

        printf("\nInsira o nome do diretor %i: ", i + 1);
        fgets(d[i].nome, 20, stdin);

        printf("Insira a quantidade de filmes do diretor %i: ", i + 1);
        scanf("%i", &d[i].qntFilmes);

        setbuf(stdin, NULL);

        for(int j = 0; j < d[i].qntFilmes; j++){

            printf("\nInsira o nome do filme %i do diretor %i: ", j + 1, i + 1);
            fgets(d[i].flm[j].nome, 20, stdin);

            printf("Insira o ano de estreia do filme %i do diretor %i: ", j + 1, i + 1);
            scanf("%i", &d[i].flm[j].ano);

            printf("Insira a duração do filme %i do diretor %i: ", j + 1, i + 1);
            scanf("%f", &d[i].flm[j].duracao);

            setbuf(stdin, NULL);
        }
    }
    
    while(1){

        printf("\nInsira o nome de um diretor: ");
        fgets(nome, 20, stdin);

        if(!strcmp(nome, "\n"))

            return 0;
        
        if(!buscarNome(d, nome))

            printf("\nDiretor não encontrado\n");               
    }
}
