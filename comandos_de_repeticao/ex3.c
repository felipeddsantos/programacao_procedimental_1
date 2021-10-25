/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int i = 10;
    
    while(i >= 0){
        
        printf("%i\n", i);    
        
        i--;         
    }
        
    printf("FIM!\n");    
    
    return 0;
}
