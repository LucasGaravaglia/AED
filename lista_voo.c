#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lista_voo.h"
#include "controleaeronave.h"
#include "controlecliente.h"
#include "controlevoo.h"
#include <string.h>


/*
 * Funções de lista dos voos
 */
  
int voidFlight(Lista_Voo * l){
    return (!l);
}
void printFlightList(Lista_Voo * l){
    while(l){
        printf("%s\n", l->voo.prefixo);
        l=l->prox;
    }
}
Lista_Voo * insertListFlight(Lista_Voo * l, Flight info){
    Lista_Voo * aux;
    aux=malloc(sizeof(Lista_Voo));
    if(assingFlight(aux, info)){
        aux->prox=l;
        if(aux->prox)aux->prox->ant=aux;
        aux->ant=NULL;
        return aux;
    }else{
        free(aux);
        return l;
    }
}
int changeListaFlight(Lista_Voo * l, Flight info, Flight desejada){
    if(voidFlight(l))return NULL;
    while(!strstr(l->voo.prefixo, desejada.prefixo)){
        l=l->prox;
        if(voidFlight(l))break;
    }
    if(l && strstr(l->voo.prefixo, desejada.prefixo)){
        return  assingFlight(l, info);        
    }
    return NULL;   
}
int viewFlightList(Lista_Voo * l, Flight info){
    if(voidFlight(l))return NULL;
    while(!strstr(l->voo.prefixo,info.prefixo)){
        l=l->prox;
        if(voidFlight(l))break;
    }
    if(l && strstr(l->voo.prefixo,info.prefixo)){
        printFlight(l->voo);
        return 1;
    }
    return NULL;
}
void printListaFlightDetails(Lista_Voo * l){
    while(l){
        printf("-------------------------\n");
        printFlight(l->voo);
        printf("\n-----------------------");
        l=l->prox;
    }
    printf("\n\nDigite qualquer tecla para voltar ao menu");
    getchar();
}
Lista_Voo * deleteListFlight(Lista_Voo * l, Flight info){
    Lista_Voo * head=l;
    if(voidFlight(l))return NULL;
    if(strstr(l->voo.prefixo,info.prefixo)){//se for na cabeça
        head=l->prox;
        free(l->voo.prefixo);
        free(l->voo.nomeD);
        free(l->voo.nomeO);
        free(l->voo.tipo);
        free(l);
        if(head)head->ant=NULL;
        return head;
    }
    while(!strstr(l->voo.prefixo,info.prefixo)){
        l=l->prox;
        if(voidFlight(l))break;
    }
    if(l){
        l->ant->prox=l->prox;
        if(l->prox != NULL)l->prox->ant=l->ant;
        free(l->voo.prefixo);
        free(l->voo.nomeD);
        free(l->voo.nomeO);
        free(l->voo.tipo);
        free(l);
        return head;
    }
    return head;
}
void orderListFlightManual(Lista_Voo *l, char * horaUsuario){
    Lista_Voo * aux;
    int maior, x;
    while(l){            
        maior = manualStatus(l->voo.horaP, horaUsuario);
        for(aux=l;aux;aux=aux->prox){
            x = manualStatus(aux->voo.horaP, horaUsuario);
            if(x>maior){
            changeFlight(&l->voo, &aux->voo);
            maior=x;
            
            }
        }
        l=l->prox;
    }   
}
void orderListFlight(Lista_Voo *l){
    Lista_Voo * aux;
    int maior, x;
    while(l){            
        maior=status(l->voo.horaP);
        for(aux=l;aux;aux=aux->prox){
            x=status(aux->voo.horaP);
            if(x>maior){
            changeFlight(&l->voo, &aux->voo);
            maior=x;
            
            }
        }
        l=l->prox;
    }   
}


