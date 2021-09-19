Algoritmo "Lab2_Sistema de Votação"
// Disciplina   : [Algoritimo e Lógica de Programação]
// Professor   : Eliane Santiago
// Descrição   : Sistema de votação como a urna eletrônica TRE
// Autor(a)    : Ana Claudia Rescia Royo Felippe
// Autor(a)    : Evaristo Batista
// Autor(a)    : Giovanna
// Autor(a)    : Marco Royo Felippe
// Data atual  : 19/09/2021
Var

   zeid, seid, tee, tev, ctev, idmesario, ideleitor, idurna : inteiro
   tprefbc, tprefnl, tpref1, tpref2, tpref3, tpref4 : inteiro
   tverbc, tvernl, tver1, tver2, tver3, tver4 : inteiro
   opcpref, opcver : caractere
   abtc : real

Inicio

   //Inicializando a urna

   escreval("Justiça Eleitora do Brasil")
   escreval(" ")
   escreva("Informe a Zona Eleitoral: ")
   leia(zeid)
   escreval(" ")
   escreva("Informa a Seção Eleitoral: ")
   leia(seid)
   escreval(" ")
   escreva("Informe a quantidade de Eleitores desta Seção Eleitoral: ")
   leia(tee)
   escreval(" ")
   escreva("Informe o ID do Presidente da Mesa: ")
   leia(idmesario)

   ctev <- 0
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
      escreva("Informe o Id do Eleitor: ")
      leia(ideleitor)

      se(ideleitor <> idmesario)entao

         escreval("Votação para Prefeito")
         escreval(" ")
         escreval(" [ C1 ] - Candidato 1 ")
         escreval(" [ C2 ] - Candidato 2 ")
         escreval(" [ C3 ] - Candidato 3 ")
         escreval(" [ C4 ] - Candidato 4 ")
         escreval(" [ BC ] - Branco ")
         escreval(" [ NL ] - Nulo")
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

         limpatela

         escreval("Votação para Vereador")
         escreval(" ")
         escreval(" [ V1 ] - Candidato 1 ")
         escreval(" [ V2 ] - Candidato 2 ")
         escreval(" [ V3 ] - Candidato 3 ")
         escreval(" [ V4 ] - Candidato 4 ")
         escreval(" [ BC ] - Branco ")
         escreval(" [ NL ] - Nulo")
         leia(opcver)

         escolha opcpref

         caso "C1"
            tver1 <- tver1 + 1
         caso "C2"
            tver2 <- tver2 + 1
         caso "C3"
            tver3 <- tver3 + 1
         caso "C4"
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

   abtc <- (((tee - tev) / tee)) * 100)
   limpatela
   
   escreval("Fim da Votação da urna, ", idurna )
   escreval("Zona Eleitora: ", zeid)
   escreval("Seção Eleitoral: ", seid)
   escreval("Totalização dos Votos")
   
   escreval("Total de Eleitores da Seção Eleitoral", tee)
   escreval("Total de Eleitores Votantes: ", tev)
   escreval("Precentual de Abstenção: ",  abtc, " %")
   
   escreval("Totalização de Votos para Prefeito")
   escreval("Candidato 1  ", tpref1, " votos")
   escreval("Candidato 2  ", tpref2, " votos")
   escreval("Candidato 3  ", tpref3, " votos")
   escreval("Candidato 4  ", tpref4, " votos")
   escreval("Votos Brancos", tprefbc, " votos")
   escreval("Votos Nulos  ", tprefnl, " votos")
   

   escreval("Totalização de Votos para Vereadores")
   escreval("Candidato 1  ", tver1, " votos")
   escreval("Candidato 2  ", tver2, " votos")
   escreval("Candidato 3  ", tver3, " votos")
   escreval("Candidato 4  ", tver4, " votos")
   escreval("Votos Brancos", tverbc, " votos")
   escreval("Votos Nulos  ", tvernl, " votos")

   

Fimalgoritmo