/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 37: as tarifas de certo parque de estacionamento são as seguintes:

* 1 e 2 horas - R$ 1,00 cada;
* 3 e 4 horas - R$ 1,40 cada;
* 5 horas e seguintes - R$ 2,00 cada.

O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){  

    int hora0, horaf, minuto0, minutof;
    float total;
        
    printf("Insira a hora de chegada: ");
    scanf("%i", &hora0);
    
    printf("Insira o minuto de chegada: ");
    scanf("%i", &minuto0);
    
    printf("Insira a hora de partida: ");
    scanf("%i", &horaf);

    printf("Insira o minuto de partida: ");
    scanf("%i", &minutof);
    
    minutof = 60 * horaf + minutof;
    minuto0 = 60 * hora0 + minuto0; 
    
    if(minuto0 > minutof)
    
        total = minutof - minuto0 + 1440;
    
    else
    
        total = minutof - minuto0;
    
    total = ceil(total / 60);
    
    if(total == 1 || total == 2)
    
        printf("\nPreco a pagar: R$ %f\n", total);
    
    if(total == 3 || total == 4)
    
        printf("\nPreco a pagar: R$ %f\n", 1.4 * total);
        
    if(total >= 5)
    
        printf("\nPreco a pagar: R$ %f\n", 2 * total);
    
    return 0;
}
