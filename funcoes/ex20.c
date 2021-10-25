/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 20: faça uma função que receba dois números inteiros positivos por parâmetro e retorne a soma dos N números inteiros 
existentes entre eles.

*/

#include <stdio.h>
#include <stdlib.h>

int soma(int inf, int sup){
    
    int s = 0;
    
    for(int i = inf + 1; i < sup; i++)
        
        s = s + i;
    
    return s;
}

int main(){

    printf("Somatorio dos numeros de 1 a 100: %i\n", soma(0, 101)); 
    
    return 0;
}
