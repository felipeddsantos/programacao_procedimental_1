/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 19: escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade das pessoas mais jovens e mais velhas.

*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int i, idade[10], maior = 0, menor = 1000;
    char nome[10][20];
    
    for(i = 0; i < 10; i++){
    
        setbuf(stdin, NULL);
    
        printf("Insira o nome %i: ", i + 1);
        fgets(nome[i], 19, stdin);
    
        printf("Insira a idade da pessoa %i: ", i + 1);
        scanf("%i", &idade[i]);
        
        if(idade[i] < 0)
        
            break;
        
        if(idade[i] > maior)
        
            maior = idade[i];

        if(idade[i] < menor)
        
            menor = idade[i];
    }
    
    printf("\n");
    
    for(i = 0; i < 10; i++){
    
        if(idade[i] == menor)
    
            printf("Pessoa mais nova: %s", nome[i]);

        if(idade[i] == maior)
    
            printf("Pessoa mais velha: %s", nome[i]);
    }

    return 0;
}
