/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.

*/

#include <stdio.h>
#include <stdlib.h>

int dobro(int num){

    return 2 * num;
}

int main(){

    printf("Dobro de 100: %i\n", dobro(100));
    
    return 0;
}
