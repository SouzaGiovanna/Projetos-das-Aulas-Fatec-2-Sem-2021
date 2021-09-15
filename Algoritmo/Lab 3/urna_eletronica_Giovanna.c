#include <stdio.h>

int main() {
    char zona_secao_eleitoral, voto[2];
    int cod_urna, cod_saida = 0, eleitores_esperados, eleitores_presentes = 0, votos_C1 = 0, votos_C2 = 0, votos_C3 = 0, votos_C4 = 0, votos_VB_prefeito = 0, votos_VN_prefeito = 0, votos_V1 = 0, votos_V2 = 0, votos_V3 = 0, votos_V4 = 0, votos_VB_vereador = 0, votos_VN_vereador = 0, votos_PDB = 0, votos_PSB = 0, votos_invalidos = 0;
    
    printf("========IDENTIFICAÇÃO DA URNA ELETRÔNICA========\n");
    
    printf("\nIdentificação da Seção e Zona Eleitoral......: ");
    scanf("%c", &zona_secao_eleitoral);
    
    printf("\nTotal de Eleitores que podem votar...........: ");
    scanf("%d", &eleitores_esperados);
    
    printf("\nCódigo de Identificação da Urna Eletrônica...: ");
    scanf("%d", &cod_urna);
    
    printf("\n\n===============VOTAÇÃO INDIVIDUAL===============\n\n");
    
    do{
        printf("Eleitor %d\n\n", eleitores_presentes + 1);
        
        printf("Voto ao Candidato à Prefeitura..: ");
        scanf("%s", &voto);
        
        if(strcmp (voto, "X") == 0){
            cod_saida = 1;
        } else {
            if(strcmp (voto, "C1") == 0){
                votos_C1++;
                votos_PDB++;
            } else if (strcmp (voto, "C2") == 0){
                votos_C2++;
                votos_PDB++;
            } else if (strcmp (voto, "C3") == 0){
                votos_C3++;
                votos_PSB++;
            } else if (strcmp (voto, "C4") == 0){
                votos_C4++;
                votos_PSB++;
            } else if (strcmp (voto, "VB") == 0){
                votos_VB_prefeito++;
            } else if (strcmp (voto, "VN") == 0){
                votos_VN_prefeito++;
            } else {
				votos_invalidos++;
			}
            
            printf("\nVoto ao Candidado a Vereador....: ");
            scanf("%s", &voto);
            
            if(strcmp (voto, "V1") == 0){
                votos_V1++;
                votos_PDB++;
            } else if (strcmp (voto, "V2") == 0){
                votos_V2++;
                votos_PDB++;
            } else if (strcmp (voto, "V3") == 0){
                votos_V3++;
                votos_PSB++;
            } else if (strcmp (voto, "V4") == 0){
                votos_V4++;
                votos_PSB++;
            } else if (strcmp (voto, "VB") == 0){
                votos_VB_vereador++;
            } else if (strcmp (voto, "VN") == 0){
                votos_VN_vereador++;
            } else {
				votos_invalidos++;
			}
			
			printf("\n\n ");
            
            eleitores_presentes++;
        }
    }while(cod_saida != 1 || eleitores_presentes != eleitores_esperados);
    
    printf("\n\n===========ENCERRAMENTO DAS ELEIÇÕES============\n\n");
    
    printf("===========DIVULGAÇÃO DOS RESULTADOS============\n\n");
    
    printf("Identificação da Seção e da Zona Eleitoral...: %c\n", zona_secao_eleitoral);
    printf("Total de Eleitores que podem votar...........: %d\n", eleitores_esperados);
    printf("Total de Eleitores que votaram...............: %d\n", eleitores_presentes);
    printf("Total de Eleitores que faltaram..............: %d\n", eleitores_esperados - eleitores_presentes);
    printf("Código de Indentificação da Urna Eletrônica..: %d\n", cod_urna);
    printf("Total de Votos Brancos e Nulos para Prefeito.: %d\n", votos_VB_prefeito + votos_VN_prefeito);
    printf("Total de Votos Brancos e Nulos para Vereador.: %d\n", votos_VB_vereador + votos_VN_vereador);
	printf("Total de Votos Inválidos.....................: %d\n", votos_invalidos);
    printf("Total de Votos Apurados para Prefeito........: %d\n", votos_C1 + votos_C2 + votos_C3 + votos_C4 + votos_VB_prefeito + votos_VN_prefeito);
    printf("Total de Votos Apurados para Vereador........: %d\n", votos_V1 + votos_V2 + votos_V3 + votos_V4 + votos_VB_vereador + votos_VN_vereador);
    
    printf("\n=====Votação Individual para cada Candidato=====\n\n");
    
    printf("Número de Votos para o Partido PDB...........: %d\n", votos_PDB);
    printf("Número de Votos para o Partido PSB...........: %d\n", votos_PSB);
    
    printf("\n=======Votação para Candidatos a Prefeito=======\n\n");
    
    printf("Número de Votos para o Candidato C1..........: %d\n", votos_C1);
    printf("Número de Votos para o Candidato C2..........: %d\n", votos_C2);
    printf("Número de Votos para o Candidato C3..........: %d\n", votos_C3);
    printf("Número de Votos para o Candidato C4..........: %d\n", votos_C4);
    printf("Número de Votos Brancos......................: %d\n", votos_VB_prefeito);
    printf("Número de Votos Nulos........................: %d\n", votos_VN_prefeito);
    
    printf("\n=======Votação para Candidatos a Vereador=======\n\n");
    
    printf("Número de Votos para o Candidato V1..........: %d\n", votos_V1);
    printf("Número de Votos para o Candidato V2..........: %d\n", votos_V2);
    printf("Número de Votos para o Candidato V3..........: %d\n", votos_V3);
    printf("Número de Votos para o Candidato V4..........: %d\n", votos_V4);
    printf("Número de Votos Brancos......................: %d\n", votos_VB_vereador);
    printf("Número de Votos Nulos........................: %d\n", votos_VN_vereador);
    
    printf("\n====================RESULTADO====================\n\n");
    
    //Verificar quem vai ser prefeito
    if(votos_C1 > votos_C2 && votos_C1 > votos_C3 && votos_C1 > votos_C4){
        printf("O Candidato a Prefeito mais Votado...........: Candidato 1\n\n");
    } else if(votos_C2 > votos_C1 && votos_C2 > votos_C3 && votos_C2 > votos_C4){
        printf("O Candidato a Prefeito mais Votado...........: Candidato 2\n\n");
    } else if(votos_C3 > votos_C2 && votos_C3 > votos_C1 && votos_C3 > votos_C4){
        printf("O Candidato a Prefeito mais Votado...........: Candidato 3\n\n");
    } else if(votos_C4 > votos_C2 && votos_C4 > votos_C1 && votos_C4 > votos_C3){
        printf("O Candidato a Prefeito mais Votado...........: Candidato 4\n\n");
    } else {
		printf("Empate");
	}
    
    //Verificar quem vai ser vereador
    if(votos_V1 > votos_V2 && votos_V1 > votos_V3 && votos_V1 > votos_V4){
        printf("O Candidato a Vereador mais Votado...........: Candidato 1\n\n");
    } else if(votos_V2 > votos_V1 && votos_V2 > votos_V3 && votos_V2 > votos_V4){
        printf("O Candidato a Vereador mais Votado...........: Candidato 2\n\n");
    } else if(votos_V3 > votos_V2 && votos_V3 > votos_V1 && votos_V3 > votos_V4){
        printf("O Candidato a Vereador mais Votado...........: Candidato 3\n\n");
    } else if(votos_V4 > votos_V2 && votos_V4 > votos_V1 && votos_V4 > votos_V3){
        printf("O Candidato a Vereador mais Votado...........: Candidato 4\n\n");
    } else {
		printf("Empate");
	}
}