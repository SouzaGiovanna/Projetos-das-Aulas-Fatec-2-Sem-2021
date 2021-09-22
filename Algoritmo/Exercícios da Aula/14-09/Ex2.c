#include <stdio.h>
int main() {
    int x, y, i, soma = 0;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    
    if(x > y){
        i = y;
        do{
            if(i % 2 != 0){
                soma += i;
            }
            i++;
        }while(i <= x);
    } else {
        i = x;
        do{
            if(i % 2 != 0){
                soma += i;
            }
            i++;
        }while(i <= y);
    }
    printf("A soma eh: %d", soma);
}