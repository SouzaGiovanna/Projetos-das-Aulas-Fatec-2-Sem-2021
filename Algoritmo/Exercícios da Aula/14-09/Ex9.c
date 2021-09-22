// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    float serie = 0, i = 1, j = 2;
    
    do{
        if(fmod(i, 2) != 0){
            serie += i / j;
        } else {
            serie -= i / j;
        }
        i++;
        j += 2;
    } while(i <= 50);
    
    printf("O valor dessa série é: %.2f", serie);
}