/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 35: leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    int dia, mes, ano, valida = 0, bissexto = 0;
    
    printf("Insira o dia: ");
    scanf("%i", &dia);
    
    printf("Insira o mes: ");
    scanf("%i", &mes);
    
    printf("Insira o ano: ");
    scanf("%i", &ano);
    
    if(ano % 400 == 0)
    
        bissexto = 1;
    
    else{
    
        if(ano % 4 == 0 && ano % 100 != 0) 
    
            bissexto = 1;         
    }     
    
    if(ano > 0){
        
        if(mes > 0 && mes <= 12){
    
            if(mes == 2){
        
                if((dia > 0 && dia <= 28) || (dia == 29 && bissexto))
            
                    valida = 1;
             }

            if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        
                if(dia > 0 && dia <= 30)
            
                    valida = 1;
            }
    
            if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        
                if(dia > 0 || dia <= 31)
            
                    valida = 1;
            }
        }
    }
    
    if(valida)
    
        printf("\nData valida\n");
        
    else
        
        printf("\nData invalida\n");
        
    return 0;
}
