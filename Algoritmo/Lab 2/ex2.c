#include <stdio.h>

void main(){
    float x, y, z;

    printf("Digite o primeiro valor: ");
    scanf("%f", &x);

    printf("Digite o segundo valor: ");
    scanf("%f", &y);

    printf("Digite o terceiro valor: ");
    scanf("%f", &z);

    if(x > y && x > z){
        if(y > z){
            printf("%f > %f > %f", x, y, z);
        } else {
            printf("%f > %f > %f", x, z, y);
        }
    } else if(y > x && y > z){
        if(x > z){
            printf("%f > %f > %f", y, x, z);
        } else {
            printf("%f > %f > %f", y, z, x);
        }
    } else {
        if(x > y){
            printf("%f > %f > %f", z, x, y);
        } else {
            printf("%f > %f > %f", z, y, x);
        }
    }
}