/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 11: crie um programa que declare uma estrutura para o cadastro de alunos:

* Deverão ser armazenados, para cada aluno: matrı́cula, sobrenome e ano de nascimento;
* Ao inı́cio do programa, o usuário deverá informar o número de alunos que serão armazenados;
* O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar os registros;
* O programa deverá pedir ao usuário que entre com as informações dos alunos.
* Ao final, mostrar os dados armazenados e liberar a memória alocada.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno aluno;

struct Aluno{

    int ano;
    char sobrenome[21], matricula[21];
};

int main(){
    
    int i, N;
    aluno *alunos;

    printf("Insira a quantidade de alunos: ");
    scanf("%i", &N);

    alunos = (aluno *) malloc(N * sizeof(aluno));

    if(alunos == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(i = 0; i < N; i++){

        setbuf(stdin, NULL);

        printf("\nInsira o sobrenome do aluno %i: ", i + 1);
        fgets(alunos[i].sobrenome, 20, stdin);

        printf("Insira a matricula do aluno %i: ", i + 1);
        fgets(alunos[i].matricula, 20, stdin);

        printf("Insira o ano de nascimento do aluno %i: ", i + 1);
        scanf("%i", &alunos[i].ano);
    }
    
    printf("\nAlunos inseridos:\n\n");

    for(i = 0; i < N; i++){

        printf("%s", alunos[i].sobrenome);
        printf("%s", alunos[i].matricula);
        printf("%i\n\n", alunos[i].ano);
    }

    free(alunos);
        
    return 0;
}
