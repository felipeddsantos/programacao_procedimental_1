/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 33: um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a segunda tabela).

Preço antigo (R$)     Percentual de aumento (%)   
até 50,00                       5                       
50,00 - 100,00                 10                   
acima de 100,00                15            

Preço novo (R$)                   Mensagem
até 80,00                         Barato
80,00 - 120,00 (inclusive)        Normal
120,00 - 200,00 (inclusive)       Caro
acima de 200,00                   Muito caro

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float antigo, novo;
    
    printf("Insira o preco antigo: ");
    scanf("%f", &antigo);
    
    if(antigo <= 50)
    
        novo = 1.05 * antigo;
    
    if(antigo > 50 && antigo <= 100)
    
        novo = 1.1 * antigo;
        
    if(antigo > 100)
    
        novo = 1.15 * antigo;
        
    if(novo <= 80)
    
        printf("\nPreco novo: %f. Produto barato\n", novo);

    if(novo > 80 && novo <= 120)
    
        printf("\nPreco novo: %f. Produto normal\n", novo);
        
    if(novo > 120 && novo <= 200)
    
        printf("\nPreco novo: %f. Produto caro\n", novo);
        
    if(novo > 200)
        
        printf("\nPreco novo: %f. Produto muito caro\n", novo);
        
    return 0;
}
