/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 11: elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2.

*/

#include <stdio.h>
#include <stdlib.h>

float media(float nota1, float nota2, float nota3, char tipo){

    switch(tipo){
    
        case 'A':
        
            return (nota1 + nota2 + nota3) / 3;
        
        case 'P':
        
            return (5 * nota1 + 3 * nota2 + 2 * nota3) / 10;
        
        default:
        
            return 0;
    }
}

int main(){

    float nota1 = 9.4, nota2 = 8, nota3 = 7.2;

    printf("Media aritmetica do aluno: %f\n", media(nota1, nota2, nota3, 'A'));
    printf("Media ponderada do aluno: %f\n", media(nota1, nota2, nota3, 'P'));
    
    return 0;
}
