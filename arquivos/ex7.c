/*

Programação Procedimental I - Arquivos  
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: faça um programa que receba o nome de um arquivo de entrada e outro de saı́da. O arquivo de entrada contém em cada linha o nome de uma cidade (ocupando 40 caracteres) e o seu número de habitantes. O programa deverá ler o arquivo de entrada e gerar um arquivo de saı́da onde aparece o nome da cidade mais populosa seguida pelo seu número de habitantes.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int hab = 0, aux_hab;
    char nome1[30], nome2[30], cidade[40], aux_cidade[40];
    FILE *arq1, *arq2;
    
    printf("Insira o nome do arquivo de entrada: ");
    gets(nome1);

    arq1 = fopen(nome1, "rb");

    if(arq1 == NULL){
        
        printf("\nErro ao abrir o arquivo\n");
        exit(1);
    }

    printf("Insira o nome do arquivo de saída: ");
    gets(nome2);

    arq2 = fopen(nome2, "wb");

    if(arq2 == NULL){
        
        printf("\nErro ao abrir/criar o arquivo\n");
        exit(1);
    }

    while(fread(aux_cidade, sizeof(char), 40, arq1) == 40){

        if(!fread(&aux_hab, sizeof(int), 1, arq1)){
            
            printf("\nErro ao ler o arquivo\n");
            break;
        }

        if(aux_hab > hab){

            hab = aux_hab;
            strcpy(cidade, aux_cidade);
        }

        getc(arq1);
    }
    
    fwrite(cidade, sizeof(char), 40, arq2);
    fwrite(&hab, sizeof(int), 1, arq2);

    if(fclose(arq1) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    if(fclose(arq2) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    return 0;
}
