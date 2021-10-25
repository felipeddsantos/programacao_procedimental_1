/*

Programação Procedimental I - Arquivos  
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: faça um programa que receba do usuário um arquivo texto e um caracter. Mostre na tela quantas vezes aquele caractere ocorre dentro do arquivo. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int cont = 0;
    char c, aux = "", nome[30];
    FILE *arq;

    printf("Insira o nome de um arquivo: ");
    gets(nome);

    arq = fopen(nome, "r");

    if(arq == NULL){
        
        printf("\nErro ao abrir o arquivo\n");
        exit(1);
    }

    printf("Insira um caractere: ");
    scanf("%c", &c);

    while(aux != EOF){

        aux = fgetc(arq);

        if(aux == c)

            cont++;
    }

    printf("\nO caractere %c aparece %i vezes no arquivo\n", c, cont);

    if(fclose(arq) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    return 0;
}
