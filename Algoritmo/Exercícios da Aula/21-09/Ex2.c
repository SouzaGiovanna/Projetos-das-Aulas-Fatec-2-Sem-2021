// Quadrado Perfeito (com soma dos ímpares)
#include <stdio.h>

int main() {
    int n, quadrado = 0;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for(int i = 1; i  <= n * 2; i += 2){
        quadrado += i;
    }
    
    printf("O número %d elevado ao quadrado é: %d", n, quadrado);
}