/*

Programação Procedimental I - Arquivos  
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: faça um programa que leia o conteúdo de um arquivo e crie um arquivo com o mesmo conteúdo, mas com todas as letras minúsculas convertidas para maiúsculas. Os nomes dos arquivos serão fornecidos, via teclado, pelo usuário. A função que converte maiúscula para minúscula é o toupper(). Ela é aplicada em cada caractere da string.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char c = "", nome_in[30], nome_out[30];
    FILE *in, *out;

    printf("Insira o nome do arquivo de entrada: ");
    gets(nome_in);

    in = fopen(nome_in, "r");

    if(in == NULL){
        
        printf("\nErro ao abrir o arquivo\n");
        exit(1);
    }

    printf("Insira o nome do arquivo de saída: ");
    gets(nome_out);

    out = fopen(nome_out, "w");

    if(out == NULL){
        
        printf("\nErro ao abrir/criar o arquivo\n");
        exit(1);
    }

    while(c != EOF){

        c = fgetc(in);

        if(islower(c))

            c = toupper(c);

        if(fputc(c, out) == EOF){

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
