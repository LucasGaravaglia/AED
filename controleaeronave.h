#ifndef CONTROLEAERONAVE_H
#define CONTROLEAERONAVE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "estruturas.h"
#include "validacao.h"
#include "controle.h"

/*
 * Funções de controle das aeronaves
 * 
*/

/*
 * imprime uma aeronave da memoria
 * -> Struct PLane carregada com dados
 * pre_condição: todos os dados alocados na memoria
 * Pos_condição:nenhuma
*/
void printPlane(Plane p);

/* Função que troca os dados entre duas aeronaves
 * -> Ponteiro para Plane
 * -> Ponteiro para Plane
 * pre_condição: nenhuma
 * Pos_condição: os Planes sao ivertidos
 */
void changePlane(Plane *a, Plane *b);


#endif // CONTROLEAERONAVE_H
