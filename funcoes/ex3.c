/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 3: faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.

*/

#include <stdio.h>
#include <stdlib.h>

int negativo(int num){

    if(num < 0)
    
        return -1;
        
    if(num > 0)
    
        return 1;

    return 0;
}

int main(){

    int num = -25;
    
    num = negativo(num);

    if(num == 1)

        printf("Esse numero e positivo\n");
        
    if(num == 0)

        printf("Esse numero e igual a 0\n");
        
    if(num == -1)

        printf("Esse numero e negativo\n");
    
    return 0;
}
