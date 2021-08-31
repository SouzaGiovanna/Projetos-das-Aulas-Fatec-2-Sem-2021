#include <stdio.h>

void main(){
    int ano_atual, ano_nascimento, idade;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento;

    if(idade >= 18){
        printf("Maior de idade");
    } else {
        printf("Menor de idade");
    }
}