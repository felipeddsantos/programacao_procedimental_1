/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 34: leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.

Nota           Conceito (até 20 faltas)      Conceito (mais de 20 faltas)
9.0 - 10.0               A                               B
7.5 - 8.9                B                               C
5.0 - 7.4                C                               D
4.0 - 4.9                D                               E
0.0 - 3.9                E                               E

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int faltas;
    float nota;
    
    printf("Insira a nota: ");
    scanf("%f", &nota);
    
    printf("Insira a quantidade de faltas: ");
    scanf("%i", &faltas);
    
    if(nota >= 9 && nota <= 10 && faltas <= 20)
    
        printf("\nConceito: A\n");

    if((nota >= 9 && nota <= 10 && faltas > 20) || (nota >= 7.5 && nota <= 8.9 && faltas <= 20))
    
        printf("\nConceito: B\n");

    if((nota >= 7.5 && nota <= 8.9 && faltas > 20) || (nota >= 5 && nota <= 7.4 && faltas <= 20))
    
        printf("\nConceito: C\n");
        
    if((nota >= 5 && nota <= 7.4 && faltas > 20) || (nota >= 4 && nota <= 4.9 && faltas <= 20))
    
        printf("\nConceito: D\n");
        
    if((nota >= 4 && nota <= 4.9 && faltas > 20) || (nota >= 0 && nota <= 3.9 && faltas > 20) || (nota >= 0 && nota <= 3.9 && faltas <= 20))
    
        printf("\nConceito: E\n");
        
    return 0;
}
