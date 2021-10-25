/*

Programação Procedimental I - Funções 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 12: escreva uma função que receba um número inteiro maior do que zero e retorne a soma de todos os seus algarismos. Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.

*/

#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int num){

    int soma = 0;

    if(num > 0){
    
        while(num > 0){
        
            soma = soma + num % 10;
            num = num / 10;    
        }
            
        return soma;  
    }
    
    return -1;  
}

int main(){
    
    int result = somaDigitos(54311900);
    
    if(result == -1)
    
        printf("Numero invalido\n");  
    
    else
    
        printf("Soma dos algarismos do numero 54311900: %i\n", result);  
    
    return 0;
}