int countListFlight(Lista_Voo *v){
    int i = 0;
    while(v){
        v = v->prox;
        i++;
    }
    return i;
}
int assingFlight(Lista_Voo * l, Flight entrada){
    int x=0;
    
    if(!checkTime(entrada.horaP))x++;
    if(!checkTime(entrada.horaC))x++;
    if(!checkTime(entrada.duracao))x++;
    if(!checkSig(entrada.siglaD))x++;
    if(!checkSig(entrada.siglaO))x++;
    //if(!checkAirport(entrada.nomeD,entrada.nomeO))x++;
    
    if(!x){
    
    l->voo.prefixo=malloc(strlen(entrada.prefixo)*sizeof(char)+1);
    strcpy(l->voo.prefixo, entrada.prefixo);
    
    l->voo.nomeO=malloc(strlen(entrada.nomeO)*sizeof(char)+1);
    strcpy(l->voo.nomeO, entrada.nomeO);
   
    l->voo.nomeD=malloc(strlen(entrada.nomeD)*sizeof(char)+1);
    strcpy(l->voo.nomeD, entrada.nomeD);
    
    l->voo.tipo=malloc(strlen(entrada.tipo) + 1);
    strcpy(l->voo.tipo, entrada.tipo);
    
    strcpy(l->voo.siglaD, entrada.siglaD);
    strcpy(l->voo.siglaO,entrada.siglaO);
    strcpy(l->voo.horaP, entrada.horaP);
    strcpy(l->voo.horaC, entrada.horaC);
    strcpy(l->voo.duracao, entrada.duracao);
    
    return 1;
    }
    return 0;
    
}

Lista_Voo * insertListFlightFile(Lista_Voo * l){
    Flight a;
    FILE *entrada; 
    char temp[200];   
    entrada=fopen(arqui_voo, "r");    
    if(entrada==NULL){
        printf("\n Erro de leitura\n");
        return 0;        
    }
    while(!feof(entrada)){
    fscanf(entrada,"%s", temp);
    a.prefixo=malloc(sizeof(char)*strlen(temp)+1);
    strcpy(a.prefixo,temp);
        
    fscanf(entrada,"%s", temp);
    a.tipo=malloc(sizeof(char)*strlen(temp)+1);
    strcpy(a.tipo,temp);    
    
    fscanf(entrada,"%s", temp);
    a.nomeO=malloc(sizeof(char)*strlen(temp)+1);
    strcpy(a.nomeO,temp);
     
    fscanf(entrada,"%s", a.siglaO);
        
    fscanf(entrada,"%s", a.horaP);
        
    fscanf(entrada,"%[^*]%*c%*c", temp);
    a.nomeD=malloc(sizeof(char)*strlen(temp)+1);
    strcpy(a.nomeD,temp);
        
    fscanf(entrada,"%s", a.siglaD);
        
    fscanf(entrada,"%s", a.duracao);
        
    timeArrival(a.horaC, a.horaP, a.duracao); 
    
     
    
    l=insertListFlight(l,a);    
    }
    fclose(entrada);     
    return l;
}

int isInFlightList(Lista_Voo *v, char *prefixo){
    Lista_Voo *aux = v;
    while(aux != NULL){
        if(strstr(aux->voo.prefixo,prefixo)  && strlen(aux->voo.prefixo) == strlen(prefixo)) return 1;
        aux = aux->prox;
    }
    return 0;
}

void returnStructFlight(Lista_Voo *v, Flight *voo, char *prefixo){
    Lista_Voo *aux = v;
    char temp[150];
    while(aux != NULL){
        if(strstr(aux->voo.prefixo,prefixo)){
            strcpy(voo->duracao,aux->voo.duracao);
            strcpy(voo->horaC,aux->voo.horaC);
            strcpy(voo->horaP,aux->voo.horaP);
            strcpy(temp,aux->voo.nomeD);
            voo->nomeD = malloc(strlen(temp) + 1);
            strcpy(voo->nomeD,aux->voo.nomeD);
            strcpy(temp,aux->voo.nomeO);
            voo->nomeO = malloc(strlen(temp) + 1);
            strcpy(voo->nomeO,aux->voo.nomeO);
            strcpy(temp,aux->voo.prefixo);
            voo->prefixo = malloc(strlen(temp) + 1);
            strcpy(voo->prefixo,aux->voo.prefixo);
            strcpy(voo->siglaD,aux->voo.siglaD);
            strcpy(voo->siglaO,aux->voo.siglaO);
            strcpy(temp,aux->voo.tipo);
            voo->tipo = malloc(strlen(temp) + 1);
            strcpy(voo->tipo,aux->voo.tipo);
        }
        aux = aux->prox;
    }
}
