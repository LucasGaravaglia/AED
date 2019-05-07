#ifndef CONTROLE_H
#define CONTROLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "estruturas.h"
#include "validacao.h"

/* Controle
 * Versão: 2.0
 * Ultima Modificação: 19/04/2019 - 15:00
 * Ultimo Editor: Levi
 */


/*
 * Funções de tempo
 */

/* Função que converte um char entre 0 e 9 em inteiro
 * -> a = char a ser convertido para int
 * <- valor convertido
 * pre_condição: nenhuma
 * pos_condição: nenhuma
 */
int charToNum(char a);

/* Função que converte uma quantidade de min(inteiros) em horas(inteiro)
 * -> hora = inteiro contendo a quantidade de minutos
 * <- inteiro que contem o formato da hora para ser convertido
 * em string, ATENÇÂO: valor inutil!!
 * pre_condição:nenhuma
 * pos_condição:nenhuma
 */
int toHora(int min);

/* Função que converte um horário string para inteiro, em minutos
 * -> hora = string contendo as horas
 * <- valor inteiro convertido em minutos
 * pre_condição: nenhuma
 * Pos_condição:nenhuma
 */
int toMin(char *hora);

/* Função calcula hora da chegada
 * ->char de chegada
 * ->char de partida
 * ->char de duracao
 * pre_condição: nenhuma
 * Pos_condição:nenhuma
 */
void timeArrival(char * chegada, char * partida, char * duracao);

/* Função imprime o tempo atual no arquivo
 * ->Ponteiro para arquivo(já aberto)
 * pre_condição: ponteiro aberto para arquivo
 * pos_condição: arquivo ainda continua em aberto
 */
void printTimeFile(FILE *f);

/* Função imprime o tempo atual no terminal
 * pre_condição: nenhuma
 * Pos_condição:nenh
 */
void printTime();

/*
 * 
 * Funções de captura de caracter
 * 
 */
 
/* Função que pega um digito sem a necessidade do enter (versao 2)
 * -> Sem entrada
 * <- Retorna o caractere pego
 * pre_condição: nenhuma
 * Pos_condição:nenhuma
 */
char getchChar();

#endif
