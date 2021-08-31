#include <stdio.h>

void main(){
    float altura, peso_ideal;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (f/m): ");
    scanf("%c", &sexo);

    if(sexo == "f"){
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        peso_ideal = (72.7 * altura) - 58;
    }

    printf("O seu peso ideal eh %f", peso_ideal);
}