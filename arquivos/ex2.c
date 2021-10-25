/*

Programação Procedimental I - Arquivos  
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse arquivo possui.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int linhas = 0;
    char c = "", nome[30];
    FILE *arq;

    printf("Insira o nome de um arquivo: ");
    gets(nome);

    arq = fopen(nome, "r");

    if(arq == NULL){
        
        printf("\nErro ao abrir o arquivo\n");
        exit(1);
    }

    while(c != EOF){

        c = fgetc(arq);

        if(c == '\n')

            linhas++;
    }

    printf("\nO arquivo possui %i linhas\n", linhas);

    if(fclose(arq) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    return 0;
}
