/*

Programação Procedimental I - Arquivos  
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: escreva um programa que:

* Crie/abra um arquivo texto de nome “arq.txt”;
* Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere '0';
* Feche o arquivo.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char c;
    FILE *arq = fopen("arq.txt", "w");

    if(arq == NULL){
        
        printf("\nErro ao abrir/criar o arquivo\n");
        exit(1);
    }

    while(1){

        printf("Insira um caractere: ");
        scanf("%c", &c);
        getchar();

        if(c == '0')

            break;

        if(fputc(c, arq) == EOF){

            printf("\nErro ao escrever no arquivo\n");
            break;
        }
    }

    if(fclose(arq) != 0){

        printf("\nErro ao fechar o arquivo\n");
        return 1;
    }

    return 0;
}
