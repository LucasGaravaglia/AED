#ifndef TESTEAERONAVE_H
#define TESTEAERONAVE_H

#include "gerastruct.h"
#include <stdio.h>
#include <stdlib.h>
#include "estruturas.h"
#include "lista_cliente.h"
#include "lista_voo.h"
#include "lista_aeronave.h"
#include "relatoriotestes.h"

/* testeaeronave
 * Versão: 2.0
 * Ultima Modificação: 19/04/2019 - 15:39
 * Ultimo Editor: Lucas
 */


/*Função que teste a função inserir e printa um relatorio com o numero de Structs aceitas
 * ->NUM_TESTE = Quantidade de testes aplicados.
 * <- Quantidade de testes aceitos.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Nenhum.
 */
int TestInsertPlane(int NUM_TESTE);

#endif // TESTEAERONAVE_H
