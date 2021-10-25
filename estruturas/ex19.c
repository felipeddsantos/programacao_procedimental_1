/*

Exercício 19: definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com os tipos básicos necessários.

* Crie um vetor Cadastro com 5 elementos;
* Permita ao usuário entrar com dados para preencher esse 5 cadastros;
* Encontre a pessoa com maior idade entre os cadastrados;
* Encontre as pessoas do sexo masculino;
* Encontre as pessoas com salário maior que 1000;
* Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuário.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro Cadastro;

struct Endereco{
 
    char rua[30], bairro[30], cidade[30], estado[30], cep[20];
};

struct cadastro{

    int idade;
    float salario;
    char sexo, nome[50], telefone[20], identidade[20], cpf[20], estadoCivil[20];
    struct Endereco end;
};

void imprimir(Cadastro c){

    printf("\nNome: %sIdade: %i\nSexo: %c\nIdentidade: %sCPF: %sEstado civil: %sTelefone: %sRua: %sBairro: %sCidade: %sEstado: %sCEP: %sSalário: %f\n", c.nome, c.idade, c.sexo, c.identidade, c.cpf, c.estadoCivil, c.telefone, c.end.rua, c.end.bairro, c.end.cidade, c.end.estado, c.end.cep, c.salario);
}

void buscarVelhos(Cadastro *c){

    int i, maior = c[i].idade;

    for(i = 0; i < 5; i++)

        if(c[i].idade > maior)

            maior = c[i].idade;

    for(i = 0; i < 5; i++)
    
        if(c[i].idade == maior)
        
            imprimir(c[i]);
}

void buscarMasculino(Cadastro *c){

    for(int i = 0; i < 5; i++)
    
        if(c[i].sexo == 'm' || c[i].sexo == 'M')
        
            imprimir(c[i]);
}

void buscarSalario(Cadastro *c){

    for(int i = 0; i < 5; i++)
    
        if(c[i].salario > 1000)
        
            imprimir(c[i]);
}

void buscarIdentidade(Cadastro *c, char *identidade){

    for(int i = 0; i < 5; i++)
    
        if(!strcmp(c[i].identidade, identidade))
        
            imprimir(c[i]);
}

int main(){
    
    int op;
    char identidade[20];
    Cadastro c[5];

    for(int i = 0; i < 5; i++){

        printf("\nInsira o nome da pessoa %i: ", i + 1);
        fgets(c[i].nome, 50, stdin);

        printf("Insira o sexo da pessoa %i: ", i + 1);
        scanf("%c", &c[i].sexo);

        printf("Insira a idade da pessoa %i: ", i + 1);
        scanf("%i", &c[i].idade);

        setbuf(stdin, NULL);

        printf("Insira a identidade da pessoa %i: ", i + 1);
        fgets(c[i].identidade, 20, stdin);

        printf("Insira o CPF da pessoa %i: ", i + 1);
        fgets(c[i].cpf, 20, stdin);

        printf("Insira o estado civil da pessoa %i: ", i + 1);
        fgets(c[i].estadoCivil, 20, stdin);

        printf("Insira o telefone da pessoa %i: ", i + 1);
        fgets(c[i].telefone, 20, stdin);

        printf("Insira a rua da pessoa %i: ", i + 1);
        fgets(c[i].end.rua, 30, stdin);

        printf("Insira o bairro da pessoa %i: ", i + 1);
        fgets(c[i].end.bairro, 30, stdin);

        printf("Insira a cidade da pessoa %i: ", i + 1);
        fgets(c[i].end.cidade, 30, stdin);

        printf("Insira o estado da pessoa %i: ", i + 1);
        fgets(c[i].end.estado, 30, stdin);

        printf("Insira o CEP da pessoa %i: ", i + 1);
        fgets(c[i].end.cep, 20, stdin);

        printf("Insira o salário da pessoa %i: ", i + 1);
        scanf("%f", &c[i].salario);

        setbuf(stdin, NULL);
    }
    
    while(1){

        printf("\nInsira uma opção:\n\n(1) Buscar pessoa por identidade\n(2) Buscar pessoas que tenham salário maior que 1000\n(3) Buscar pessoas do sexo masculino\n(4) Buscar as pessoas mais velhas\n(5) Sair\n\n");
        scanf("%i", &op);
    
        switch(op){
    
            case 1:

                setbuf(stdin, NULL);

                printf("\nInsira a identidade a ser buscada: ");
                fgets(identidade, 20, stdin);

                buscarIdentidade(c, identidade);
                
                break;
        
            case 2:

                buscarSalario(c);

                break;
        
            case 3:

                buscarMasculino(c);
                
                break;
        
            case 4:

                buscarVelhos(c);

                break;
        
            case 5:

                return 0;
        
            default:
            
                printf("Opção invalida\n");
        }
    }
}
