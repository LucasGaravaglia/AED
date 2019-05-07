#ifndef GERASTRUCT_H
#define GERASTRUCT_H

#include <time.h>
#include "lista_cliente.h"
#include "lista_voo.h"
#include "lista_aeronave.h"
#include <string.h>
#include <stdlib.h>

/* testecadastros
 * Versão: 4.0
 * Ultima Modificação: 11/04/2019 - 21:18
 * Ultimo Editor: Lucas
 */


/*Função que gera um vetor de char com letras aleatorias.
 * ->k = tamanho maximo da string.
 * ->v = string que recebera as letras aleatorias.
 * ->p = variavel de controle de números aleatórios
 */
void GenerateChar(int k,char *v,int p);
/*Função que olha o numero da repetição e retorna se ela esta na porcentagem de erro ou não.
 * ->n = o número da repetição que se encontra atualmente a função.
 */
int GenerateError(int n);
/*Função que gera uma sigla aleatoria de 3 digitos maiscula.
 * ->t = string que recebera a sigla toda em maiúscula.
 * ->p = variavel de controle de números aleatórios
 */
void GenerateInitials(char t[],int p);
/*função que gera uma hora dentro do padrao hh:mm
 * ->t = string onde sera armazenado a hora gerada de forma "hh:mm\0".
 * ->p = variavel de controle de números aleatórios
 */
void GenerateHour(char t[],int p);
/*Função que gera um cpf no padrao 11 digitos.
 * ->tamanho = recebe o tamanho maximo da string, que seria 11.
 * ->v = a string que sera armazenado o cpf.
 * ->p = variavel de controle de números aleatórios
 */
void GenerateCpf(int tamanho, char *v,int p);
/*Função que gera um cpf errado que varia de tamanho de 9/14 digitos.
 * ->tamanho = recebe o tamanho maximo da string, que seria 11.
 * ->v = a string que sera armazenado o cpf.
 * ->p = variavel de controle de números aleatórios
 */
void GenerateCpfError(int tamanho, char *v,int p);
/*Função que gera um valor para milha aleatorio.
 * ->pessoa = variavel que recebera um numero aleatorio que sera a milha.
 * ->p = variavel de controle de números aleatórios
 */
void GenerateVolue(int *pessoa, int p);
/*Função que gera uma struct de voo
 * ->bom = struct que sera armazenado as variaveis.
 * ->n = tamhno maximo das strings
 * ->p = variavel de controle de números aleatórios
 * ->j = numero que esta a repetição para gerar o erro.
 */
void GenerateStructFlight(Flight *bom,int n,int *p,int j);
/*Função que gera uma struct de pessoa
 * ->pessoa = struct que sera armazenado as variaveis.
 * ->n = tamhno maximo das strings
 * ->p = variavel de controle de números aleatórios
 * ->j = numero que esta a repetição para gerar o erro.
 */
void GenerateStructPerson(Client *pessoa,int n,int *p,int j);
/*Função que gera e envia uma struct de voo com valores aleatorios que podem ou não estar com um erro dentro dela
 * ->v = vetor de struc principal para enviar a função insere_voo
 * ->nvoo = contador para envia a função insere_voo
 */
void GenerateStructPlane(Plane *aeronave,int n, int *p);

#endif // GERASTRUCT_H
