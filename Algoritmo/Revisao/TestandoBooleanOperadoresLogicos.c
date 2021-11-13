#include <stdio.h>
#include <stdbool.h>

int main() {
    int temperatura = 18, humidade = 79, vento = 13, qualidade_ar = 33;
    
    bool frio = temperatura < 20; //Verdadeiro
    bool ar_seco = humidade <= 30; //Falso
    bool vento_forte = vento >= 60; //Falso
    bool qualidade_ar_boa = qualidade_ar <= 50; //Verdadeiro
    
    bool ir_caminhar = !ar_seco && qualidade_ar_boa; //Verdadeiro
    bool beber_muita_agua = ar_seco || !qualidade_ar_boa; //Falso
    bool ir_para_praia = !frio && !vento_forte; //Falso
    bool problemas_respiratorios = ar_seco || !qualidade_ar_boa; //Verdadeiro
    bool fazer_chapinha = !vento_forte && !ar_seco; //Falso
    bool usar_vestido = !vento_forte && !frio; //Falso
    bool ir_para_parque = !frio || qualidade_ar_boa || !ar_seco && vento_forte; //Verdadeiro
    bool ficar_em_casa = frio && vento_forte; //Falso
    
    return 0;
}