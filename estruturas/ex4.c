/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.

* Permita ao usuário entrar com os dados de 5 alunos;
* Encontre o aluno com maior nota da primeira prova;
* Encontre o aluno com maior média geral;
* Encontre o aluno com menor média geral;
* Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.

*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno{

    char nome[50], matricula[15];
    float notas[3], media;
};

void media(struct Aluno *a){

    a->media = (a->notas[0] + a->notas[1] + a->notas[2]) / 3;
}

void maiorP1(struct Aluno *alunos, struct Aluno *maior){

    *maior = alunos[0];
    
    for(int i = 0; i < 5; i++)
    
        if(alunos[i].notas[0] > maior->notas[0])
            
            *maior = alunos[i];
}

void maiorMenor(struct Aluno *alunos, struct Aluno *maior, struct Aluno *menor){

    *maior = *menor = alunos[0];
    
    for(int i = 0; i < 5; i++){ 
    
        if(alunos[i].media > maior->media)
            
            *maior = alunos[i];
            
        if(alunos[i].media < menor->media)
            
            *menor = alunos[i];
    }
}

int main(){

    int i, j;
    struct Aluno alunos[5], aluno1, aluno2, aluno3;
    
    for(i = 0; i < 5; i++){
    
        setbuf(stdin, NULL);
    
        printf("Insira o nome do aluno %i: ", i + 1);
        fgets(alunos[i].nome, 47, stdin);
        
        printf("Insira a matricula do aluno %i: ", i + 1);
        fgets(alunos[i].matricula, 13, stdin);
        
        for(j = 0; j < 3; j++){
        
            printf("Insira o nota %i do aluno %i: ", j + 1, i + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
        
        media(&alunos[i]);
    }
    
    maiorP1(alunos, &aluno1);
    maiorMenor(alunos, &aluno2, &aluno3);
                
    printf("\nO aluno com a maior nota na primeira prova tem matricula %s", aluno1.matricula);
    printf("O aluno com a maior media geral tem matricula %s", aluno2.matricula);
    printf("O aluno com a menor media geral tem matricula %s", aluno3.matricula);
    
    for(i = 0; i < 5; i++){
    
        if(aluno[i].media >= 6)
        
            printf("\nO aluno de matricula %s foi aprovado", aluno[i].matricula);
        
        else
        
            printf("\nO aluno de matricula %s foi reprovado", aluno[i].matricula);   
    }
    
    printf("\n");
       
    return 0;
}
