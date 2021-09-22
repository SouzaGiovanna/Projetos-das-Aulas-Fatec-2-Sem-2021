// Exercício doido com strings
#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[10], palavra2[10], senha[7], auxiliar[3];
    int i;
    
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    
    // a) A primeira letra de cada uma
    printf("\n%c", palavra1[0]);
    printf("\n%c", palavra2[0]);
    
    // b) As quatro primeiras letras da palavra.
    printf("\n");
    for(i = 0; i < 4; i++){
        printf("%c", palavra1[i]);
    }
    
    printf("\n");
    
    for(i = 0; i < 4; i++){
        printf("%c", palavra2[i]);
    }
    
    // c) Crie uma variável chamada senha, e armazene nesta variável as três primeiras letras de cada palavra. Adicionar caracteres especiais entre cada palavra.
    for(i = 0; i < 3; i++){
        auxiliar[i] = palavra1[i];
    }
    
    strcat(senha, auxiliar);
    
    strcat(senha, "%");
    
    for(i = 0; i < 3; i++){
        auxiliar[i] = palavra2[i];
    }
    
    strcat(senha, auxiliar);
    
    printf("\n");
    printf("%s", senha);
}