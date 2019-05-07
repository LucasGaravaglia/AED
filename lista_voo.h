#ifndef LISTA_VOO_H
#define LISTA_VOO_H
#include "controlevoo.h"
#include "controlecliente.h"
#include "controleaeronave.h"

/* Listas
 * Versão: 2.1
 * Ultima Modificação: 19/04/2019 - 12:00
 * Ultimo Editor: Levi
 */

/*
 * Funções de lista dos voos
 */
 

/* Função que diz se alista eh vazia
 * ->Ponterio da cabeça da lista
 * <- retorna 1 se a lista é vazia e 0 se nao
 * ->pre_condição:ponteiro válido ou NULL
 * ->pós_condição: nenhuma
 */
int voidFlight(Lista_Voo * l);

/* Função que imprime a lista de voos
 * ->Ponterio da cabeça da lista
 * ->pre_condição:ponteiro válido ou NULL
 * ->pós_condição: nenhuma
 */
void printFlightList(Lista_Voo * l);

/* Função que insere um voo na lista de voos
 * ->Ponterio da cabeça da lista
 * ->struct Flight carregada com dados
 * <-Ponteiro para cabeça da lista
 * ->pre_condição:ponteiro válido ou NULL
 * ->pos_condição:Lista é alterada
 */
Lista_Voo * insertListFlight(Lista_Voo * l, Flight info);

/* Função que altera um voo da lista de voos
 * ->Ponterio da cabeça da lista
 * ->struct Flight (info) carregada com novos dados
 * ->struct Flight (desejada) a ser alterada
 * <- retorna 1 se alterou 0 se nao
 * pre_condição:Ponteiro Valido ou NULL
 * pos_condição:elemento da lista é alterado
 */
int changeListFlight(Lista_Voo * l, Flight info, Flight desejada);

/* Função que Consulta(imprime na tela) um voo da lista de voos
 * ->Ponterio da cabeça da lista
 * ->struct Flight a ser Consultada
 * <-retorna 1 se achou o voo, 0 se nao achou
 * pre_condição:ponteiro valido ou NULL, FLight info deve 
 * conter um prefixo válido
 * pos_condição:Nehuma
 */
int printListFlight(Lista_Voo * l, Flight info);

/* Função que imprime na tela todos os voos da lista detalhadamente
 * ->Ponterio da cabeça da lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição:Lista é impressa na tela
 */
void printListaFlightDetails(Lista_Voo * l);

/* Função que Deleta um voo da lista de voos
 * ->Ponterio da cabeça da lista
 * ->struct Flight a deletada
 * pre_condição: ponteiro valido ou NULL, Flight info deve conter
 * um prefixo váldo
 * Pos_condição: o elemento é eliminado da lista
 */
Lista_Voo * deleteListFlight(Lista_Voo * l, Flight info);

/* Função que ordena uma lista segundo a função status
 * ->Ponterio da cabeça da lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: lista é ordenada
 */
void orderListFlight(Lista_Voo *l);

/* Função que ordena uma lista segundo a função status_manual
 * ->Ponterio da cabeça da lista
 * ->char contendo o horario - formato hh:mm
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: lista é ordenada
 */
void orderListFlightManual(Lista_Voo *l, char *temp);

/* Função que ordena uma lista segundo o horario de partida
 * ->Ponterio da cabeça da lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: lista é ordenada
 */
void orderListFlightTime(Lista_Voo *l);

/* Função que conta quantos elementos a na lista.
 * ->Lista de voo
 * <-Retorna a quantidade de itens na lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição:nenhuma
 */
int countListFlight(Lista_Voo *v);

/*
 * Função atribui a um endereço de Lista_Voo um Voo válido
 * -> Vetor de ponteiro para Lista_Voo
 * -> Srtuct Fligth carregada com dados
 * <- Retorna 1 se deu certo, 0 se nao inseriu nada
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: Lista_voo recebe um item valido
*/
int assingFlight(Lista_Voo * l, Flight entrada);


/* Função insere voos via arquivo na Lista_voo
 * ->Ponteiro para Lista_Voo
 * <-endereço da cabeça da lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: lista é alterada
 */
Lista_Voo * insertListFlightFile(Lista_Voo * l);

/* Verifica se um elemento está dentro da lista de voos
 * -> Ponteiro para lista de voos e prefixo do voo
 * <- 1 para positivo e 0 para caso contrário
 * Pré-condição: Nenhuma
 * Pós-condição: Nenhuma
 */
int isInFlightList(Lista_Voo *v, char *prefixo);

/* Acha um voo e coloca em uma struct passada como parâmetro
 * -> Ponteiro para lista, Ponteiro para struct e prefixo do voo
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Nenhuma
 */
void returnStructFlight(Lista_Voo *v, Flight *voo, char *prefixo);

#endif
