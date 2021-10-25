/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 13: elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.

*/

#include <stdio.h>
#include <stdlib.h>

int percorre(char *str1, char *str2){

    if(*str2 == '\0')
    
        return 1;

    if(*str1 != *str2)
   
        return 0;
    
    percorre(str1 + 1, str2 + 1);
}

int contido(char *str1, char *str2){

    for(int i = 0; *(str1 + i) != '\0'; i++)

        if(percorre(str1 + i, str2))

            return 1;

    return 0;
}

int main(){  

    char str1[] = "***abcBANANAabcu***...", str2[] = "BANANA";
    
    if(contido(str1, str2))
    
        printf("A segunda string ocorre dentro da primeira\n");
    
    else
    
        printf("A segunda string nao ocorre dentro da primeira\n");
       
    return 0;
}
