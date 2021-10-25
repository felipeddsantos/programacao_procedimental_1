/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 7: crie um programa que compara duas strings (não use a função strcmp).

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str1[100], str2[100];
    
    printf("Insira a primeira string: ");
    fgets(str1, 99, stdin);
    
    printf("Insira a segunda string: ");
    fgets(str2, 99, stdin);
    
    if(strlen(str1) != strlen(str2)){
    
        printf("\nStrings diferentes\n");
            
        return 0; 
    }
    
    for(int i = 0; str1[i] != '\0'; i++){
    
        if(str1[i] != str2[i]){
        
            printf("\nStrings diferentes\n");
            
            return 0;   
        }
    }
            
    printf("\nStrings iguais\n");
        
    return 0;
}
