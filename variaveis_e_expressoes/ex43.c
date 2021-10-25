/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 43: escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:

* O total a pagar com desconto de 10%;
* O valor de cada parcela, no parcelamento de 3× sem juros;
* A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
* A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, total;
    
    printf("Insira o valor: ");
    scanf("%f", &valor);
    
    total = 0.9 * valor;
    
    printf("\nO valor total a pagar e: %f", total);
    printf("\nO valor de cada parcela e: %f", total / 3);
    printf("\nPara venda a vista, a comissao do vendedor e: %f", 0.05 * total);
    printf("\nPara venda parcelada, a comissao do vendedor e: %f\n", 0.05 * valor);

    return 0;
}
