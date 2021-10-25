/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 14: a nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float lab, sem, final, media;
    
    printf("Insira a nota de laboratorio: ");
    scanf("%f", &lab);
    
    printf("Insira a nota da avaliacao semestral: ");
    scanf("%f", &sem);
    
    printf("Insira a nota da avaliacao final: ");
    scanf("%f", &final);
    
    if(lab >= 0 && sem >= 0 && final >= 0 && lab <= 10 && sem <= 10 && final <= 10){
    
        media = (2 * lab + 3 * sem + 5 * final) / 10;
        
        if(media >= 0 && media <= 2.9)
        
            printf("\nMedia final: %f. Voce foi reprovado\n", media); 
        
        if(media >= 3 && media <= 4.9)
        
            printf("\nMedia final: %f. Voce esta em recuperacao\n", media); 
        
        else
        
            printf("\nMedia final: %f. Voce foi aprovado\n", media); 
    }
    
    else
    
        printf("\nNotas invalidas\n"); 
        
    return 0;
}
