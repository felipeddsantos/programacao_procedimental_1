/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 38: leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: dia, mes e ano. Teste a validade desta data para saber se esta é uma data válida. Teste se o dia fornecido é um dia válido: dia > 0, dia ≤ 28 para o mês de fevereiro (29 se o ano for bissexto), dia ≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano ≤ ano atual (use uma constante definida com o valor igual a 2021). Imprimir: “data válida” ou “data inválida” no final da execução do programa.

*/

#include <stdio.h>
#include <stdlib.h>
#define atual 2021

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
    
    if(ano > 0 && ano <= atual){
        
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
