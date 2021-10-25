/*

Programação Procedimental I - Ponteiros 
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 24: escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array. Escreva também uma função main que use essa função.

*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

void extremos(int *V, int *min, int *max){

    *max = *min = *V;
    
    for(int i = 0; i < N; i++){
    
        if(*(V + i) > *max)
        
            *max = *(V + i);
        
        if(*(V + i) < *min)
        
            *min = *(V + i);
    }
}

int main(){  

    int V[N] = {100, 1, 2, 3, -8, 500, 1, 0, -8, 0}, min, max;
    
    extremos(V, &min, &max);
    
    printf("Os valores minimo e maximo do array sao: %i e %i\n", min, max);
 
    return 0;
}
