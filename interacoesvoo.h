#ifndef INTERACOESVOO_H
#define INTERACOESVOO_H

#include <string.h>
#include "lista_voo.h"
#include "validacao.h"
#include "estruturas.h"
#include "relatoriotestevoo.h"

/* Insere um voo via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Se o voo for válido, é inserido na lista
 */ 
void insertFlightTerminal(Lista_Voo **v);

/* Altera um voo via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: Se o voo for válido, é inserido na lista
 */
void changeFlightTerminal(Lista_Voo **v);

/* Remove um voo via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O voo é removido da lista
 */
void deleteFlightTerminal(Lista_Voo **v);

/* Mostra um voo via terminal
 * -> Endereço de ponteiro para lista
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O voo é mostrado na tela
 */
void showFlightTerminal(Lista_Voo **v);

/*
 * Faz testes, e mostra o resultado na tela e em um arquivo txt
 * Pré-condição: Nenhuma.
 * Pós-condição: Nunhuma.
 */
void CallFlightTest();


/*
 * Lê um arquivo com as entradas.
 * -> Endereço de ponteiro para lista de client
 * -> Endereço de ponteiro para lista de voo
 * <- Sem retorno
 * Pré-condição: Nenhuma.
 * Pós-condição: Lista alterada.
 */
void InsertFlightAndClientFile(Lista_Cliente **client,Lista_Voo **voo);


#endif // INTERACOESVOO_H
