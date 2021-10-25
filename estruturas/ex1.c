/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 1: escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:

* Horário: composto de hora, minutos e segundos;
* Data: composto de dia, mês e ano;
* Compromisso: composto de uma data, horário e texto que descreve o compromisso.

*/

#include <stdio.h>
#include <stdlib.h>

struct Horario{

    int hora, minutos, segundos;
};

struct Data{

    int dia, mes, ano;
};

struct Compromisso{

    struct Data d;
    struct Horario h;
    char descricao[100];
};

int main(){

    struct Compromisso c;
    
    return 0;
}
