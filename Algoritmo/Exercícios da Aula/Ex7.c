#include<stdio.h>
void main()
{
  char nome[61][10];
  int idade[10], i = 0, indice_mais_velho, indice_mais_novo, maior_idade = 0, menor_idade;
  
  do{
      printf("Digite o %d° nome: ", i + 1);
      scanf("%s", nome[i]);
      
      printf("Digite a idade dessa pessoa: ");
      scanf("%d", &idade[i]);
      
      if(idade[i] > maior_idade){
          maior_idade = idade[i];
          indice_mais_velho = i;
          if(i == 0){
            menor_idade = idade[i];
          indice_mais_novo = i;
          }
      } else if(idade[i] <= menor_idade) {
          menor_idade = idade[i];
          indice_mais_novo = i;
      }
      
      i++;
  }while(i < 10);
  
  printf("O nome da pessoa mais velha eh: %s, com idade igual a: %d\n", nome[indice_mais_velho], idade[indice_mais_velho]);
  printf("O nome da pessoa mais nova eh: %s, com idade igual a: %d", nome[indice_mais_novo], idade[indice_mais_novo]);
}