/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 26: leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:

Consumo (Km/l)    Mensagem
menor que 8       Venda o carro!
8 - 14            Economico!
maior que 14      Super economico!

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float consumo;
    
    printf("Insira o consumo: ");
    scanf("%f", &consumo);
    
    if(consumo < 8)
      
        printf("\nVenda o carro!\n");
    
    if(consumo >= 8 && consumo <= 14)
    
        printf("\nEconomico!\n");
    
    if(consumo > 14)
    
        printf("\nSuper economico!\n");
 
    return 0;
}
