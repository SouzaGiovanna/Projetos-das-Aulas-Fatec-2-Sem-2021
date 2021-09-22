// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float serie = 1, i = 2, j = 3;
    
    do{
        serie += i / j;
        i++;
        j += 2;
    } while(i <= 50);
    
    printf("O valor dessa série é: %.2f", serie);
}