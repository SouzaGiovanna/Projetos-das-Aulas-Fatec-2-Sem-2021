#include <stdio.h>

void main(){
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    if(x > y){
        printf("A diferença entre %d e %d é %d", x, y, x - y);
    } else {
        printf("A diferença entre %d e %d é %d", y, x, y - x);
    }
}