Algoritmo "Lab2_Sistema de Votação"
// Disciplina  : [Algoritimo e Lógica de Programação]
// Professor   : Eliane Santiago
// Turma       : 1° Desenvolvimento de Software Multiplataforma
// Descrição   : Sistema de votação como a urna eletrônica TRE
// Autor(a)    : Ana Claudia Rescia Royo Felippe - RA: 1111392121026
// Autor(a)    : Evaristo Batista Tavares Esteves - RA: 1111392121008
// Autor(a)    : Giovanna de Souza Almeida - RA: 1111392121031
// Autor(a)    : Marco Royo Felippe - RA: 1111392121039
// Data atual  : 19/09/2021
Var

   zeid, seid, tee, tev, ctev, idmesario, ideleitor, idurna : inteiro
   tprefbc, tprefnl, tpref1, tpref2, tpref3, tpref4 : inteiro
   tverbc, tvernl, tver1, tver2, tver3, tver4 : inteiro
   opcpref, opcver, prefvencedor,vervencedor : caractere
   abtc : real

Inicio

   //Inicializando a urna
   escreval("+-------------------------------------------------------------------+")
   escreval("|                                                                   |")
   escreval("|                     Justiça Eleitora do Brasil                    |")
   escreval("|                                                                   |")
   escreval("+-------------------------------------------------------------------+")
   escreval("|                                                                   |")
   escreva ("|   Informe a Zona Eleitoral: ")
   leia(zeid)
   escreval("|                                                                   |")
   escreva ("|   Informa a Seção Eleitoral: ")
   leia(seid)
   escreval("|                                                                   |")
   escreva ("|   Informa o ID da Urna Eletrônica: ")
   leia(idurna)
   escreval("|                                                                   |")
   escreva ("|   Informe a quantidade de Eleitores desta Seção Eleitoral: ")
   leia(tee)
   escreval("|                                                                   |")
   escreva ("|   Informe o ID do Presidente da Mesa: ")
   leia(idmesario)
   escreval("|                                                                   |")
   escreval("+-------------------------------------------------------------------+")

   // Inicializando as variáveis
   ctev <- 1
   tpref1 <- 0
   tpref2 <- 0
   tpref3 <- 0
   tpref4 <- 0
   tver1 <- 0
   tver2 <- 0
   tver3 <- 0
   tver4 <- 0
   tev <- 0

   enquanto ctev <= tee faca

      limpatela
      escreval("+-------------------------------------------------------------------+")
      escreval("|                     Justiça Eleitora do Brasil                    |")
      escreval("+-------------------------------------------------------------------+")
      escreval("| Zona Eleitoral: ", zeid, "   |   Seção Eleitoral: ", seid ,"     |   Urna: ", idurna, "    |")
      escreval("+-------------------------------------------------------------------+")
      escreva("| Informe o Id do Eleitor: ")
      leia(ideleitor)

      //Caso o ID do Presidente da Mesa seja digitado, será encerrada a votação!!

      //Iniciando a votação de Prefeitos

      se(ideleitor <> idmesario)entao
         limpatela
         escreval("+-------------------------------------------------------------------+")
         escreval("|                     Justiça Eleitora do Brasil                    |")
         escreval("+-------------------------------------------------------------------+")
         escreval("| Zona Eleitoral: ", zeid, "   |    Seção Eleitoral: ", seid ,"     |   Urna: ", idurna, "    |")
         escreval("+-------------------------------------------------------------------+")
         escreval("|                     Votação para Prefeito                         |")
         escreval("+-------------------------------------------------------------------+")
         escreval("|                                                                   |")
         escreval("|                    [ C1 ] - Candidato 1                           |")
         escreval("|                    [ C2 ] - Candidato 2                           |")
         escreval("|                    [ C3 ] - Candidato 3                           |")
         escreval("|                    [ C4 ] - Candidato 4                           |")
         escreval("|                    [ BC ] - Branco                                |")
         escreval("|                    [ NL ] - Nulo                                  |")
         escreva ("|                      ")
         leia(opcpref)

         escolha opcpref

         caso "C1"
            tpref1 <- tpref1 + 1
         caso "C2"
            tpref2 <- tpref2 + 1
         caso "C3"
            tpref3 <- tpref3 + 1
         caso "C4"
            tpref4 <- tpref4 + 1
         caso "BC"
            tprefbc <- tprefbc + 1
         outrocaso
            tprefnl <- tprefnl +1
         fimescolha


         //Iniciando a votação de Vereadores

         limpatela
         escreval("+-------------------------------------------------------------------+")
         escreval("|                     Justiça Eleitora do Brasil                    |")
         escreval("+-------------------------------------------------------------------+")
         escreval("| Zona Eleitoral: ", zeid, "   |    Seção Eleitoral: ", seid ,"     |   Urna: ", idurna, "    |")
         escreval("+-------------------------------------------------------------------+")
         escreval("|                     Votação para Vereador                         |")
         escreval("+-------------------------------------------------------------------+")
         escreval("|                                                                   |")
         escreval("|                    [ V1 ] - Candidato 1                           |")
         escreval("|                    [ V2 ] - Candidato 2                           |")
         escreval("|                    [ V3 ] - Candidato 3                           |")
         escreval("|                    [ V4 ] - Candidato 4                           |")
         escreval("|                    [ BC ] - Branco                                |")
         escreval("|                    [ NL ] - Nulo                                  |")
         escreva ("|                      ")
         leia(opcver)

         escolha opcver

         caso "V1"
            tver1 <- tver1 + 1
         caso "V2"
            tver2 <- tver2 + 1
         caso "V3"
            tver3 <- tver3 + 1
         caso "V4"
            tver4 <- tver4 + 1
         caso "BC"
            tverbc <- tverbc + 1
         outrocaso
            tvernl <- tvernl +1
         fimescolha

         ctev <- ctev +1
         tev <- tev + 1

      senao
         ctev <- tee + 1
      fimse

   fimenquanto

   //Calculando o % de abstenção

   abtc <- (((tee - tev) / tee)) * 100)

   //Verificando os ganhadores

   se((tpref1 > tpref2) e (tpref1 > tpref3) e (tpref1 > tpref4))entao
      prefvencedor <- "Candidato_1"
   senao
      se((tpref2 > tpref1) e (tpref2 > tpref3) e (tpref2 > tpref4))entao
         prefvencedor <- "Candidato_2"
      senao
         se((tpref3 > tpref1) e (tpref3 > tpref2) e (tpref3 > tpref4))entao
            prefvencedor <- "Candidato_3"
         senao
            se((tpref4 > tpref1) e (tpref4 > tpref2) e (tpref4 > tpref3))entao
               prefvencedor <- "Candidato_4"
            senao
               prefvencedor <- "Eleição para prefeito empatada!!"
            fimse
         fimse
      fimse
   fimse


   se((tver1 > tver2) e (tver1 > tver3) e (tver1 > tver4))entao
      vervencedor <- "Candidato_1"
   senao
      se((tver2 > tver1) e (tver2 > tver3) e (tver2 > tver4))entao
         vervencedor <- "Candidato_2"
      senao
         se((tver3 > tver1) e (tver3 > tver2) e (tver3 > tver4))entao
            vervencedor <- "Candidato_3"
         senao
            se((tver4 > tver1) e (tver4 > tver2) e (tver4 > tver3))entao
               vervencedor <- "Candidato_4"
            senao
               vervencedor <- "Eleição para vereador empatada!!"
            fimse
         fimse
      fimse
   fimse

   //Exibindo
   limpatela
   escreval("+-------------------------------------------------------------------+")
   escreval("|                     Justiça Eleitora do Brasil                    |")
   escreval("+-------------------------------------------------------------------+")
   escreval("| Zona Eleitoral: ", zeid, "   |    Seção Eleitoral: ", seid ,"     |")
   escreval("+-------------------------------------------------------------------+")
   escreval("|                     Fim da Votação da urna, ", idurna, "                |")
   escreval("+-------------------------------------------------------------------+")
   escreval("|                     TOTALIZAÇÃO DOS VOTOS                         |")
   escreval("+-------------------------------------------------------------------+")
   escreval("|                                                                   |")
   escreval("|   Total de Eleitores da Seção Eleitoral", tee)
   escreval("|   Total de Eleitores Votantes: ", tev)
   escreval("|   Precentual de Abstenção: ",  abtc, " %")
   escreval("|                                                                   |")
   escreval("+-------------------------------------------------------------------+")
   escreval("|                                                                   |")
   escreval("|   Totalização de Votos para Prefeito")
   escreval("|                                                                   |")
   escreval("|   Candidato 1  ", tpref1, " votos")
   escreval("|   Candidato 2  ", tpref2, " votos")
   escreval("|   Candidato 3  ", tpref3, " votos")
   escreval("|   Candidato 4  ", tpref4, " votos")
   escreval("|   Votos Brancos", tprefbc, " votos")
   escreval("|   Votos Nulos  ", tprefnl, " votos")
   escreval("|                                                                   |")
   escreval("|   O vencedor da Eleição:  ", prefvencedor, "                             |")
   escreval("+-------------------------------------------------------------------+")
   escreval("|                                                                   |")
   escreval("|   Totalização de Votos para Vereadores")
   escreval("|                                                                   |")
   escreval("|   Candidato 1  ", tver1, " votos")
   escreval("|   Candidato 2  ", tver2, " votos")
   escreval("|   Candidato 3  ", tver3, " votos")
   escreval("|   Candidato 4  ", tver4, " votos")
   escreval("|   Votos Brancos", tverbc, " votos")
   escreval("|   Votos Nulos  ", tvernl, " votos")
   escreval("|                                                                   |")
   escreval("|   O vencedor da Eleição:  ", vervencedor, "                             |")
   escreval("+-------------------------------------------------------------------+")



Fimalgoritmo