/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 2: faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato textual por extenso. 
Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000.

*/

#include <stdio.h>
#include <stdlib.h>

void data(int dia, int mes, int ano){

    switch(mes){
    
        case 1:
        
            printf("%i de janeiro de %i", dia, ano);
            
            break;
        
        case 2:
        
            printf("%i de fevereiro de %i", dia, ano);
            
            break;
        
        case 3:
        
            printf("%i de marco de %i", dia, ano);
            
            break;
        
        case 4:
        
            printf("%i de abril de %i", dia, ano);
            
            break;
        
        case 5:
        
            printf("%i de maio de %i", dia, ano);
            
            break;
        
        case 6:
        
            printf("%i de junho de %i", dia, ano);
            
            break;
        
        case 7:
        
            printf("%i de julho de %i", dia, ano);
            
            break;
        
        case 8:
        
            printf("%i de agosto de %i", dia, ano);
            
            break;
        
        case 9:
        
            printf("%i de setembro de %i", dia, ano);
            
            break;
        
        case 10:
        
            printf("%i de outubro de %i", dia, ano);
            
            break;
        
        case 11:
        
            printf("%i de novembro de %i", dia, ano);
            
            break;
        
        case 12:
        
            printf("%i de dezembro de %i", dia, ano);
            
            break;
            
        default:
        
            printf("mes desconhecido");
            
            break;
    }
}

int main(){

    printf("02/03/2021: ");
    
    data(2, 3, 2021);
    
    printf("\n");
    
    return 0;
}
