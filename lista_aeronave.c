#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lista_aeronave.h"
#include "controle.h"
#include <string.h>


/*
 * Funções de lista das aeronaves
 */

int voidPlane(Lista_Plane * l){
    return (!l);
}
void printPlaneList(Lista_Plane * l){
    while(l){
        printf("%s\n", l->aeronave.modelo);
        l=l->prox;
    }
}
Lista_Plane * insertListPlane(Lista_Plane *l, Plane info){
    Lista_Plane * aux;
    aux=malloc(sizeof(Lista_Plane));
    assingPLane(aux, info);
    aux->prox=l;
    if(aux->prox)aux->prox->ant=aux;
    aux->ant=NULL;
    return aux;
}
int changeListPlane(Lista_Plane *l, Plane info, Plane desejada){
    if(voidPlane(l))return NULL;    
    while(!strstr(l->aeronave.modelo,desejada.modelo)){
        l=l->prox;
        if(voidPlane(l))break;
    }
    if(l && strstr(l->aeronave.modelo,desejada.modelo)){
        assingPLane(l, info);
        return 1;
    }
    return NULL;
}
int printListPlane(Lista_Plane *l, Plane info){
    if(voidPlane(l))return NULL;
    while(!strstr(l->aeronave.modelo,info.modelo)){
        l=l->prox;
        if(voidPlane(l))break;
    }
    if(l && strstr(l->aeronave.modelo,info.modelo)){
        printPlane(l->aeronave);
        return 1;
    }
    return NULL;
}
Lista_Plane * deleteListPlane(Lista_Plane *l, Plane info){
    if(voidPlane(l))return NULL;
    Lista_Plane * head=l;
    if(strstr(l->aeronave.modelo,info.modelo)){
        head=l->prox;
        free(l->aeronave.modelo);
        free(l);
        if(head)head->ant=NULL;
        return head;
    }
    while(!strstr(l->aeronave.modelo,info.modelo)){
        l=l->prox;
        if(voidPlane(l))break;
    }
    if(l){
        l->ant->prox=l->prox;
        if(l->prox != NULL)l->prox->ant=l->ant;
        free(l->aeronave.modelo);
        free(l);
        return head;
    }
    return head;
}
int countListPlane(Lista_Plane *v){
    int i = 0;
    while(v != NULL){
        v = v->prox;
        i++;
    }
    return i;
}
 
int assingPLane(Lista_Plane * l, Plane entrada){
    l->aeronave.modelo=malloc(strlen(entrada.modelo)*sizeof(char)+1);
    strcpy(l->aeronave.modelo,entrada.modelo);
    l->aeronave.alcance=entrada.alcance;
    l->aeronave.altura=entrada.altura;
    l->aeronave.banheiros=entrada.banheiros;
    l->aeronave.cadeiras=entrada.cadeiras;
    l->aeronave.comprimento=entrada.comprimento;
    l->aeronave.envergadura=entrada.envergadura;
    l->aeronave.velocidadeC=entrada.velocidadeC;
    return 1;
}

Lista_Plane * insertListPlaneFile(Lista_Plane * l){
    Plane p;
    FILE *entrada;
    char temp[50];
    entrada=fopen(arqui_plane,"r");
    if(entrada==NULL){
        printf("Erro de arquivo\n");
        return 0;
    }
    p.modelo=malloc(sizeof(char)*50);
    while(!feof(entrada)){
        fscanf(entrada,"%s", p.modelo);
        fscanf(entrada,"%d", &p.comprimento);
        fscanf(entrada,"%d", &p.altura);
        fscanf(entrada,"%d", &p.envergadura);
        fscanf(entrada,"%d", &p.velocidadeC);
        fscanf(entrada,"%d", &p.alcance);
        fscanf(entrada,"%d", &p.cadeiras);
        fscanf(entrada,"%d%*c", &p.banheiros);
        l=insertListPlane(l,p);
    }
    free(p.modelo);
    fclose(entrada);
    return l;
}

int isInPlaneList(Lista_Plane *v, char *modelo){
    Lista_Plane *aux = v;
    while(aux != NULL){
        if(strstr(aux->aeronave.modelo,modelo) && strlen(aux->aeronave.modelo) == strlen(modelo)) return 1;
        aux = aux->prox;
    }
    return 0;
}

void returnStructPlane(Lista_Plane *v, Plane *p, char *modelo){
    Lista_Plane *aux = v;
    char temp[150];
    while(aux != NULL){
        if(strstr(aux->aeronave.modelo,modelo)){
            strcpy(temp,aux->aeronave.modelo);
            p->modelo = malloc(strlen(temp) + 1);
            strcpy(p->modelo,temp);
            p->alcance = aux->aeronave.alcance;
            p->altura = aux->aeronave.altura;
            p->banheiros = aux->aeronave.banheiros;
            p->cadeiras = aux->aeronave.cadeiras;
            p->comprimento = aux->aeronave.comprimento;
            p->envergadura = aux->aeronave.envergadura;
            p->modelo = aux->aeronave.modelo;
            p->velocidadeC = aux->aeronave.velocidadeC;
        }
        aux = aux->prox;
    }
}
