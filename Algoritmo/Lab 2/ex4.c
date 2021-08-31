#include <stdio.h>

void main(){
    float x, y;

    printf("Digite o primeiro número: ");
    scanf("%f", &x);

    printf("Digite o segundo número: ");
    scanf("%f", &y);

    if(x > y){
        printf("%f", x);
    } else {
        printf("%f", y);
    }
}