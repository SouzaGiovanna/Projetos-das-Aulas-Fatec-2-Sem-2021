// Exercício descobrir pessoa mais velha e mais nova, mostrando a idade e o nome de cada uma
#include <stdio.h>

int main() {
    int idade, mais_velho = 0, mais_novo = 100;
    char nome[10], nome_mais_velho[10], nome_mais_novo[10];
    
    for(int i = 0; i < 50; i++){
        printf("Digite o nome da %d° pessoa: ", i + 1);
        scanf("%s", nome);
        
        printf("Digite a idade dessa pessoa: ");
        scanf("%d", &idade);
        
        if(idade > mais_velho){
            mais_velho = idade;
            strcpy(nome_mais_velho, nome);
        }
        if(idade < mais_novo){
            mais_novo = idade;
            strcpy(nome_mais_novo, nome);
        }
        
        printf("\n");
    }
    
    printf("A pessoa mais velha é a(o) %s, que tem %d anos\n", nome_mais_velho, mais_velho);
    printf("A pessoa mais nova é a(o) %s, que tem %d anos", nome_mais_novo, mais_novo);
}