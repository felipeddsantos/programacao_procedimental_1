/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 40: o custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.

Custo de fábrica (R$)     Comissão do distribuidor (%)    Impostos (%)
até 12.000,00                      5                          0
12.000,00 - 25.000,00             10                         15
acima de 25.000,00                15                         20

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float custo;
    
    printf("Insira o custo de fabrica: ");
    scanf("%f", &custo);
    
    if(custo <= 12000)
    
        printf("\nCusto ao consumidor: %f\n", 1.05 * custo);
    
    if(custo > 12000 && custo <= 25000)
    
        printf("\nCusto ao consumidor: %f\n", 1.25 * custo);
        
    if(custo > 25000)
        
        printf("\nCusto ao consumidor: %f\n", 1.35 * custo);
        
    return 0;
}
