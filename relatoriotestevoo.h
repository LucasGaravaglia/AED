#ifndef RELATORIOTESTEVOO_H
#define RELATORIOTESTEVOO_H


#define porcento  '%'
#include "lista_voo.h"
#include "grafico.h"
#include "testevoo.h"

/* relatoriotestevoo
 * Versão: 1.0
 * Ultima Modificação: 19/04/2019 - 15:39
 * Ultimo Editor: Lucas
 */



/*Função que recebe a quantidade de voo validos, e quantos foram testados, e imprimi um relatorio.
 * ->char *fn = Local onde sera armazenado o relatorio
 * ->int voo = Quantidade de voos validos
 * ->int total = Quantidade total de testes realizados.
 * <-Sem retorno.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Apresenta o resultado em um arquivo.
 */
void TestFlightReport(int voo,int total);

/*Função que recebe a quantidade de testes validos, e quantos foram testados, e imprimi na tela.
 * ->int voo = Quantidade de voos validos
 * ->int total = Quantidade total de testes realizados.
 * <-Sem retorno.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Apresenta o Resultado na tela.
 */
void TerminalFlightTest(int voo,int total);


#endif // RELATORIOTESTEVOO_H
