/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: faça um programa que simule a memória de um computador: o usuário irá especificar o tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto, a memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida, o usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o valor contido em uma determinada posição. A memória deve iniciar com todos os dados zerados.

*/

#include <stdio.h>
#include <stdlib.h>

void tamanhoMemoria(int *tam){

    while(1){

        printf("Insira o tamanho da memória (em bytes): ");
        scanf("%i", tam);

        if(*tam % sizeof(int))

            printf("\nO tamanho da memória deve ser múltiplo de 4 bytes\n\n");
        
        else

            break;
    }
}

void construirMemoria(int *mem, int tam){

    for(int i = 0; i < tam; i++)

        mem[i] = 0;
}

void inserirValor(int *mem, int tam, int val, int pos){

    if(pos >= tam)

        printf("\nPosição inexistente\n");
    
    else{

        mem[pos] = val;

        printf("\nValor inserido com sucesso\n");
    }
}

void procurarValor(int *mem, int tam, int pos){

    if(pos >= tam)

        printf("\nPosição inexistente\n");
    
    else

        printf("\nValor da posição %i: %i\n", pos, mem[pos]);
}

int main(){
    
    int tam, *mem;

    tamanhoMemoria(&tam);
    tam = tam / sizeof(int);

    mem = (int *) malloc(tam * sizeof(int));
    
    if(mem == NULL){

        printf("\nMemória insuficiente\n");
        return 1;
    }

    construirMemoria(mem, tam);

    while(1){

        int op, val, pos;

        printf("\nInsira uma opção: \n\nInserir valor (1)\nConsultar valor (2)\nSair (3)\n\n");
        scanf("%i", &op);

        switch(op){

            case 1:

                printf("\nInsira o valor: ");
                scanf("%i", &val);

                printf("Insira a posição: ");
                scanf("%i", &pos);

                inserirValor(mem, tam, val, pos);
                
                break;
        
            case 2:

                printf("\nInsira a posição: ");
                scanf("%i", &pos);

                procurarValor(mem, tam, pos);
                
                break;
        
            case 3:

                free(mem);

                return 0;
                
                break;
            
            default:

                printf("\nOpção inexistente\n");

                break;
        }
    }
}
