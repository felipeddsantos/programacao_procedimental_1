/*

Programação Procedimental I - Comandos Condicionais
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Comandos Condicionais

Exercício 13: faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){  

    float nota1, nota2, nota3, media;
    
    printf("Insira a nota da primeira prova: ");
    scanf("%f", &nota1);
    
    printf("Insira a nota da segunda prova: ");
    scanf("%f", &nota2);
    
    printf("Insira a nota da terceira prova: ");
    scanf("%f", &nota3);
    
    if(nota1 >= 0 && nota2 >= 0 && nota3 >= 0 && nota1 <= 100 && nota2 <= 100 && nota3 <= 100){
    
        media = (nota1 + nota2 + 2 * nota3) / 4;
        
        if(media >= 60)
        
            printf("\nMedia final: %f. Voce foi aprovado\n", media); 
        
        else
        
            printf("\nMedia final: %f. Voce foi reprovado\n", media); 
    }
    
    else
    
        printf("\nNotas invalidas\n"); 
        
    return 0;
}
