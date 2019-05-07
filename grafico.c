#include "grafico.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void cia_aerea(char * cia){
    if(strstr(cia,"GOL")){
        printf("       GOL      ");
    }else if(strstr(cia,"TAM")){
        printf("       TAM      ");
    }else if(strstr(cia,"G3")){
        printf("       GOL      ");
    }else if(strstr(cia,"AZU")){
        printf("       AZUL     ");
    }else if(strstr(cia,"LATAM")){
        printf("       LATAM    ");
    }else if(strstr(cia,"VRG")){
        printf("      VARIG     ");
    }else if(strstr(cia,"ONE")){
        printf("     Avianca    ");
    }else if(strstr(cia,"GLO")){
        printf("       GOL      ");
    }else {
        printf("     Nacional   ");
    }
}

void imprime_quadro(Lista_Voo * l){

    int i=0;
    char a='0', b='m';
    Lista_Voo *aux=l;
    char temp[20];


    system("clear");
    printf("Se deseja visualizar o quadro de voos com horario atual digite \"A\"");
    printf("\nSe deseja simular um horario qualquer digite\"S\"");
    b=getchChar();
    system("clear");

    if(b=='S' || b=='s'){
        printf("Insira o horario desejado:");
        scanf("%s", temp);
        while(!checkTime(temp)){
        printf("Hora inválida, redigite\n:");
        gets(temp);
        }
        orderListFlightManual(l, temp);
        printf("manual\n");
    }
    else {
        orderListFlight(l);
    }


    while(a!='s' && a!='S'){





    l=aux;
    system("clear");
    printf("Hora Atual - ");
    if(b=='S' || b=='s')printf("%s 2019\n", temp);
    else printTime();


        printf("                                                              QUADRO DE VOOS\n");
printf("                     --------------------------------------------------------------------------------------------------------------------------\n");
//printf("   VOO     CIA       ORIGEM          ORIGEM      SAIDA      STATUS     | \n");                                                                      |\n");
printf("                     |      VOO     |       CIA      |        ORIGEM         |          DESTINO       |  SAIDA  |              STATUS         |\n");
printf("                     ===============|================|=======================|========================|=========|==============================\n");
    i=0;
    while(i<10 && l){
printf("                     ===============|================|=======================|========================|=========|==============================\n");
printf("                     |    %s   |", l->voo.prefixo);
cia_aerea(l->voo.prefixo);
printf("| %-21s | %-22s |  %-3s  |", l->voo.nomeO, l->voo.nomeD, l->voo.horaP);
if(b=='S' || b=='s') manualShowStatus(l->voo.horaP,temp);
else showStatus(l->voo.horaP);
printf("                     ===============|================|=======================|========================|=========|==============================\n");
    i++;
    l=l->prox;
    }
    printf("Digite \"A\" para atualizar | Digite \"S\" para Sair\n");
    a=getchChar();
    }
    printf("\n\n\n");
    system("clear");

}

