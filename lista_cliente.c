#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lista_cliente.h"
#include "controle.h"


/*
 * Funções de lista dos clientes
 */


int voidClient(Lista_Cliente * l){
    return (!l);
}
void printClientList(Lista_Cliente * l){
    while(l){
        printf("%s  -  %s\n", l->cliente.nome, l->cliente.cpf);
        l=l->prox;
    }
}
Lista_Cliente * insertListClient(Lista_Cliente * l, Client info){
    Lista_Cliente * aux;
    aux=malloc(sizeof(Lista_Cliente));
    if(assingClient(aux, info)){
        aux->prox=l;
        if(aux->prox)aux->prox->ant=aux;
        aux->ant=NULL;
        return aux;
    }else{
        free(aux);
        return l;
    }
}
int changeListClient(Lista_Cliente * l, Client info, Client desejada){
    if(voidClient(l))return NULL;
    while(!strstr(l->cliente.cpf,desejada.cpf)){
        l=l->prox;
        if(voidClient(l))break;
    }
    if(l && strstr(l->cliente.cpf,desejada.cpf)){
        return assingClient(l, info);
    }
    return NULL;
}
int printListClient(Lista_Cliente * l, Client info){
    if(voidClient(l))return NULL;
    while(!strstr(l->cliente.cpf,info.cpf)){
        l=l->prox;
        if(voidClient(l))break;
    }
    if(l && strstr(l->cliente.cpf,info.cpf)){
        printClient(l->cliente);
        return 1;
    }
    return NULL;
}
Lista_Cliente * deleteListClient(Lista_Cliente * l, Client info){
    Lista_Cliente * head=l;
    if(voidClient(l))return NULL;
    if(strstr(l->cliente.cpf,info.cpf)){
        head=l->prox;
        free(l->cliente.categoria);
        free(l->cliente.nome);
        free(l->cliente.programa);
        free(l);
        if(head)head->ant=NULL;
        return head;
    }
    while(!strstr(l->cliente.cpf,info.cpf)){
        l=l->prox;
        if(voidClient(l))break;
    }
    if(l){
        l->ant->prox=l->prox;
        if(l->prox != NULL)l->prox->ant=l->ant;
        free(l);
        return head;
    }
    return head;
}


int countListClient(Lista_Cliente *v){
    int i = 0;
    while(v != NULL){
        v = v->prox;
        i++;
    }
    return i;
}

int assingClient(Lista_Cliente * l, Client entrada){
    if(checkCpf(entrada.cpf)){
    l->cliente.nome=malloc(strlen(entrada.nome)*sizeof(char)+1);
    l->cliente.programa=malloc(strlen(entrada.programa)*sizeof(char)+1);
    l->cliente.categoria=malloc(strlen(entrada.categoria)*sizeof(char)+1);
    
    l->cliente.saldo = entrada.saldo;
    strcpy(l->cliente.nome,entrada.nome);
    strcpy(l->cliente.programa, entrada.programa);
    strcpy(l->cliente.cpf,entrada.cpf);
    strcpy(l->cliente.categoria, entrada.categoria);
    
    return 1;
    }
    return 0;
}


Lista_Cliente * insertListClientFile(Lista_Cliente * l){
    Client c;
    FILE *entrada;
    char temp[50];
    entrada=fopen(arqui_cliente,"r");
    if(entrada==NULL){
        printf("Erro de arquivo\n");
        return 0;
    }
    c.nome=malloc(sizeof(char)*50);
    c.programa=malloc(sizeof(char)*50);
    c.categoria=malloc(sizeof(char)*50);
    while(!feof(entrada)){
        fscanf(entrada,"%[^;]%*c", c.programa);
        fscanf(entrada,"%[^;]%*c", c.nome);
        fscanf(entrada,"%[^;]%*c", c.cpf);
        fscanf(entrada,"%[^;]%*c", c.categoria);
        fscanf(entrada,"%d%*c",&c.saldo);
        l=insertListClient(l,c);   
    }
    fclose(entrada);
    free(c.nome);
    free(c.programa);
    free(c.categoria);
    return l;
}

int isInClientList(Lista_Cliente *v, char *cpf){
    Lista_Cliente *aux = v;
    while(aux != NULL){
        if(strstr(aux->cliente.cpf,cpf) && strlen(aux->cliente.cpf) == strlen(cpf)) return 1;
        aux = aux->prox;
    }
    return 0;
}

void returnStructClient(Lista_Cliente *v, Client *p, char *cpf){
    Lista_Cliente *aux = v;
    char temp[150];
    while(aux != NULL){
        if(strstr(aux->cliente.cpf,cpf)){
            strcpy(p->cpf,aux->cliente.cpf);
            strcpy(temp,aux->cliente.categoria);
            p->categoria = malloc(strlen(temp) + 1);
            strcpy(p->categoria,aux->cliente.categoria);
            strcpy(temp,aux->cliente.nome);
            p->nome = malloc(strlen(temp) + 1);
            strcpy(p->nome,temp);
            strcpy(temp,aux->cliente.programa);
            p->programa = malloc(strlen(temp) + 1);
            strcpy(p->programa,temp);
            p->saldo = aux->cliente.saldo;
        }
        aux = aux->prox;
    }
}

void printListaClientDetails(Lista_Cliente * l){
    while(l){
        printf("-------------------------\n");
        printClient(l->cliente);
        printf("\n-----------------------");
        l=l->prox;
    }
    printf("\n\nDigite qualquer tecla para voltar ao menu");
    getchar();
}
