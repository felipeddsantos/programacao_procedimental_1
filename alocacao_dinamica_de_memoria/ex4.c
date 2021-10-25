/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 4: faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa imprime a string sem suas vogais.

*/

#include <stdio.h>
#include <stdlib.h>

char *alocar(int N){

    return (char *) malloc(N * sizeof(char));
}

int main(){
    
    int N;
    char *str;

    printf("Insira o tamanho da string: ");
    scanf("%i", &N);

    str = alocar(N);

    if(str == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }
    
    printf("Insira a string: ");
    setbuf(stdin, NULL);
    fgets(str, N - 1, stdin);

    printf("\nString sem vogais: ");

    for(int i = 0; i < N; i++)

        if(str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' && str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U')

            printf("%c", str[i]);

    printf("\n");

    free(str);
        
    return 0;
}
