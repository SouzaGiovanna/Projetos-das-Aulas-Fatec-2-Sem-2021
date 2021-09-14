#include <stdio.h>
int main() {
    int i = 1, j = 1;
    
    do{
        printf("Tabuada do %d\n", i);
        do{
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        }while(j <= 10);
        printf("==================\n");
        j = 1;
        i++;
    }while(i <= 10);
}