/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno{

    char nome[50], matricula[20], curso[20];
};

void imprime(struct Aluno a){

    printf("Nome: %s", a.nome);
    printf("Matricula: %s", a.matricula);
    printf("Curso: %s\n", a.curso);
}

int main(){

    struct Aluno alunos[5];
    
    for(i = 0; i < 5; i++){
    
        setbuf(stdin, NULL);
    
        printf("Insira o nome do aluno %i: ", i + 1);
        fgets(alunos[i].nome, 48, stdin);
        
        printf("Insira a matricula do aluno %i: ", i + 1);
        fgets(alunos[i].matricula, 18, stdin);
        
        printf("Insira o curso do aluno %i: ", i + 1);
        fgets(alunos[i].curso, 18, stdin);
    }
    
    printf("\nInformacoes dos alunos inseridos:\n\n");
    
    for(i = 0; i < 5; i++)
    
        imprime(aluno[i]); 
    
    return 0;
}
