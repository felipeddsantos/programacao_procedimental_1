/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 48: leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int tempo, horas, minutos, segundos;
    
    printf("Insira um valor em segundos: ");
    scanf("%i", &tempo);
    
    horas = tempo / 3600;
    minutos = tempo / 60 - 60 * horas;
    segundos = tempo - 60 * minutos - 3600 * horas;
   
    printf("\nO valor em segundos inserido e equivalente a %i horas, %i minutos e %i segundos\n", horas, minutos, segundos);
    
    return 0;
}
