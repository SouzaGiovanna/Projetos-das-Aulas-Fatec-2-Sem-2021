#include <stdio.h>
#include <stdbool.h>

// Disciplina  : [Algoritimo e Lógica de Programação]
// Professora  : Eliane Santiago
// Turma       : 1° Desenvolvimento de Software Multiplataforma
// Descrição   : Escrever um algoritmo/programa que receba dois valores inteiros positivos (x e y) e informar se x é divisível por y. 
// Autor(a)    : Ana Claudia Rescia Royo Felippe - RA: 1111392121026
// Autor(a)    : Evaristo Batista Tavares Esteves - RA: 1111392121008
// Autor(a)    : Giovanna de Souza Almeida - RA: 1111392121031
// Autor(a)    : Marco Royo Felippe - RA: 1111392121039
// Data atual  : 05/10/2021

void imprimirObjetivoLab(){
    printf("Programa TESTE DE DIVISIBILIDADE\n");
    printf("\nO programa tem por objetivo informar se um determinado numero eh ou nao divisivel por outro.\n");
    printf("\nOs testes de divisibilidade sao validos para os seguintes divisores: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15 e 25.\n");
}

bool divisibilidade4(int num){
    int dezena = num, divisao, resto = num;
    bool divisivel;
    
    if(num > 100){
        while(dezena > 100){
            dezena = num - 100;
        }
        num = dezena;
    }
    
    divisao = num / 4;
    resto -= divisao * 4;
    
    return resto == 0;
}

bool divisibilidade5(int num){
    bool divisivel;
    
    while(num >= 10){
        num -= 10;
    }
    
    return num == 0 || num == 5;
}

bool divisibilidade6(int num){
    int resto2 = num, resto3 = num, divisao = num;
    
    divisao = num / 2;
    resto2 -= divisao * 2;
    
    divisao = num;
    divisao = num / 3;
    resto3 -= divisao * 3;
    
    return resto2 == 0 && resto3 == 0;
}

void main() {
    int dividendo, divisor;
    char resposta;
    bool valido = true, divisibilidade, novamente;
    
    imprimirObjetivoLab();
    
    do{
        do{
            printf("\n\nDividendo: ");
            scanf("%d", &dividendo);
            
            printf("\nDivisor: ");
            scanf("%d", &divisor);
            
            switch(divisor){
                case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 15: case 25:
                    valido = true;
                    break;
                default:
                    printf("\nDivisor invalido! Favor informar novos valores\n");
                    valido = false;
            }
        }while(!valido);
        
        do{
            printf("\n\nDeseja realizar um novo teste (s/n)? ");
            resposta = getchar();
            
            switch(resposta){
                case 's': case 'S':
                    valido = true;
                    novamente = true;
                    break;
                case 'n': case 'N':
                    valido = true;
                    novamente = false;
                    break;
                default:
                    valido = false;
                    printf("\n\nResposta invalida! Favor informar uma resposta valida");
            }
        }while(!valido);
    }while(novamente);
}