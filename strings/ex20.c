/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 20: faça um programa que preencha uma matriz de string com os modelos de cinco carros. Em seguida, preencha um vetor com o consumo desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:

* O modelo de carro mais econômico;
* Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 quilômetros.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, maior = 0;
    float consumo[5];
    char carro[5][20];
    
    for(i = 0; i < 5; i++){
    
        setbuf(stdin, NULL);
    
        printf("Insira o carro %i: ", i + 1);
        fgets(carro[i], 19, stdin);
    
        printf("Insira o consumo do carro %i: ", i + 1);
        scanf("%f", &consumo[i]);
        
        if(consumo[i] > consumo[maior])
        
            maior = i;
    }
    
    printf("\nO carro mais economico e: %s\n", carro[maior]);
    
    for(i = 0; i < 5; i++)
    
        printf("O %s precisa de %f litros para percorrer 1000 Km\n", carro[i], 1000 / consumo[i]);
   
    return 0;
}
