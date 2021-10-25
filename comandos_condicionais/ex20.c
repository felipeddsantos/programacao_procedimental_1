/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 20: dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguintes conceitos:

* O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;
* Chama-se equilátero o triângulo que tem três lados iguais;
* Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
* Recebe o nome de escaleno o triângulo que tem os três lados diferentes.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float A, B, C;
    
    printf("Insira o valor A: ");
    scanf("%f", &A);
    
    printf("Insira o valor B: ");
    scanf("%f", &B);
    
    printf("Insira o valor C: ");
    scanf("%f", &C);
    
    if(A + B < C && A + C < B && B + C < A){

        if(A != B && A != C && B != C)

            printf("\nTriangulo escaleno\n");
            
        if(A == B && A == C && B == C)

            printf("\nTriangulo equilatero\n");
        
        else
        
            printf("\nTriangulo isosceles\n");
    }
    
    else
    
        printf("\nNao e um triangulo\n");
 
    return 0;
}
