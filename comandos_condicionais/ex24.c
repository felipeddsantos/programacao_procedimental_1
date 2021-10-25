/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 24: uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int op;
    float valor;
    
    printf("Insira o valor: ");
    scanf("%f", &valor);
    
    printf("Insira uma estado:\n\n(0) MG\n(1) SP\n(2) RJ\n(3) MS\n\n");
    scanf("%i", &op);
    
    switch(op){
    
        case 0:
    
            printf("\nValor final: %f\n", 1.07 * valor);
        
            break;
    
        case 1:
    
            printf("\nValor final: %f\n", 1.12 * valor);
        
            break;
    
        case 2:
    
            printf("\nValor final: %f\n", 1.15 * valor);
        
            break;
    
        case 3:
    
            printf("\nValor final: %f\n", 1.08 * valor);
        
            break;
    
        default:
    
            printf("\nEstado invalido\n");       
    }
 
    return 0;
}
