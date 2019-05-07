#ifndef GRAFICO_H
#define GRAFICO_H
#include "lista_cliente.h"
#include "lista_voo.h"
#include "lista_aeronave.h"
#include "controlevoo.h"
#include "controlecliente.h"
#include "controleaeronave.h"

/* Grafico
 * Versão: 2.1
 * Ultima Modificação: 19/04/2019 - 13:00
 * Ultimo Editor: Levi
 */

/* Função printa o nome das cias aereas do Brasil
 * ->char do prefixo
 * Pre_condição:nenhuma
 * pos_condição: é apresentado na tela o nome da cia aerea correspondente
 */
void cia_aerea(char * cia);

/* Função imprime o quadro de status doos voos
 * ->Ponteiro para Lista de voos
 * pre_condição:lista nao vazia
 * Pos_condição: quadro é impresso na tela
 */
void imprime_quadro(Lista_Voo * l);



#endif
