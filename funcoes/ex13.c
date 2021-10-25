/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 13: faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará a operação que se deseja efetuar com os números. Se o símbolo for + deverá ser realizada uma adição, se for − uma subtração, se for / uma divisão e se for ∗ será efetuada uma multiplicação.

*/

#include <stdio.h>
#include <stdlib.h>

void calc(float num1, float num2, char op){

    switch(op){
    
        case '+':
        
            printf("%f + %f = %f\n", num1 + num2);
            
            break;
        
        case '-':
        
            printf("%f - %f = %f\n", num1 - num2);
            
            break;

        case '*':
        
            printf("%f * %f = %f\n", num1 * num2);
            
            break;
            
        case '/':
        
            if(num2 != 0)
        
                printf("%f / %f = %f\n", num1 / num2);
            
            else
            
                printf("Divisao indefinida\n");
            
            break;
        
        default:
        
            printf("Operacao invalida\n", num1 + num2);
    }
}

int main(){

    calc(1, 1, '+');
    calc(18, 2, '-');
    calc(8, 7, '*');
    calc(5, 6, '/');
    calc(0, 0, '/');
    calc(1, 1, '@');
    
    return 0;
}
