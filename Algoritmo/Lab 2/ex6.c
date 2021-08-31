#include <stdio.h>

void main(){
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 5){
        printf("Esse aluno foi aprovado com a média: %f", media);
    } else {
        printf("Esse aluno foi reprovado com a média: %f", media);
    }
}