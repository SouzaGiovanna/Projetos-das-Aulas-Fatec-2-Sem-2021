// Tabuada com Laço For
#include <stdio.h>

int main() {
    int valor;
    
    printf("Digite um número: ");
    scanf("%d", &valor);
    
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", valor, i, valor * i);
    }
    
    printf("Fim da tabuada!");
}