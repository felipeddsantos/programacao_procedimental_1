/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até 10 alunos. Após ler todos os dados digitados, e depois de armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas médias finais (use uma média ponderada: Nota1 com peso 1 e Nota2 com peso 2).

*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno{

    float nota1, nota2;
    char nome[20], matricula[20], codigo[20];
};

int main(){
    
    int i;
    struct Aluno turma[10];

    for(i = 0; i < 2; i++){
    
        printf("\nInsira o nome do aluno %i: ", i + 1);
        fgets(turma[i].nome, 20, stdin);

        printf("Insira a matrícula do aluno %i: ", i + 1);
        fgets(turma[i].matricula, 20, stdin);

        printf("Insira o código da disciplina do aluno %i: ", i + 1);
        fgets(turma[i].codigo, 20, stdin);

        printf("Insira a primeira nota do aluno %i: ", i + 1);
        scanf("%f", &turma[i].nota1);

        printf("Insira a segunda nota do aluno %i: ", i + 1);
        scanf("%f", &turma[i].nota2);

        setbuf(stdin, NULL);
    }

    printf("\nInformações dos alunos inseridos:\n");

    for(i = 0; i < 2; i++)

        printf("\nNome: %sMatrícula: %sMédia final: %f\n", turma[i].nome, turma[i].matricula, (turma[i].nota1 + 2 * turma[i].nota2) / 3);

    return 0;
}
