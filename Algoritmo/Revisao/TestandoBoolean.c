#include <stdio.h>
#include <stdbool.h>

int main() {
    int temperatura = 18, humidade = 79, vento = 13, qualidade_ar = 33;
    bool frio = temperatura < 20; //Verdadeiro
    bool ar_seco = humidade <= 30; //Falso
    bool vento_forte = vento >= 60; //Falso
    bool qualidade_ar_boa = qualidade_ar <= 50; //Verdadeiro
    
    return 0;
}