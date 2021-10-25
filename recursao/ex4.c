/*

Programação Procedimental I - Recursão
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: crie uma função recursiva que receba dois inteiros positivos k e n e calcule k elevado a n .

*/

#include <stdio.h>
#include <stdlib.h>

int pot(int bas, int exp){

    if(exp == 0)
    
        return 1;
    
    return bas * pot(bas, exp - 1);
}

int main(){

    printf("Resultado de 5 elevado a 3: %i\n", pot(5, 3));
    
    return 0;
}
