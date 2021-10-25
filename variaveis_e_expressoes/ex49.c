/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 49: faça um programa para ler o horário (hora, minuto e segundo) de inicio e a duração, em segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, minuto e segundo) do termino da mesma.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int hora, minuto, segundo, tempo;
    
    printf("Insira a hora de inicio: ");
    scanf("%i", &hora);
    
    printf("Insira o minuto de inicio: ");
    scanf("%i", &minuto);
    
    printf("Insira o segundo de inicio: ");
    scanf("%i", &segundo);
    
    printf("Insira a duracao da experiencia em segundos: ");
    scanf("%i", &tempo);
    
    tempo = tempo + segundo + 60 * minuto + 3600 * hora;
    hora = tempo / 3600;
    minuto = tempo / 60 - 60 * hora;
    segundo = tempo - 60 * minuto - 3600 * hora;
   
    printf("\nO horario de termino da experiencia e: %i:%i:%i\n", hora, minuto, segundo);
    
    return 0;
}
