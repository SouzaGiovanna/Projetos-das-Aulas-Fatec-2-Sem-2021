#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// Disciplina  : [Algoritimo e Lógica de Programação]
// Professora  : Eliane Santiago
// Turma       : 1° Desenvolvimento de Software Multiplataforma
// Descrição   : Escrever um algoritmo/programa que receba dois valores inteiros positivos (x e y) e informar se x é divisível por y. 
// Autor(a)    : Ana Claudia Rescia Royo Felippe - RA: 1111392121026
// Autor(a)    : Evaristo Batista Tavares Esteves - RA: 1111392121008
// Autor(a)    : Giovanna de Souza Almeida - RA: 1111392121031
// Autor(a)    : Marco Royo Felippe - RA: 1111392121039
// Data atual  : 05/10/2021

#define ITOA(n) my_itoa((char [41]) { 0 }, (n) )

char *my_itoa(char *dest, int i) {
  sprintf(dest, "%d", i);
  return dest;
}

void imprimirObjetivoLab(){
    printf("Programa TESTE DE DIVISIBILIDADE\n");
    printf("\nO programa tem por objetivo informar se um determinado numero é ou não divisível por outro.\n");
    printf("\nOs testes de divisibilidade são válidos para os seguintes divisores: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15 e 25.\n");
}

bool divisibilidade2(int num){
    int unidade = num;
    bool divisivel;
    
    if(num > 10){
        while(unidade > 10){
            unidade -= 10;
        }
    }
    
    switch(unidade){
        case 0: case 2: case 4: case 6: case 8:
            divisivel = true;
            break;
        default:
            divisivel = false;
    }
    
    return divisivel;
}

bool divisibilidade3(int num){
    bool resultado = false;
    char *ptr = ITOA(num);
    size_t length = strlen(ptr);
    int soma = 0;
    
    while(length > 1) {
        for(int i = 0; i < length; i++) {
            soma += (ptr[i] - '0');
        }
        
        num = soma;
        ptr = ITOA(num);
        length = strlen(ptr);
        soma = 0;
    }
    
    switch(num) {
        case 3: case 6: case 9:
            resultado = true;
            break;
    }
    
    return resultado;
}

bool divisibilidade4(int num){
    bool resultado = false;
    
    if(divisibilidade2(num) && divisibilidade2(num / 2)){
        resultado = true;
    }
    
    return resultado;
}

bool divisibilidade5(int num){
    bool divisivel;
    
    while(num >= 10){
        num -= 10;
    }
    
    return num == 0 || num == 5;
}

bool divisibilidade6(int num){
    return divisibilidade2(num) && divisibilidade3(num);
}

bool divisibilidade7(int num){
    int x = num, ultimo, inicio, teste;
    bool resultado = false;
    
    do
    {
        ultimo = x % 10;
        inicio = x / 10;
        teste = fabs(inicio - (2 * ultimo));
        x = teste;
    } while (x > 70);

    if((x == 7)||(x == 14)||(x == 21)||(x == 28)||(x == 35)||(x == 42)||(x == 49)||(x == 54)||(x == 63)||(x == 70)){
        resultado = true;
    }

	return resultado;
}

bool divisibilidade8(int num){
    bool resultado = false;
    
    if(divisibilidade2(num) && divisibilidade2(num / 2) && divisibilidade2((num / 2) / 2)){
        resultado = true;
    }
    
    return resultado;
}

bool divisibilidade9(int num){
    bool resultado = false;
    
    if(divisibilidade3(num) && divisibilidade3(num / 3)){
        resultado = true;
    }
    
    return resultado;
}

bool divisibilidade10(int num){
    while(num >= 10){
        num -= 10;
    }
    
    return num == 0;
}

bool divisibilidade11(int num){
    int x = num, y = 0, si = 0, sp = 0, teste, usi, usp, si2 = 0, sp2 = 0, teste2;
    bool resultado = false;
    
    while(x > 10){
        usi = x % 10;
        si = si + usi;
        x = x / 10;
        usp = x % 10;
        sp = sp + usp;
        x = x / 10;
    }
    if(x != 0){
        si = si + x;
    }
    if((fabs(sp - si)) == 0){
        return true;
    }
    else{
        teste = fabs(sp - si);
        usi = teste % 10;
        si2 = si2 + usi;
        teste = teste / 10;
        usp = teste % 10;
        sp2 = sp2 + usp;
        if((fabs(sp2 - si2)) == 0){
            resultado = true;
        }
    }    
    
    return resultado;
}

bool divisibilidade12(int num){
    bool resultado = false;
    
    if((divisibilidade3(num)) && divisibilidade4(num)){
        resultado = true;
    } 

    return resultado;  
}

bool divisibilidade15(int num){
    bool resultado = false;
    
    if((divisibilidade3(num)) && divisibilidade5(num)){
        resultado = true;
    }
    
    return resultado;  
}

bool divisibilidade25(int num){
    bool resultado = false;
    
    if(divisibilidade5(num) && divisibilidade5(num / 5)){
        resultado = true;
    }
    return resultado;
}

bool testarDivisibilidade(int dividendo, int divisor){
    bool resultado;
    
    switch(divisor){
        case 2:
            resultado = divisibilidade2(dividendo);
            break;
        case 3:
            resultado = divisibilidade3(dividendo);
            break;
        case 4:
            resultado = divisibilidade4(dividendo);
            break;
        case 5:
            resultado = divisibilidade5(dividendo);
            break;
        case 6:
            resultado = divisibilidade6(dividendo);
            break;
        case 7:
            resultado = divisibilidade7(dividendo);
            break;
        case 8:
            resultado = divisibilidade8(dividendo);
            break;
        case 9:
            resultado = divisibilidade9(dividendo);
            break;
        case 10:
            resultado = divisibilidade10(dividendo);
            break;
        case 11:
            resultado = divisibilidade11(dividendo);
            break;
        case 12:
            resultado = divisibilidade12(dividendo);
            break;
        case 15:
            resultado = divisibilidade15(dividendo);
            break;
        case 25:
            resultado = divisibilidade25(dividendo);
            break;
        default:
            resultado = false;
    }
    
    return resultado;
}

void main() {
    setlocale(LC_ALL, "pt_BR_utf8");
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
                    printf("\nDivisor inválido! Favor informar novos valores\n");
                    valido = false;
            }
        }while(!valido);

	if(testarDivisibilidade(dividendo, divisor)){
            printf("\n%d eh divisivel por %d", dividendo, divisor);
        } else {
            printf("\n%d NAO eh divisivel por %d", dividendo, divisor);
        }
        
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
                    printf("\n\nResposta inválida! Favor informar uma resposta válida");
            }
        }while(!valido);
    }while(novamente);
}