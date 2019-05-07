#ifndef INTERACAOCLIENTE_H
#define INTERACAOCLIENTE_H

#include <string.h>
#include "lista_cliente.h"
#include "validacao.h"
#include "estruturas.h"
#include "relatoriotesteclietes.h"

/* Insere um cliente via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Se o cliente for válido, é inserido na lista
 */ 
void insertClientTerminal(Lista_Cliente **v);

/* Altera um cliente via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Se o cliente for válido, é inserido na lista
 */
void changeClientTerminal(Lista_Cliente **v);

/* Remove um cliente via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição:O cliente é removida da lista
 */
void deleteClientTerminal(Lista_Cliente **v);

/* Mostra um cliente via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O cliente é mostrada na tela
 */
void showClientTerminal(Lista_Cliente **v);

/* Mostra um cliente via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O cliente é mostrada na tela
 */
void showClientTerminalUser(Lista_Cliente **v);

/*
 * Faz testes, e mostra o resultado na tela e em um arquivo txt
 * Pré-condição: Nenhuma.
 * Pós-condição: Nunhuma.
 */
void CallClientTest();


#endif // INTERACAOCLIENTE_H
