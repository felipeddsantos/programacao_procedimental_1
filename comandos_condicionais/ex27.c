/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 27: escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

Categoria      Idade (anos)
Infantil A        5 - 7
Infantil B        8 - 10
Juvenil A        11 - 13
Juvenil B        14 - 17
Sênior         maior que 18

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float idade;
    
    printf("Insira a idade: ");
    scanf("%f", &idade);
    
    if(idade < 5)
    
        printf("\nIdade invalida\n");
    
    if(idade <= 7 && idade >= 5)
      
        printf("\nCategoria: Infantil A\n");
    
    if(idade <= 10 && idade >= 8)
    
        printf("\nCategoria: Infantil B\n");
    
    if(idade <= 13 && idade >= 11)
    
        printf("\nCategoria: Juvenil A\n");
    
    if(idade <= 17 && idade >= 14)
    
        printf("\nCategoria: Juvenil B\n");
    
    if(idade >= 18)    
    
        printf("\nCategoria: Senior\n");
 
    return 0;
}
