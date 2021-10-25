/*

Programação Procedimental I - Comandos de Repetição
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 5: faça um programa que peça ao usuário para digitar 10 valores e some-os.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int num, soma = 0;
    
    for(int i = 0; i < 9; i++){
    
        printf("Insira o numero %i: ", i + 1);
        scanf("%i", &num);
        
        soma = soma + num;
    }
    
    printf("\nSoma dos numeros inseridos: %i\n", soma);
    
    return 0;
}
