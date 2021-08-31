#include <stdio.h>

void main(){
    float salario;

    printf("Digite o valor do salário: ");
    scanf("%f", &salario);

    if(salario < 500){
        salario *= 2;
    } else if(salario < 1000){
        salario += salario * 0.75;
    } else if(salario < 1500){
        salario += salario * 0.5;
    } else if(salario < 2000){
        salario += salario * 0.25;
    } else if(salario < 3000){
        salario += salario * 0.1;
    } else if(salario < 5000){
        salario += salario * 0.05;
    } else {
        salario += salario * 0.02;
    }

    printf("O novo salário é: %f", salario);
}