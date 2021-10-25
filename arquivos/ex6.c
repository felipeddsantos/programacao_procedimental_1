/*

Programação Procedimental I - Arquivos  
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char c, nome1[30], nome2[30];
    FILE *arq1, *arq2, *arq3 = fopen("saida.txt", "w");

    if(arq3 == NULL){
        
        printf("\nErro ao criar/abrir o arquivo\n");
        exit(1);
    }

    printf("Insira o nome do primeiro arquivo: ");
    gets(nome1);

    arq1 = fopen(nome1, "r");

    if(arq1 == NULL){
        
        printf("\nErro ao abrir o arquivo\n");
        exit(1);
    }

    while((c = fgetc(arq1)) != EOF)

        if(fputc(c, arq3) == EOF){
            
            printf("\nErro ao escrever no arquivo\n");
            break;
        }

    printf("Insira o nome do segundo arquivo: ");
    gets(nome2);

    arq2 = fopen(nome2, "r");

    if(arq2 == NULL){
        
        printf("\nErro ao abrir o arquivo\n");
        exit(1);
    }

    while((c = fgetc(arq2)) != EOF)

        if(fputc(c, arq3) == EOF){
            
            printf("\nErro ao escrever no arquivo\n");
            break;
        }

    if(fclose(arq1) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    if(fclose(arq2) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    if(fclose(arq3) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    return 0;
}
