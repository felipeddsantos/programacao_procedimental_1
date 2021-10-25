/*

Programação Procedimental I - Strings
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 17: leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os espaços em branco do vetor e depois escrever o vetor resultante.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  
    
    int j = 0;
    char str1[100], str2[100];
    
    printf("Insira uma string: ");
    fgets(str1, 99, stdin);
    
    for(int i = 0; str1[i] != '\0'; i++){
    
        if(str1[i] != ' '){
    
            str2[j] = str1[i];
            
            j++;            
        }            
    }
    
    str2[j] = '\0';
            
    printf("\nString resultante: %s\n", str2);
    
    return 0;
}
