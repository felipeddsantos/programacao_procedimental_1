/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 26: Escreva uma função que gera um triângulo de altura e lados n e base 2 * n - 1.

*/

#include <stdio.h>
#include <stdlib.h>

void triangulo(int n){

    int base = 2 * n - 1;
    
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= base; j++){

            if(j < n + i && j > n - i)
          
                printf("*");
            
            else
            
                printf(" ");            
        }
            
        printf("\n");
    }
}

int main(){

    printf("Triangulo de altura 15:\n\n");

    triangulo(15);
    
    return 0;
}
