/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 12: faça um programa que leia um vetor com dados de 5 livros: tı́tulo (máximo 30 letras), autor (máximo 15 letras) e ano. Procure um livro por tı́tulo, perguntando ao usuário qual tı́tulo deseja buscar. Mostre os dados de todos os livros encontrados.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro{

    int ano;
    char titulo[30], autor[15];
};

int main(){
    
    int encontrado = 0;
    char titulo[30];
    struct Livro l[5];

    for(int i = 0; i < 5; i++){
    
        printf("\nInsira o título do livro %i: ", i + 1);
        fgets(l[i].titulo, 30, stdin);

        printf("Insira o autor do livro %i: ", i + 1);
        fgets(l[i].autor, 15, stdin);

        printf("Insira o ano de publicação do livro %i: ", i + 1);
        scanf("%i", &l[i].ano);

        setbuf(stdin, NULL);
    }

    printf("\nInsira o título do livro a ser squisado: ");
    fgets(titulo, 30, stdin);

    printf("\nLivros com o título inserido:\n");

    for(int i = 0; i < 5; i++){

        if(!strcmp(l[i].titulo, titulo)){

            printf("\nTítulo: %sAutor: %sAno: %i\n", l[i].titulo, l[i].autor, l[i].ano);

            encontrado = 1;
        }
    }

    if(!encontrado)

        printf("\nNenhum livro encontrado\n");
}
