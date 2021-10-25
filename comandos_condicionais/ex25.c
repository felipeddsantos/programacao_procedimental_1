/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 25: calcule as raízes da equação de segundo grau. A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.

* Se delta < 0, não existe real. Imprima a mensagem "Não existe raiz";
* Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única";
* Se delta > 0, imprima as duas raízes reais e a mensegem "Duas raizes".

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){  

    float a, b, c, delta, x1, x2;
    
    printf("Insira o coeficiente a: ");
    scanf("%f", &a);
    
    printf("Insira o coeficiente b: ");
    scanf("%f", &b);
    
    printf("Insira o coeficiente c: ");
    scanf("%f", &c);
    
    if(a != 0){
    
        delta = b * b - 4 * a * c;
        
        if(delta < 0){
        
            printf("\nNao existe raiz\n");
            
            return 0;    
        }
        
        x1 = (-b + sqrt(delta)) / (2 * a);
        
        if(delta == 0){
        
            printf("\nRaiz unica: %f\n", x1);
            
            return 0;
        }
        
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("\nDuas raizes: %f e %f\n", x1, x2);
    }
    
    else
    
        printf("\nNao e equacao de segundo grau\n");
        
    return 0;
}
