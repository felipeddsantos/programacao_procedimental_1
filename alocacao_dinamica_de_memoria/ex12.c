/*

Programação Procedimental I - Alocação Dinâmica de Memória
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

/*

Exercício 12: considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto: código de identificação do produto (inteiro), nome do produto (até 50 caracteres), quantidade disponı́vel no estoque (inteiro), preço de venda (real):

* Defina uma estrutura que tenha os campos apropriados para guardar as informações de um produto;
* Crie um conjunto de N produtos e peça ao usuário para entrar com as informações de cada produto;
* Encontre o produto com o maior preço de venda;
* Encontre o produto com a maior quantidade disponı́vel no estoque.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Produto produto;

struct Produto{

    int codigo, quantidade;
    float preco;
    char nome[50];
};

void obterMaiores(produto *produtos, produto *maiores, int N){

    int pos1, pos2, quantidade = 0;
    float preco = 0;

    for(int i = 0; i < N; i++){

        if(produtos[i].quantidade > quantidade){

            quantidade = produtos[i].quantidade;
            pos1 = i;
        }

        if(produtos[i].preco > preco){

            preco = produtos[i].preco;
            pos2 = i;
        }
    }

    maiores[0] = produtos[pos1];
    maiores[1] = produtos[pos2];
}

void imprimirProduto(produto p){

    printf("Nome: %s", p.nome);
    printf("Código: %i\n", p.codigo);
    printf("Preço: %f\n", p.preco);
    printf("Quantidade: %i\n", p.quantidade);
}

int main(){
    
    int N;
    produto *produtos, maiores[2];

    printf("Insira a quantidade de produtos: ");
    scanf("%i", &N);

    produtos = (produto *) malloc(N * sizeof(produto));

    if(produtos == NULL){
        
        printf("\nMemória insuficiente\n");
        return 1;
    }

    for(int i = 0; i < N; i++){

        setbuf(stdin, NULL);

        printf("\nInsira o nome do produto %i: ", i + 1);
        fgets(produtos[i].nome, 50, stdin);

        printf("Insira o código do produto %i: ", i + 1);
        scanf("%i", &produtos[i].codigo);

        printf("Insira o preço do produto %i: ", i + 1);
        scanf("%f", &produtos[i].preco);

        printf("Insira a quantidade do produto %i: ", i + 1);
        scanf("%i", &produtos[i].quantidade);
    }

    obterMaiores(produtos, maiores, N);
    
    printf("\nProduto de maior quantidade:\n");
    imprimirProduto(maiores[0]);

    printf("\nProduto de maior preço:\n");
    imprimirProduto(maiores[1]);
    
    free(produtos);
        
    return 0;
}
