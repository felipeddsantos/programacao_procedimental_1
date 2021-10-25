/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){  

    int idade;
    char nome[30], sexo[12];
    
    printf("Insira o nome: ");
    fgets(nome, 29, stdin);
    
    printf("Insira o sexo (somente letras minusculas): ");
    fgets(sexo, 11, stdin);
    
    printf("Insira a idade: ");
    scanf("%i", &idade);
    
    if(strcmp(sexo,"feminino\n") == 0 && idade < 25)
    
        printf("\n%sACEITA\n", nome);
    
    else
    
        printf("\nNao aceita\n");
        
    return 0;
}
