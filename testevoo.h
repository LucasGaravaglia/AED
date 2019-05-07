#ifndef TESTEVOO_H
#define TESTEVOO_H

#include "gerastruct.h"
#include <stdio.h>
#include <stdlib.h>
#include "estruturas.h"
#include "lista_voo.h"
#include "relatoriotestes.h"

/* testecadastros
 * Versão: 2.0
 * Ultima Modificação: 19/04/2019 - 15:39
 * Ultimo Editor: Lucas
 */

/*Função que imprime os dados gerados na função FlightInsertTest
 * ->Ponteiro para Flight
 * Pre-Requisito : estrutura com todos os dados alocados
 * Pos-Requisito : impresso em um arquivo
 */
void printDataFlightFile(Flight * voo);

/*Função que teste a função inserir e printa um relatorio com o numero de Structs aceitas
 * ->NUM_TESTE = Quantidade de testes aplicados.
 * <- Quantidade de testes aceitos.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Nenhum.
 */
int FlightInsertTest(int NUM_TESTE);

#endif // TESTEVOO_H
