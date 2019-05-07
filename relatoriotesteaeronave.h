#ifndef RELATORIOTESTEAERONAVE_H
#define RELATORIOTESTEAERONAVE_H

#define porcento  '%'
#include "testeaeronave.h"
#include "lista_aeronave.h"
#include "grafico.h"
#include "testeaeronave.h"

/* relatoriotesteaeronave
 * Versão: 1.0
 * Ultima Modificação: 19/04/2019 - 15:39
 * Ultimo Editor: Lucas
 */




/*Função que recebe a quantidade de testes validos, e quantos foram testados, e imprimi na tela.
 * ->int voo = Quantidade de aeronave validos
 * ->int total = Quantidade total de testes realizados.
 * <-Sem retorno.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Apresenta o Resultado na tela.
 */
void TerminalPlaneTest(int aeronave,int total);

/*Função que recebe a quantidade de aeronaves validos, e quantos foram testados, e imprimi um relatorio.
 * ->char *fn = Local onde sera armazenado o relatorio
 * ->int aeronave = Quantidade de aeronaves validos
 * ->int total = Quantidade total de testes realizados.
 * <-Sem retorno.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Apresenta o resultado em um arquivo.
 */
void PlaceTestReport(int aeronave,int total);

#endif // RELATORIOTESTEAERONAVE_H
