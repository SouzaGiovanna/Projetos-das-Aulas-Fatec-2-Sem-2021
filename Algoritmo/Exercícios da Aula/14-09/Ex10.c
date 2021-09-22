// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float salario_clarisbela, salario_florentina, dinheiro_aplicado_clarisbela, dinheiro_aplicado_florentina;
    int meses = 0;
    
    printf("Digite o salário da Clarisbela: R$ ");
    scanf("%f", &salario_clarisbela);
    
    salario_florentina = salario_clarisbela / 3;
    
    dinheiro_aplicado_clarisbela = salario_clarisbela;
    dinheiro_aplicado_florentina = salario_florentina;
    
    do{
        dinheiro_aplicado_clarisbela += dinheiro_aplicado_clarisbela * 0.02;
        dinheiro_aplicado_florentina += dinheiro_aplicado_florentina * 0.05;
        
        meses++;
    }while(dinheiro_aplicado_clarisbela >= dinheiro_aplicado_florentina);
    
    printf("\nO salário de Florentina eh: R$ %f", salario_florentina);
    printf("\nSerão necessários %d meses para que o dinheiro aplicado de Florentina seja igual ou maior que o dinheiro aplicado de Clarisbela", meses);
}