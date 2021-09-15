Algoritmo "Urna Eletrônica Giovanna"
Var
   zona_secao_eleitoral, voto : caractere
   cod_urna, cod_saida, eleitores_esperados, eleitores_presentes, votos_C1, votos_C2, votos_C3, votos_C4, votos_VB_prefeito, votos_VN_prefeito, votos_V1, votos_V2, votos_V3, votos_V4, votos_VB_vereador, votos_VN_vereador, votos_PDB, votos_PSB, votos_invalidos : inteiro

Inicio
      escreval("========IDENTIFICAÇÃO DA URNA ELETRÔNICA========")
      escreval(" ")
      
      escreval("Identificação da Seção e Zona Eleitoral......: ")
      leia(zona_secao_eleitoral)
      
      escreval("Total de Eleitores que podem votar...........: ")
      leia(eleitores_esperados)
      
      escreval("Código de Identificação da Urna Eletrônica...: ")
      leia(cod_urna)
      
      escreval(" ")
      escreval("===============VOTAÇÃO INDIVIDUAL===============")
      escreval(" ")
      
      //Inicializando as variáveis
      eleitores_presentes <- 0
      cod_saida <- 0
      votos_C1 <- 0
      votos_C2 <- 0
      votos_C3 <- 0
      votos_C4 <- 0
      votos_VB_prefeito <- 0
      votos_VN_prefeito <- 0
      votos_V1 <- 0
      votos_V2 <- 0
      votos_V3 <- 0
      votos_V4 <- 0
      votos_VB_vereador <- 0
      votos_VN_vereador <- 0
      votos_PDB <- 0
      votos_PSB <- 0
      votos_invalidos <- 0
      
      repita
            escreval("Eleitor ", eleitores_presentes + 1)
            escreval(" ")
            
            escreval("Voto ao Candidato à Prefeitura..: ")
            leia(voto)
            
            se(voto = "X") faca
                 cod_saida <- 1
            senao
                 escolha(voto)
                              caso "C1"
                                 votos_C1 <- votos_C1 + 1
                                 votos_PDB <- votos_PDB + 1
                              caso "C2"
                                 votos_C2 <- votos_C2 + 1
                                 votos_PDB <- votos_PDB + 1
                              caso "C3"
                                 votos_C3 <- votos_C3 + 1
                                 votos_PSB <- votos_PSB + 1
                              caso "C4"
                                 votos_C3 <- votos_C3 + 1
                                 votos_PSB <- votos_PSB + 1
                              caso "VB"
                                   votos_VB_prefeito <- votos_VB_prefeito + 1
                              caso "VN"
                                   votos_VN_prefeito <- votos_VN_prefeito + 1
                              outrocaso
                                   votos_invalidos <- votos_invalidos + 1
                 fimescolha
            fimse
            
      ate (cod_saida = 1 ou eleitores_presentes = eleitores_esperados)
Fimalgoritmo