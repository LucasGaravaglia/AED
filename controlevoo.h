#ifndef CONTROLEVOO_H
#define CONTROLEVOO_H

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
 * Funções de status
 *
 */


/* Função que retorna o status de um voo com base no horário setado pelo usuario
 * -> horaPartida = string contendo o horário de partida de um voo
 * -> hora_usuario = string contendo o horário selecionado pelo usuario
 * <- 0 à 8 significando os 9 possíveis estados para o voo
 * Pré_condição: nenhuma
 * Pós_condição:nenh
*/
int manualStatus(char *horaPartida, char * hora_usuario);

/* Função que retorna o status de um voo com base no horário atual da máquina
 * -> horaPartida = string contendo o horário de partida de um voo
 * <- 0 à 8 significando os 8 possíveis estados para o voo
 * Pré_condição: nenhuma
 * Pós_condição:nenhuma
 */
int status(char *horaPartida);

/* Função que mostra o status de um voo na tela
 * -> horaPartida = string contendo o horário de partida de um voo
 * <- sem retorno
 * Pré_condição: nenhuma
 * Pós_condição:nenhuma
 */
void showStatus(char *horaPartida);

/* Função que mostra o status de um voo na tela
 * -> horaPartida = string contendo o horário de partida de um voo
 * -> hora_usuario = string contendo o horário desejado
 * <- sem retorno
 * Pré_condição: hora no formato hh:mm
 * Pós_condição:nenhuma
 */
void manualShowStatus(char *horaPartida, char * hora_usuario);

/*
 * 
 * Funções de controle dos voos
 * 
 */

/* Função que troca os dados entre dois voos
 * -> Ponteiro para Flight
 * -> Ponteiro para Flight
 * Pré_condição: nenhuma
 * Pós_condição: os Flight sao ivertidos
 */
void changeFlight(Flight *l, Flight *b);

/*
 * imprime um voo da memoria
 * -> Struct Flight carregada com dados
 * Pré_condição: todos os dados alocados na memoria
 * Pós_condição:nenhuma
*/
void printFlight(Flight voo);



#endif // CONTROLEVOO_H
