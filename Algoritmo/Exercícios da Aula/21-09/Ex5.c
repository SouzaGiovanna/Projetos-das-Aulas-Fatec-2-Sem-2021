// Exercício da série
#include <stdio.h>

int main() {
    float serie = 1;
    int j = 3;
    
    for(int i = 2; i <= 50; i++){
        serie += i / j;
        j += 2;
    }
    
    printf("A série é igual a: %d", serie);
}