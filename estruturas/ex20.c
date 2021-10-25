/*

Programação Procedimental I - Estruturas
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 20: escreva um programa que receba dois structs do tipo dma, cada um representando uma data válida, e calcule o número de dias que decorreram entre as duas datas.

struct dma{

    int dia;
    int mes;
    int ano;
};

*/

#include <stdio.h>
#include <stdlib.h>

struct dma{

    int dia, mes, ano;
};

int bissexto(int ano){

    if(ano % 400 == 0) 
      
        return 1;

    else{

        if(ano % 4 == 0 && ano % 100 != 0)  
    
            return 1;
    
         else
    
            return 0;
    }
}

int qntDias(struct dma inicio, struct dma fim){

    if(inicio.dia == fim.dia && inicio.mes == fim.mes && inicio.ano == fim.ano)

        return 0;

    if(inicio.mes == 1 && inicio.dia == 31){

        inicio.dia = 1;
        inicio.mes++;

        return 1 + qntDias(inicio, fim);
    }

    if(inicio.mes == 2 && inicio.dia == 28 && !bissexto(inicio.ano)){

        inicio.dia = 1;
        inicio.mes++;

        return 1 + qntDias(inicio, fim);
    }

    if(inicio.mes == 2 && inicio.dia == 29 && bissexto(inicio.ano)){

        inicio.dia = 1;
        inicio.mes++;

        return 1 + qntDias(inicio, fim);
    }
    
    if(inicio.mes == 3 && inicio.dia == 31){
        
        inicio.dia = 1;
        inicio.mes++;
        
        return 1 + qntDias(inicio, fim);
    }
    
    if(inicio.mes == 4 && inicio.dia == 30){
    
        inicio.dia = 1;
        inicio.mes++;
    
        return 1 + qntDias(inicio, fim);
    }
    
    if(inicio.mes == 5 && inicio.dia == 31){

        inicio.dia = 1;
        inicio.mes++;

        return 1 + qntDias(inicio, fim);
    }
    
    if(inicio.mes == 6 && inicio.dia == 30){

        inicio.dia = 1;
        inicio.mes++;

        return 1 + qntDias(inicio, fim);
    }
    
    if(inicio.mes == 7 && inicio.dia == 31){
        
        inicio.dia = 1;
        inicio.mes++;
        
        return 1 + qntDias(inicio, fim);
    }
    
    if(inicio.mes == 8 && inicio.dia == 31){

        inicio.dia = 1;
        inicio.mes++;
    
        return 1 + qntDias(inicio, fim);
    }

    if(inicio.mes == 9 && inicio.dia == 30){
        
        inicio.dia = 1;
        inicio.mes++;

        return 1 + qntDias(inicio, fim);
    }
    
    if(inicio.mes == 10 && inicio.dia == 31){

        inicio.dia = 1;
        inicio.mes++;

        return 1 + qntDias(inicio, fim);
    }
    
    if(inicio.mes == 11 && inicio.dia == 30){

        inicio.dia = 1;
        inicio.mes++;

        return 1 + qntDias(inicio, fim);
    }
 
    if(inicio.mes == 12 && inicio.dia == 31){

        inicio.dia = inicio.mes = 1;
        inicio.ano++;

        return 1 + qntDias(inicio, fim);
    }
    
    inicio.dia++;
        
    return 1 + qntDias(inicio, fim);
}

int main(){
    
    struct dma inicio = {24, 7, 2001}, fim = {9, 3, 2021};
    
    printf("Quantidade de dias entre %i/%i/%i e %i/%i/%i: %i\n", início.dia, início.mes, início.ano, fim.dia, fim.mes, fim.ano, qntDias(inicio, fim));

    return 0;
}
