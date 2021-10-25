/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 21: fazer um programa para simular uma agenda de telefones. Para cada pessoa, devem-se ter os seguintes dados: Nome, E-mail, Endereço (contendo campos para rua, numero, complemento, bairro, cep, cidade, estado e pais), Telefone (contendo campo para DDD e numero), Data de aniversário (contendo campo para dia, mes, ano) e observacoes (uma linha para alguma observação especial).

* Definir a estrutura acima;
* Declarar a variável agenda com capacidade de agendar até 100 nomes;
* Definir um bloco de instruções busca por primeiro nome: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas);
* Definir um bloco de instruções busca por mes de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse mes;
* Definir um bloco de instruções busca por dia e mes de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse dia e mes;
* Definir um bloco de instruções insere pessoa: Insere por ordem alfabética de nome;
* Definir um bloco de instruções retira pessoa: Retira todos os dados dessa pessoa e desloca todos os elementos seguintes do vetor para a posição anterior;
* Definir um bloco de instruções imprime agenda com as opções: Imprime nome, telefone e e-mail e Imprime todos os dados;
* O programa deve ter um menu principal oferecendo as opções acima.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa Pessoa;

struct Data{

    int dia, mes, ano;
};

struct Telefone{

    int ddd;
    char numero[20];
};

struct Endereço{

    int numero;
    char rua[30], complemento[30], bairro[30], cidade[30], estado[30], pais[30], cep[20];
};

struct pessoa{

    char nome[50], observacoes[50], email[30];
    struct Endereço end;
    struct Telefone tel;
    struct Data niver;
};

void imprimirTudo(Pessoa p){

    printf("\nNome: %sE-mail: %sRua: %snumero: %i\nComplemento: %sBairro: %sCEP: %sCidade: %sEstado: %spais: %sTelefone: (%i) %sData de aniversário: %i/%i/%i\nobservacoes: %s", p.nome, p.email, p.end.rua, p.end.numero, p.end.complemento, p.end.bairro, p.end.cep, p.end.cidade, p.end.estado, p.end.pais, p.tel.ddd, p.tel.numero, p.niver.dia, p.niver.mes, p.niver.ano, p.observacoes);
}

void imprimirNome(Pessoa p){
    
    printf("\nNome: %sE-mail: %sTelefone: (%i) %s", p.nome, p.email, p.tel.ddd, p.tel.numero);
}

void imprimirAgenda(Pessoa *agenda, int qnt, int op){

    if(op)

        for(int i = 0; i < qnt; i++)

            imprimirTudo(agenda[i]);
    
    else

        for(int i = 0; i < qnt; i++)

            imprimirNome(agenda[i]);
}

void inserir(Pessoa *agenda, Pessoa p, int *qnt){

    if(*qnt > 0){

        for(int i = 0; i <= *qnt; i++){

            if(strcmp(agenda[i].nome, p.nome) > 0){

                for(int j = *qnt; j > i; j--)

                    agenda[j] = agenda[j - 1];

                agenda[i] = p;

                break;
            }

            if(i == *qnt){

                agenda[*qnt] = p;

                break;
            }
        }
    }

    else

        agenda[0] = p;
    
    (*qnt)++;
}

void retirar(Pessoa *agenda, char *nome, int *qnt){

    for(int i = 0; i < *qnt; i++){

        if(!strcmp(agenda[i].nome, nome)){

            (*qnt)--;

            for(int j = i; j <= *qnt; j++)                    

                agenda[j] = agenda[j + 1];

            break;
        }
    }
}

void buscarNome(Pessoa *agenda, char *nome, int qnt){

    int iguais = 1;

    for(int i = 0; i < qnt; i++){
    
        for(int j = 0; agenda[i].nome[j] != ' ' && agenda[i].nome[j] != '\n'; j++){
        
            if(agenda[i].nome[j] != nome[j]){

                iguais = 0;
                
                break;
            }
        }
        
        if(iguais)
        
            imprimirTudo(agenda[i]);
        
        iguais = 1;
    }
}

void buscarmes(Pessoa *agenda, int mes, int qnt){

    for(int i = 0; i < qnt; i++)
    
        if(agenda[i].niver.mes == mes)
        
            imprimirTudo(agenda[i]);
}

void buscarDiames(Pessoa *agenda, int dia, int mes, int qnt){

    for(int i = 0; i < qnt; i++)
    
        if(agenda[i].niver.mes == mes && agenda[i].niver.dia == dia)
        
            imprimirTudo(agenda[i]);
}

