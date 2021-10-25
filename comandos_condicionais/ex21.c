/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 21: escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida. Escolha a opção:

1 - Soma de 2 números;
2 - Diferença entre 2 números (maior pelo menor);
3 - Produto entre 2 números;
4 - Divisão entre 2 números (o denominador não pode ser zero);

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int op;
    float num1, num2;
    
    printf("Insira uma opcao:\n\n(1) Soma entre 2 numeros\n(2) Diferenca entre 2 numeros\n(3) Produto entre 2 numeros\n(4) Divisao entre 2 numeros\n\n");
    scanf("%i", &op);
    
    switch(op){
    
        case 1:

            printf("Insira o primeiro numero: ");
            scanf("%f", &num1);
    
            printf("Insira o segundo numero: ");
            scanf("%f", &num2);
            
            printf("\nSoma entre os valores inseridos: %f\n", num1 + num2);
            
            break;
    
        case 2:

            printf("Insira o primeiro numero: ");
            scanf("%f", &num1);
    
            printf("Insira o segundo numero: ");
            scanf("%f", &num2);
            
            if(num1 > num2)
        
                printf("\nDiferenca entre os valores inseridos: %f\n", num1 - num2);
        
            else
        
                printf("\nDiferenca entre os valores inseridos: %f\n", num2 - num1);
        
            break;
    
        case 3:

            printf("Insira o primeiro numero: ");
            scanf("%f", &num1);
    
            printf("Insira o segundo numero: ");
            scanf("%f", &num2);
        
            printf("\nProduto entre os valores inseridos: %f\n", num1 * num2);
        
            break;
    
        case 4:

            printf("Insira o primeiro numero: ");
            scanf("%f", &num1);
    
            printf("Insira o segundo numero: ");
            scanf("%f", &num2);
        
            if(num2 != 0)
        
                printf("\nDivisao entre os valores inseridos: %f\n", num1 / num2);
        
            else
        
                printf("\nDivisao indefinida\n");
            
            break;
    
        default:
    
            printf("\nOpcao invalida\n");
    }
 
    return 0;
}
