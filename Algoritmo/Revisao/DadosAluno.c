#include <stdio.h>

int main() {
    char* nome;
    int ra, idade;
    float altura;
    
    printf("Forneça os dados do Aluno: ");
    printf("\nDigite seu Nome: ");
    scanf("%s", nome);
    printf("\nDigite seu RA: ");
    scanf("%d", &ra);
    printf("\nDigite sua Idade: ");
    scanf("%d", &idade);
    printf("\nDigite sua Altura: ");
    scanf("%f", &altura);
    
    printf("\n\n Seja bem vindo %s, seu RA é %d na nossa faculdade, você está matriculado com sucesso!", nome, ra);
    
    return 0;
}