int main(){
    
    int op, dia, mes, qnt = 0;
    char nome[50];
    Pessoa p, agenda[100];
    
    while(1){

        printf("\nInsira uma opção:\n\n(1) Buscar pessoa por primeiro nome\n(2) Buscar pessoa por mes de aniversário\n(3) Buscar pessoa por dia e mes de aniversário\n(4) Inserir pessoa na agenda\n(5) Retirar pessoa da agenda\n(6) Imprimir nome, telefone e e-mail de todas as pessoas da agenda\n(7) Imprimir todos os dados de todas as pessoas da agenda\n(8) Sair\n\n");
        scanf("%i", &op);
    
        switch(op){
    
            case 1:

                if(qnt > 0){

                    setbuf(stdin, NULL);

                    printf("\nInsira o primeiro nome a ser buscado: ");
                    fgets(nome, 50, stdin);

                    buscarNome(agenda, nome, qnt);
                }

                else
                    
                    printf("Agenda vazia\n");
                
                break;
        
            case 2:

                if(qnt > 0){

                    printf("\nInsira o mes a ser buscado: ");
                    scanf("%i", &mes);

                    buscarmes(agenda, mes, qnt);
                }

                else

                    printf("Agenda vazia\n");

                break;
        
            case 3:

                if(qnt > 0){
                
                    printf("\nInsira o dia a ser buscado: ");
                    scanf("%i", &dia);

                    printf("Insira o mes a ser buscado: ");
                    scanf("%i", &mes);

                    buscarDiames(agenda, dia, mes, qnt);
                }

                else
                
                    printf("Agenda vazia\n");
                
                break;
        
            case 4:

                if(qnt < 100){
                
                    setbuf(stdin, NULL);
                
                    printf("\nInsira o nome: ");
                    fgets(p.nome, 50, stdin);

                    printf("Insira o dia de nascimento: ");
                    scanf("%i", &p.niver.dia);

                    printf("Insira o mes de nascimento: ");
                    scanf("%i", &p.niver.mes);

                    printf("Insira o ano de nascimento: ");
                    scanf("%i", &p.niver.ano);

                    setbuf(stdin, NULL);

                    printf("Insira o e-mail: ");
                    fgets(p.email, 30, stdin);
                
                    printf("Insira o DDD do telefone: ");
                    scanf("%i", &p.tel.ddd);

                    setbuf(stdin, NULL);

                    printf("Insira o telefone: ");
                    fgets(p.tel.numero, 20, stdin);

                    printf("Insira a rua: ");
                    fgets(p.end.rua, 30, stdin);

                    printf("Insira o numero: ");
                    scanf("%i", &p.end.numero);

                    setbuf(stdin, NULL);

                    printf("Insira o complemento: ");
                    fgets(p.end.complemento, 30, stdin);

                    printf("Insira o CEP: ");
                    fgets(p.end.cep, 20, stdin);

                    printf("Insira o bairro: ");
                    fgets(p.end.bairro, 30, stdin);

                    printf("Insira a cidade: ");
                    fgets(p.end.cidade, 30, stdin);

                    printf("Insira o estado: ");
                    fgets(p.end.estado, 30, stdin);

                    printf("Insira o pais: ");
                    fgets(p.end.pais, 30, stdin);

                    printf("Insira alguma observacao: ");
                    fgets(p.observacoes, 50, stdin);

                    inserir(agenda, p, &qnt);
                }

                else
                
                    printf("Agenda cheia\n");

                break;
        
            case 5:

                if(qnt > 0){
                
                    setbuf(stdin, NULL);

                    printf("\nInsira o nome completo da pessoa a ser retirada: ");
                    fgets(nome, 50, stdin);

                    retirar(agenda, nome, &qnt);
                }

                else
                
                    printf("Agenda vazia\n");
                
                break;
        
            case 6:

                if(qnt > 0)
                
                    imprimirAgenda(agenda, qnt, 0);

                else
                
                    printf("Agenda vazia\n");
                
                break;
        
            case 7:

                if(qnt > 0)
                
                    imprimirAgenda(agenda, qnt, 1);

                else
                
                    printf("Agenda vazia\n");
                
                break;
        
            case 8:

                return 0;
        
            default:
            
                printf("Opcao invalida\n");
        }
    }
}
