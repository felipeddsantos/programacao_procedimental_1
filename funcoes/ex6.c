/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 6: faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos e segundos, e os converta em segundos.

*/

#include <stdio.h>
#include <stdlib.h>

int horario(int hora, int minuto, int segundo){

    return 3600 * hora + 60 * minuto + segundo;
}

int main(){

    printf("3 horas, 45 minutos e 12 segundos equivalem a %i segundos\n", horario(3, 45, 12));
    
    return 0;
}
