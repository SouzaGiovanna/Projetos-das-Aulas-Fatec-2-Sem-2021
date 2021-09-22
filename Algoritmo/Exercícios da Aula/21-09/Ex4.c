// Fatorial de um número
#include <stdio.h>

int main() {
    int n, produto = 1;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for(int i = n; i > 1; i--){
        produto *= i;
    }
    
    printf("O número %d possui como fatorial o número %d", n, produto);
}