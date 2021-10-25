/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 26: implemente uma função que calcule as raízes reais de uma equação do segundo grau do tipo Ax^2 + Bx + C = 0. Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação. Se existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por X1 e X2.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2){

    float delta = B * B - 4 * A * C;
    
    if(delta < 0)
    
        return 0;
    
    *X1 = (-B + sqrt(delta)) / (2 * A);
    
    if(delta == 0){
    
        *X2 = *X1;
    
        return 1;        
    }
    
    *X2 = (-B - sqrt(delta)) / (2 * A);
    
    return 2;
}

int main(){  

    int qnt;
    float A, B, C, X1, X2;
    
    printf("Insira o coeficiente A: ");
    scanf("%f", &A);
    
    printf("Insira o coeficiente B: ");
    scanf("%f", &B);
    
    printf("Insira o coeficiente C: ");
    scanf("%f", &C);
    
    if(A != 0){
    
        qnt = raizes(A, B, C, &X1, &X2);
    
        if(qnt == 1 || qnt == 2)
    
            printf("\nAs raizes sao: %f e %f\n", X1, X2);
    
        else
    
            printf("\nNao existem raizes reais\n");
    }
    
    else
    
        printf("\nO coeficiente A deve ser diferente de 0\n");
        
    return 0;
}
