/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 29: faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno acertou.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){  

    int num1, num2, num3, acertos = 0;
    
    srand(time(NULL));

    num1 = 1 + rand() % 99;
    num2 = 1 + rand() % 99;
    
    printf("Quanto e %i + %i? ", num1, num2);
    scanf("%i", &num3);
    
    if(num1 + num2 == num3)
    
        acertos++;
    
    printf("Resposta correta: %i\n", num1 + num2);
    
    num1 = 1 + rand() % 99;
    num2 = 1 + rand() % 99;
    
    printf("\nQuanto e %i + %i? ", num1, num2);
    scanf("%i", &num3);
    
    if(num1 + num2 == num3)
    
        acertos++;
    
    printf("Resposta correta: %i\n", num1 + num2);
    
    num1 = 1 + rand() % 99;
    num2 = 1 + rand() % 99;
    
    printf("\nQuanto e %i + %i? ", num1, num2);
    scanf("%i", &num3);
    
    if(num1 + num2 == num3)
    
        acertos++;
    
    printf("Resposta correta: %i\n", num1 + num2);
    
    num1 = 1 + rand() % 99;
    num2 = 1 + rand() % 99;
    
    printf("\nQuanto e %i + %i? ", num1, num2);
    scanf("%i", &num3);
    
    if(num1 + num2 == num3)
    
        acertos++;
    
    printf("Resposta correta: %i\n", num1 + num2);
    
    num1 = 1 + rand() % 99;
    num2 = 1 + rand() % 99;
    
    printf("\nQuanto e %i + %i? ", num1, num2);
    scanf("%i", &num3);
    
    if(num1 + num2 == num3)
    
        acertos++;
    
    printf("Resposta correta: %i\n", num1 + num2);   
    printf("\nFim da prova. Voce acertou %i questoes\n", acertos);
 
    return 0;
}
