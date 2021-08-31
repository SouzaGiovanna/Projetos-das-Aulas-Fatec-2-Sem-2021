#include <stdio.h>

void main(){
    int x;

    printf("Digite o número: ");
    scanf("%d", &x);

    if(x % 2 == 0 && x % 3 == 0){
        printf("Esse número eh divisível por 2 e por 3");
    } else if (x % 2 == 0 || x % 3 == 0){
        printf("Esse número eh divisível por 2 ou por 3");
    } else {
        printf("Esse número não eh divisível por 2 ou por 3");
    }
}