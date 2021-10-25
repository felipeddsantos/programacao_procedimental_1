/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.

*/

#include <stdio.h>
#include <stdlib.h>

struct Pessoa{

    int idade;
    char nome[50], endereco[50];
};

int main(){

    struct Pessoa p;
    
    setbuf(stdin, NULL);
    
    printf("Insira o nome: ");
    fgets(p.nome, 48, stdin);
        
    printf("Insira o endereco: ");
    fgets(p.endereco, 48, stdin);
        
    printf("Insira a idade: ");
    scanf("%i", &p.idade);
    
    printf("\nInformacoes lidas e armazenadas com sucesso\n");
    
    return 0;
}
