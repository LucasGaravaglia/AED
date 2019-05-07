#ifndef RELATORIOTESTES_H
#define RELATORIOTESTES_H

#include "lista_cliente.h"
#include "lista_voo.h"
#include "lista_aeronave.h"
#include "grafico.h"

/* relatoriotestes
 * Versão: 1.0
 * Ultima Modificação: 19/04/2019 - 15:39
 * Ultimo Editor: Lucas
 */


/*Função que recebe a quantidade de testes validos, e quantos foram testados, e imprimi um relatorio.
 * ->char *fn = Local onde sera armazenado o relatorio
 * ->int voo = Quantidade de voos validos
 * ->int pessoa = quantidade de pessoas validas.
 * ->int aeronave = quantidade de aeronaves validas.
 * ->int total = Quantidade total de testes realizados.
 * <-Sem retorno.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Apresenta o resultado em um arquivo.
 */
void TestReport(int voo,int pessoa, int aeronave,int total);



/*Função que recebe a quantidade de testes validos, e quantos foram testados, e imprimi na tela.
 * ->int voo = Quantidade de voos validos
 * ->int pessoa = quantidade de pessoas validas.
 * ->int aeronave = quantidade de aeronaves validas.
 * ->int total = Quantidade total de testes realizados.
 * <-Sem retorno.
 * Pre-Requisito : Nunhum.
 * Pos-Requisito : Apresenta o Resultado na tela.
 */
void AllTerminalTests(int voo,int pessoa, int aeronave,int total);

/*
 * Faz testes, e mostra o resultado na tela e em um arquivo txt
 * Pré-condição: Nenhuma.
 * Pós-condição: Nunhuma.
 */
void CallTestAll();








#endif // RELATTESTE_H
