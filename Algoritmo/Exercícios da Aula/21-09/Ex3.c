// Número Termial
#include <stdio.h>

int main() {
    int n, soma = 0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for(int i = 1; i  <= n; i++){
        soma += i;
    }
    
    printf("O número %d possui como termial o número %d", n, soma);
}