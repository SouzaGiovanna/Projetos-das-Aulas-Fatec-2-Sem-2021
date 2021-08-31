#include <stdio.h>

void main(){
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    if(x < 0){
        x *= -1;
    }

    printf("O módulo é %d", x);
}