/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 17: faça um programa para associar nomes as linhas de uma matriz de caracteres. O usuário irá informar o número máximo de nomes que poderão ser armazenados. Cada nome poderá ter até 30 caracteres com o '\0'. O usuário poderá usar 5 opções diferentes para manipular a matriz:

* Gravar um nome em uma linha da matriz;
* Apagar o nome contido em uma linha da matriz;
* Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome;
* Informar um nome, procurar a linha onde ele se encontra e apagar;
* Pedir para recuperar o nome contido em uma linha da matriz.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializarNomes(char **nomes, int qnt){

    for(int i = 0; i < qnt; i++)

        nomes[i][0] = '\0';
}

int inserirNome(char **nomes, int qnt, char *nome, int linha){

    int i;

    if(linha >= qnt)

        return 1;
    
    strcpy(nomes[linha], nome);

    return 0;
}

int removerLinha(char **nomes, int qnt, int linha){

    if(linha >= qnt)

        return 1;
    
    nomes[linha][0] = '\0';

    return 0;
}

int substituirNome(char **nomes, int qnt, char *nome, char *novo_nome){

    for(int i = 0; i < qnt; i++)

        if(!strcmp(nomes[i], nome)){

            strcpy(nomes[i], novo_nome);

            return 0;
        }

    return 1;
}

int removerNome(char **nomes, int qnt, char *nome){

    for(int i = 0; i < qnt; i++)

        if(!strcmp(nomes[i], nome)){

            nomes[i][0] = '\0';

            return 0;
        }

    return 1;
}

int procurarNome(char **nomes, int qnt, int linha){
    
    return (linha >= qnt) || (nomes[linha][0] == '\0');
}

void imprimirNomes(char **nomes, int qnt){

    for(int i = 0; i < qnt; i++){

        if(nomes[i][0] == '\0')

            printf("\nPosição Vazia");
        
        else
    
            printf("\n%s", nomes[i]);
    }
}

int main(){
    
    int i, qnt;
    char **nomes;

    printf("Insira a quantidade máxima de nomes: ");
    scanf("%i", &qnt);

    nomes = (char **) malloc(qnt * sizeof(char *));

    if(nomes == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(i = 0; i < qnt; i++){

        nomes[i] = (char *) malloc(31 * sizeof(char));

        if(nomes[i] == NULL){
        
            printf("\nMemória insuficiente\n");
            return 1;
        }
    }

    inicializarNomes(nomes, qnt);

    while(1){

        int op, linha;
        char nome[31], novo_nome[31];
    
        printf("\nInsira uma opção: \n\nInserir nome (1)\nRemover nome por posição (2)\nSubstituir nome (3)\nRemover nome (4)\nProcurar nome (5)\nImprimir nomes (6)\nSair (7)\n\n");
        scanf("%i", &op);
        setbuf(stdin, NULL);

        switch(op){

            case 1:

                printf("\nInsira o nome (máximo de 30 caracteres): ");
                fgets(nome, 30, stdin);

                printf("Insira a linha: ");
                scanf("%i", &linha);

                if(inserirNome(nomes, qnt, nome, linha - 1))

                    printf("\nLinha fora dos limites da lista");
                
                else
               
                    printf("\nNome inserido com sucesso");
            
                break;
            
            case 2:

                printf("\nInsira a linha: ");
                scanf("%i", &linha);

                if(removerLinha(nomes, qnt, linha - 1))

                    printf("\nLinha fora dos limites da lista");
                
                else
               
                    printf("\nNome removido com sucesso");

                break;

            case 3:

                printf("\nInsira o nome a ser substituido (máximo de 30 caracteres): ");
                fgets(nome, 30, stdin);

                printf("\nInsira o novo nome (máximo de 30 caracteres): ");
                fgets(novo_nome, 30, stdin);

                if(substituirNome(nomes, qnt, nome, novo_nome))

                    printf("\nO nome inserido não pertence a lista");
                
                else
               
                    printf("\nNome substituído com sucesso");

                break;

            case 4:

                printf("\nInsira o nome (máximo de 30 caracteres): ");
                fgets(nome, 30, stdin);

                if(removerNome(nomes, qnt, nome))

                    printf("\nO nome inserido não pertence a lista");
                
                else
               
                    printf("\nNome removido com sucesso");

                break;

            case 5:

                printf("\nInsira a linha: ");
                scanf("%i", &linha);

                if(procurarNome(nomes, qnt, linha - 1))

                    printf("\nLinha fora dos limites da lista ou nome inexistente");
                
                else
               
                    printf("\nNome na posição %i: %s", linha, nomes[linha - 1]);

                break;
            
            case 6:

                printf("\nLista de nomes:");
                imprimirNomes(nomes, qnt);

                break;

            case 7:

                for(i = 0; i < qnt; i++)

                    free(nomes[i]);
                
                free(nomes);

                return 0;
        
            default:

                printf("\nOpção inexistente\n");

                break;
        }
    }
}
