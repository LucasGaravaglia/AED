#ifndef RELATORIOTESTECLIETES_H
#define RELATORIOTESTECLIETES_H

#define porcento  '%'
#include "testecliente.h"
#include "lista_cliente.h"
#include "grafico.h"
#include "testecliente.h"

/* relatoriotesteclientes
 * Versão: 1.0
 * Ultima Modificação: 19/04/2019 - 15:39
 * Ultimo Editor: Lucas
 */




/*Função que recebe a quantidade de clients validos, e quantos foram testados, e imprimi um relatorio.
 * ->char *fn = Local onde sera armazenado o relatorio
 * ->int client = Quantidade de clients validos
 * ->int total = Quantidade total de testes realizados.
 * <-Sem retorno.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Apresenta o resultado em um arquivo.
 */
void CustomerTestReport(int client,int total);


/*Função que recebe a quantidade de testes validos, e quantos foram testados, e imprimi na tela.
 * ->int voo = Quantidade de clients validos
 * ->int total = Quantidade total de testes realizados.
 * <-Sem retorno.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Apresenta o Resultado na tela.
 */
void TerminalClientTest(int client,int total);

#endif // RELATORIOTESTECLIETES_H
