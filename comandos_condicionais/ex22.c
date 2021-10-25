/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 22: leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:

* Ter pelo menos 65 anos;
* Ou ter trabalhado pelo menos 30 anos;
* Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float idade, tempo, aposentado = 0;
    
    printf("Insira a idade: ");
    scanf("%f", &idade);
    
    printf("Insira o tempo de servico: ");
    scanf("%f", &tempo);
    
    if(idade >= 65)
    
        aposentado = 1;
    
    if(tempo >= 30)
    
        aposentado = 1;
    
    if(idade >= 60 && tempo >= 25)
    
        aposentado = 1;
    
    if(aposentado)
    
        printf("\nTem direito a aposentadoria\n");
        
    else
        
        printf("\nNao tem direito a aposentadoria\n");
 
    return 0;
}
