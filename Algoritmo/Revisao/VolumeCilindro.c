#include <stdio.h>
#include <stdbool.h>

int main() {
    float raio, altura, area;
    
    printf("Programa para calcular o volume de cilindro");
    printf("\nDigite o raio: ");
    scanf("%f", &raio);
    area = raio * raio * 3.14;
    
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    printf("A área desse retângulo é: %.2f", area * altura);
    
    return 0;
}