/*

Estruturas

Exercício 15: faça um programa que gerencie o estoque de um mercado:

* Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15 letras), preço e quantidade;
* Leia um pedido, composto por um código de produto e a quantidade. Localize este código no vetor e, se houver quantidade suficiente para atender ao pedido integralmente, atualize o estoque e informe o usuário. Repita este processo até ler um código igual a zero;
* Se por algum motivo não for possı́vel atender ao pedido, mostre uma mensagem informando qual erro ocorreu.

*/

#include <stdio.h>
#include <stdlib.h>

struct Produto{

    int qnt, codigo;
    float preco;
    char nome[15];
};

struct Pedido{

    int codigo, qnt;
};

int buscarProduto(struct Produto *estoque, struct Pedido p){

    int encontrado = 0;

    for(int i = 0; i < 5; i++){
    
        if(estoque[i].codigo == p.codigo){

            encontrado = 2;

            if(estoque[i].qnt >= p.qnt){
        
                estoque[i].qnt = estoque[i].qnt - p.qnt;

                encontrado = 1;
            }
        }
    }

    return encontrado;
}
        
int main(){
    
    int result;
    struct Produto estoque[5];
    struct Pedido p;

    for(int i = 0; i < 5; i++){

        printf("\nInsira o nome do produto %i: ", i + 1);
        fgets(estoque[i].nome, 15, stdin);

        printf("Insira o código do produto %i: ", i + 1);
        scanf("%i", &estoque[i].codigo);

        printf("Insira o preço do produto %i: ", i + 1);
        scanf("%f", &estoque[i].preco);

        printf("Insira a quantidade do produto %i: ", i + 1);
        scanf("%i", &estoque[i].qnt);

        setbuf(stdin, NULL);
    }
    
    while(1){

        printf("\nInsira o código do produto a ser pedido: ");
        scanf("%i", &p.codigo);

        if(p.código == 0)

            return 0;

        printf("Insira a quantidade do produto a ser pedido: ");
        scanf("%i", &p.qnt);

        result = buscarProduto(estoque, p);
        
        if(result == 1)

            printf("\nPedido realizado com sucesso. Estoque atualizado\n");    

        if(result == 0)
            
            printf("\nProduto inexistente\n");  

        if(result == 2)   
            
            printf("\nEstoque insuficiente\n");        
    }
}
