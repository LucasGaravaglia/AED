#ifndef LISTA_CLIENTE_H
#define LISTA_CLIENTE_H
#include "controlevoo.h"
#include "controlecliente.h"
#include "controleaeronave.h"
#include <string.h>

/* Listas
 * Versão: 2.1
 * Ultima Modificação: 19/04/2019 - 12:00
 * Ultimo Editor: Levi
 */

/*
 * Funções de lista dos clientes
 */

/* Função que imprime a lista de clientes
 * ->Ponterio da cabeça da lista
 * ->pre_condição:ponteiro válido ou NULL
 * ->pós_condição: nenhuma
 */
void printClientList(Lista_Cliente * l);

/* Função que diz se alista eh vazia
 * ->Ponterio da cabeça da lista
 * <- retorna 1 se a lista é vazia e 0 se nao
 * ->pre_condição:ponteiro válido ou NULL
 * ->pós_condição: nenhuma
 */
int voidClient(Lista_Cliente *l);

/* Função que insere um cliente na lista de clientes
 * ->Ponterio da cabeça da lista
 * ->struct Client carregada com dados
 * <-Ponteiro para cabeça da lista
 * ->pre_condição:ponteiro válido ou NULL
 * ->pos_condição:Lista é alterada
 */
Lista_Cliente * insertListClient(Lista_Cliente *l, Client info);

/* Função que altera um cliente na lista de clientes
 * ->Ponterio da cabeça da lista
 * ->struct Client (info) carregada com novos dados
 * ->struct Client (desejada) a ser alterada
 * <- retorna 1 se alterou 0 se nao
 * pre_condição:Ponteiro Valido ou NULL
 * pos_condição:elemento da lista é alterado
 */
int changeListClient(Lista_Cliente *l, Client info, Client desejada);

/* Função que Consulta(imprime na tela) um client da lista
 * ->Ponterio da cabeça da lista
 * ->struct Client a ser Consultada
 * <-retorna 1 se achou o voo, 0 se nao achou
 * pre_condição:ponteiro valido ou NULL, Client info deve 
 * conter um cpf válido
 * pos_condição:Nehuma
 */
int printListClient(Lista_Cliente *l, Client info);

/* Função que Deleta um client da lista
 * ->Ponterio da cabeça da lista
 * ->struct Client a ser deletada
 * pre_condição: ponteiro valido ou NULL, Client info deve conter
 * um cpf váldo
 * Pos_condição: o elemento é eliminado da lista
 */
Lista_Cliente * deleteListClient(Lista_Cliente *l, Client info);

/* Função que conta quantos elementos a na lista.
 * ->ponteiro para Lista_client
 * <-Retorna a quantidade de itens na lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição:nenhuma
 */
int countListClient(Lista_Cliente *v);

/*
 * Função atribui a um endereço de Lista_Client um Cliente válido
 * -> Vetor de ponteiro para Lista_Client
 * -> Srtuct Client carregada com dados
 * <- Retorna 1 se deu certo, 0 se nao inseriu nada
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: Lista_Client recebe um item valido
*/
int assingClient(Lista_Cliente * l, Client entrada);

/* Função insere voos via arquivo na Lista_Client
 * ->Ponteiro para Lista_Voo
 * <-endereço da cabeça da lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição: lista é alterada
 */
Lista_Cliente *insertListClientFile(Lista_Cliente *l);

/* Verifica se um elemento está dentro da lista de clientes
 * -> Ponteiro para lista de voos e cpf do cliente
 * <- 1 para positivo e 0 para caso contrário
 * Pré-condição: Nenhuma
 * Pós-condição: Nenhuma
 */
int isInClientList(Lista_Cliente *v, char *cpf);

/* Acha um cliente e coloca em uma struct passada como parâmetro
 * -> Ponteiro para lista, Ponteiro para struct e cpf do cliente
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Nenhuma
 */
void returnStructClient(Lista_Cliente *v, Client *voo, char *cpf);


/* Função que imprime na tela todos os clientes da lista detalhadamente
 * ->Ponterio da cabeça da lista
 * pre_condição:ponteiro valido ou NULL
 * pos_condição:Lista é impressa na tela
 */
void printListaClientDetails(Lista_Cliente * l);


#endif
