#include <stdio.h>
#include <math.h>

void main(){
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta > 0){
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);

        printf("Tendo delta como: %f, temos como raízes x1: %f e x2 %f", delta, x1, x2);
    } else {
        printf("Não possui raízes reais");
    }
}