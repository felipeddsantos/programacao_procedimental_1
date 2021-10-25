/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 28: faça uma função recursiva para computar a função de Ackerman.

*/

#include <stdio.h>
#include <stdlib.h>

int ackerman(int m, int n){

    if(m == 0)
    
        return n + 1;
    
    if(n == 0)
    
        return ackerman(m - 1, 1);

    return ackerman(m - 1, ackerman(m, n - 1));
}

int main(){

    printf("Funcao de Ackerman com parametros 2 e 7: %i\n", ackerman(2, 7)); 
    
    return 0;
}
