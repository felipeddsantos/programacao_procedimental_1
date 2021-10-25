/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 25: faça um programa que possua uma função para:

*Ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler 2 notas válidas e que devolver os 2 números lidos);
*Calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a segunda nota tem peso 2.

*/

#include <stdio.h>
#include <stdlib.h>

void ler(float *nota1, float *nota2){

    printf("Insira a primeira nota: ");
    scanf("%f", nota1);
    
    printf("Insira a segunda nota: ");
    scanf("%f", nota2);
}

void medias(float nota1, float nota2, float *ms, float *mp){

    *ms = (nota1 + nota2) / 2;
    *mp = (nota1 + 2 * nota2) / 3;
}

int main(){  

    float nota1, nota2, ms, mp;
    
    ler(&nota1, &nota2);
    medias(nota1, nota2, &ms, &mp);
   
    printf("\nMedia simples: %f", ms);
    printf("\nMedia ponderada: %f\n", mp);    
  
    return 0;
}
