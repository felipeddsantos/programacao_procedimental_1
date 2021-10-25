/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 8: faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.

*/

#include <stdio.h>
#include <stdlib.h>

struct Registro{

    int idade, codigo;
    float salario;
    char sexo, nome[20], cpf[20], nascimento[20], cargo[30];
};

int main(){
    
    struct Registro r;
                
    printf("\nInsira o nome: ");
    fgets(r.nome, 20, stdin);

    printf("Insira o sexo: ");
    scanf("%c", &r.sexo);

    printf("Insira a idade: ");
    scanf("%i", &r.idade);

    setbuf(stdin, NULL);

    printf("Insira a data de nascimento: ");
    fgets(r.nascimento, 20, stdin);

    printf("Insira o CPF: ");
    fgets(r.cpf, 20, stdin);

    printf("Insira o cargo: ");
    fgets(r.cargo, 30, stdin);

    printf("Insira o salário: ");
    scanf("%f", &r.salario);

    printf("Insira o código do setor: ");
    scanf("%i", &r.codigo);

    printf("\nNome: %sSexo: %c\nIdade: %i\nData de nascimento: %sCPF: %sCargo: %sSalário: %f\nCódigo do setor: %i\n", r.nome, r.sexo, r.idade, r.nascimento, r.cpf, r.cargo, r.salario, r.codigo);

    return 0;
}
