#include <stdio.h>

int main() {
    char sexo[50], experiencia[50];
    int idade[50], num_masc = 0, num_fem = 0, soma_idade = 0, homens_mais_50 = 0, mulheres_menos_30_com_experiencia = 0, menor_idade_com_experiencia, maior_idade_com_experiencia = 0, i = 0;
    float porcentagem_homens_mais_50, idade_media_com_experiencia;
    
    do{
        printf("\nDigite o sexo do(a) %d° candidato(a) - [f / m]: ", i + 1);
        scanf("%c", &sexo[i]);
        
        printf("\nDigite a idade desse(a) candidato(a): ");
        scanf("%d", &idade[i]);
        
        printf("\nEsse(a) candidato(a) possui experiência profissional? [s / n] ");
        scanf("%s", &experiencia[i]);
        
        //Descobrir a quantidade de candidados que são homens e mulheres
        if(sexo[i] == 'm'){
            num_masc++;
            
            //Se for homem, quero descobrir a porcentagem de candidatos homens maiores de 50 anos
            if(idade[i] > 50){
                homens_mais_50++;
            }
        } else {
            num_fem++;
            
            //Se for mulher, quero descobrir se candidatas mulheres tem experiência
            if(experiencia[i] == 's'){
                //Quero descobrir quantas tem idade menor que 30 anos
                if(idade[i] < 30){
                    mulheres_menos_30_com_experiencia++;
                }
                
                //Descobrir a menor e a maior idade das mulheres
                if(maior_idade_com_experiencia < idade[i]){
                    maior_idade_com_experiencia = idade[i];
                    
                    if(i == 0){
                        menor_idade_com_experiencia = maior_idade_com_experiencia;
                    }
                }
                if(menor_idade_com_experiencia < idade[i]){
                    menor_idade_com_experiencia = idade[i];
                }
            }
        }
        
        //Descobrir os funcionários que possuem experiência
        if(experiencia[i] == 's'){
            //Somar a quantidade de funcionários com experiência para poder calcular a média de idade depois
            soma_idade += idade[i];
        }
        i++;
    }while(i < 50);
    
    idade_media_com_experiencia = soma_idade / 50;
    porcentagem_homens_mais_50 = (homens_mais_50 * 100) / num_masc;
    
    printf("\nO número de candidatos do sexo masculino eh: %d", num_masc);
    printf("\nO número de candidatos do sexo feminino eh: %d", num_fem);
    printf("\nA média de idade dos candidatos com experiência eh: %f", idade_media_com_experiencia);
    printf("\nA porcentagem de homens com mais de 50 anos eh: %f %", porcentagem_homens_mais_50);
    printf("\nO número de mulheres com idade inferior a 30 e com experiência eh: %d", mulheres_menos_30_com_experiencia);
    printf("\nA mulher mais nova das candidatas tem idade igual a: %d", menor_idade_com_experiencia);
    printf("\nA mulher mais velha das candidatas tem idade igual a: %d", maior_idade_com_experiencia);
}