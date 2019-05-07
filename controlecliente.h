#ifndef CONTROLECLIENTE_H
#define CONTROLECLIENTE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "estruturas.h"
#include "validacao.h"
#include "controle.h"

/*
 * 
 * Funções de controle dos Clientes
 * 
 */
 
/*
 * imprime um cliente da memoria
 * -> Struct Client carregada com dados
 * pre_condição: todos os dados alocados na memoria
 * Pos_condição:nenhuma
*/

void printClient(Client c);

/* Função que troca os dados entre dois clientes
 * -> Ponteiro para Client
 * -> Ponteiro para Client
 * pre_condição: nenhuma
 * Pos_condição: os Clients sao ivertidos
 */
void changeClient(Client *a, Client *b);



#endif // CONTROLECLIENTE_H
