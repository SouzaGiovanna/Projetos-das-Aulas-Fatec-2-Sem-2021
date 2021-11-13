#include <stdio.h>
#include <stdbool.h>

int main() {
    float base, altura;
    
    printf("Programa para calcular área de retângulos");
    printf("\nDigite a base: ");
    scanf("%f", &base);
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    printf("A área desse retângulo é: %.20f", base * altura);
    
    return 0;
}