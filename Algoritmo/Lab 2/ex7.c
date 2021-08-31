#include <stdio.h>

void main(){
    int a, b, c, d;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    printf("Digite o quarto número: ");
    scanf("%d", &d);

    if(d < a) {
        printf("%d < %d < %d < %d", d, a, b, c);
    } else {
        printf("%d < %d < %d < %d", a, b, c, d);
    }
}