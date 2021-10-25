/*

Programação Procedimental I - Arquivos  
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto contendo o texto do arquivo de entrada, mas com as vogais substituı́das por '*'.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char c, aux = "", nome[30];
    FILE *in, *out;

    printf("Insira o nome do arquivo de entrada: ");
    gets(nome);

    in = fopen(nome, "r");

    if(in == NULL){
        
        printf("\nErro ao abrir o arquivo\n");
        exit(1);
    }

    out = fopen("saida.txt", "w");

    if(out == NULL){
        
        printf("\nErro ao abrir/criar o arquivo\n");
        exit(1);
    }

    while(aux != EOF){

        aux = fgetc(in);

        if(aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u' || aux == 'A' || aux == 'E' || aux == 'I' || aux == 'O' || aux == 'U')

            aux = '*';

        if(fputc(aux, out) == EOF){

            printf("\nErro ao escrever no arquivo\n");
            break;
        }
    }

    if(fclose(in) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    if(fclose(out) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    return 0;
}
