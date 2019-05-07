#ifndef MENUS_H
#define MENUS_H
/* Menus
 * Versão: 3.0
 * Ultima Modificação: 19/04/2019 - 01:16
 * Ultimo Editor: Caio
 */


/*
 *
 * Funções auxiliares para os menus
 * 
 */
 #include "lista_voo.h"
 #include "lista_aeronave.h"
 #include "lista_cliente.h"

 
#define TECLAPARACIMA1 119
#define TECLAPARACIMA2 87
#define TECLAPARABAIXO1 115
#define TECLAPARABAIXO2 83
#define ENTER 10
#define SAIRDOPROGRAMA 0
#define INSERIR 0
#define ALTERAR 1
#define MOSTRAR 2
#define REMOVER 3
#define VOO 0
#define CLIENTE 1
#define AERONAVE 2
#define MENUPRINCIPAL 1
#define MENUUSUARIO 3
#define MENUADM 2
#define MENUTESTES 7
#define MENUADMVOO 4
#define MENUADMCLIENTE 5
#define MENUADMAERONAVES 6


/* Função auxiliar que ajuda a movimentação no menu
 * ->b = Ponteiro para variavel de controle,a = valor digitado, primeiro = primeiro elemento do menu e ultimo = ultimo elemento do menu
 * <- Retorna 1 caso o caractere seja enter e 0 caso não seja
 * Pré-condição: Nenhuma
 * Pós-condição: A posição correta do menu é retornada
 */
int movmentMenu(int teclaPressionada, int *posicaoDoMenu, int primeiro, int ultimo);

/*  
 * 
 * Funções principais dos menus
 *
 */
 
/* Função que mostra na tela o menu do usuário
 * -> Variavel de controle do menu
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O menu do usuário é executado
 */
void userMenu(int *var);

/* Função que mostra na tela o menu do administrador
 * -> Variavel de controle do menu
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O menu do administrador é executado
 */
void admMenu(int *var);

/* Função que mostra na tela o menu base
 * -> Variavel de controle do menu
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O menu base é executado
 */
void mainMenu(int *var);

/* Função que mostra na tela o menu de testes
 * -> Variável de controle do menu
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O menu de testes é executado
 */
void testsMenu(int *var);

/* Função que mostra na tela o menu de cadastro
 * -> Variável de controle do menu e variável de controle de cadastro
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O menu de registro é executado
 */
void registerMenu(int *var, int tipoCadastro, int operacao); 

/* Função que mostra na tela o menu de funções de administrador
 * -> Variável de controle de menu
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O menu de funções de administrador é executado
 */
void funcAdmMenu(int *var, int tipoCadastro);

/* Função que executa os menus
 * -> Sem entrada
 * <- Sem retorno
 * Pré-condição: Nenhuma
 * Pós-condição: O menu é executado
 */
void deciderMenu(Lista_Cliente *c, Lista_Plane *p, Lista_Voo *v);
#endif
