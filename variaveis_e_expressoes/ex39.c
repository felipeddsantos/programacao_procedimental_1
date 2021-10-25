/*

Programação Procedimental I - Variáveis e Expressões
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 39: a importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:

* O primeiro ganhador receberá 46%;
* O segundo receberá 32%;
* O terceiro receberá o restante.

Calcule e imprima a quantia ganha por cada um dos ganhadores.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int imp = 780000;

    printf("O primeiro ganhador recebera: R$ %f,00", 0.46 * imp);
    printf("\nO segundo ganhador recebera: R$ %f,00", 0.32 * imp);
    printf("\nO terceiro ganhador recebera: R$ %f,00\n", 0.22 * imp);

    return 0;
}
