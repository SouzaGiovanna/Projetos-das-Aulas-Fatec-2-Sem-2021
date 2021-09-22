// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float serie = 1, i = 2;
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    do{
        serie += 1 / i;
        i++;
    } while(i <= n);
    
    printf("O valor dessa série é: %.2f", serie);
}