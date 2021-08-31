#include <stdio.h>

void main(){
    float preco_atual, preco_atualizado;
    int venda_mensal;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco_atual);

    printf("Digite a média de venda mensal desse produto: ");
    scanf("%d", &venda_mensal);

    if(venda_mensal < 500 && preco_atual < 30){
        preco_atualizado = preco_atual + preco_atual * 0.1;
    } else if (venda_mensal >= 500 && venda_mensal < 1000 && preco_atual >= 30 && preco_atual < 80){
        preco_atualizado = preco_atual + preco_atual * 0.15;
    } else {
        preco_atualizado = preco_atual - preco_atual * 0.05;
    }

    printf("Esse produto passou a valer R$ %f", preco_atualizado);
}