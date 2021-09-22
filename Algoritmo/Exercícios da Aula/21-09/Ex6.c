// Exercício da série mais esquisita ainda
#include <stdio.h>

int main() {
    float serie = 0, j = 1000;
    
    for(int i = 1; i <= 30; i++){
        if(i % 2 != 0){
            serie += 5 / j;
        } else {
            serie -= 10 / j;
        }
        j -= 20;
    }
    
    printf("A série é igual a: %.2f", serie);
}