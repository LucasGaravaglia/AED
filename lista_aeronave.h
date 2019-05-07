#ifndef LISTA_AERONAVE_H
#define LISTA_AERONAVE_H
#include "controlevoo.h"
#include "controlecliente.h"
#include "controleaeronave.h"

/* Listas
 * Versão: 2.1
 * Ultima Modificação: 19/04/2019 - 12:00
 * Ultimo Editor: Levi
 */


/*
 * Funções de lista das aeronaves
 */
/* Função que diz se alista eh vazia
 * ->Ponterio da cabeça da lista
 * <- retorna 1 se a lista é vazia e 0 se nao
 * ->pre_condição:ponteiro válido ou NULL
 * ->pós_condição: nenhuma
 */
int voidPlane(Lista_Plane * l);

/* Função que imprime a lista de aeronaves
 * ->Ponterio da cabeça da lista
 * ->pre_condição:ponteiro válido ou NULL
 * ->pós_condição: nenhuma
 */
void printPlaneList(Lista_Plane * l);

/* Função que insere uma aeronave na lista
 * ->Ponterio da cabeça da lista
 * ->struct Plane carregada com dados
 * <-Ponteiro para cabeça da lista
 * ->pre_condição:ponteiro válido ou NULL
 * ->pos_condição:Lista é alterada
 */
Lista_Plane * insertListPlane(Lista_Plane *l, Plane info);

/* Função que altera umaeronave na lista
 * ->Ponterio da cabeça da lista
 * ->struct Plane (info) carregada com novos dados
 * ->struct Plane (desejada) a ser alterada
 * <- retorna 1 se alterou 0 se nao
 * pre_condição:Ponteiro Valido ou NULL
 * pos_condição:elemento da lista é alterado
 */
int changeListPlane(Lista_Plane *l, Plane info, Plane x);

/* Função que Consulta(imprime na tela) um client da lista
 * ->Ponterio da cabeça da lista
 * ->struct Plane a ser Consultada
 * <-retorna 1 se achou, 0 se nao achou
 * pre_condição:ponteiro valido ou NULL, Plane info deve 
 * conter um modelo válido
 * pos_condição:Nehuma
 */
int printListPlane(Lista_Plane *l, Plane info);

/* Função que Deleta uma aeronave da lista
 * ->Ponterio da cabeça da lista
 * ->struct Plane a ser deletada
 * pre_condição: ponteiro valido ou NULL, Plane info deve conter
 * um modelo váldo
 * Pos_condição: o elemento é eliminado da lista
 */
Lista_Plane * deleteListPlane(Lista_Plane *l, Plane info);

/* Função que conta quantos elementos a na lista.
 * ->ponteiro para Lista_Plane
 * <-Retorna a quantidade de itens na lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição:nenhuma
 */
int countListPlane(Lista_Plane *v);

/*
 * Função atribui a um endereço de Lista_Plane uma aeronave válida
 * -> Vetor de ponteiro para Lista_Plane
 * -> Srtuct Plane carregada com dados
 * <- Retorna 1 se deu certo, 0 se nao inseriu nada
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: Lista_Client recebe um item valido
*/
int assingPlane(Lista_Plane * l, Plane entrada);


/* Função insere aeronaves via arquivo na Lista_PLane
 * ->Ponteiro para Lista_Plane
 * <-endereço da cabeça de lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: lista é alterada
 */
Lista_Plane * insertListPlaneFile(Lista_Plane * l);

/* Verifica se um elemento está dentro da lista de aeronaves
 * -> Ponteiro para lista de voos e modelo da aeronave
 * <- 1 para positivo e 0 para caso contrário
 * Pré-condição: Nenhuma
 * Pós-condição: Nenhuma
 */
int isInPlaneList(Lista_Plane *l, char *modelo);

/* Acha uma aeronave e coloca em uma struct passada como parâmetro
 * -> Ponteiro para lista, Ponteiro para struct e modelo da aeronave
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Nenhuma
 */
void returnStructPlane(Lista_Plane *v, Plane *p, char *modelo);


#endif
