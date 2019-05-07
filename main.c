/* Empresa De Voo
 * Versão: 3.4.11.2
 * Ultima Modificação: 12/04/2019 - 20:00
 * Ultimo Editor: Caio
 */
 
 /* Legenda do Título
  * 0.0.0.0
  * VersaoDoPrograma.Main.Bibliotecas.Structs
 */
 
 /* Legenda de Comentários
  * A primeira linha explica o que faz a função(máx 1 linha);
  * -> Entrada de função
  * <- Retorno de função
*/
 
#include "relatoriotesteaeronave.h"
#include "relatoriotesteclietes.h"
#include "relatoriotestevoo.h"
#include "menus.h"
#include "estruturas.h"
#include "grafico.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Lista_Voo * V=NULL;
    Lista_Cliente * C=NULL;
    Lista_Plane * P=NULL;
      
    deciderMenu(C, P, V);
    return 0;
}
