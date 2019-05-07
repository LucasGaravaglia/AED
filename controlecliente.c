#include "controlecliente.h"

void printClient(Client c){
    printf("    Nome: %s\n", c.nome);
    printf("    CPF: %s\n", c.cpf);
    printf("    Programa: %s\n", c.programa);
    printf("    Milhagem: %d\n", c.saldo);
    printf("    Categoria: %s\n", c.categoria);
    printf("---------------------------------------\n");
    
}

void changeClient(Client *a, Client *b){
    Client t;
    t=*a;
    *a=*b;
    *b=t;   
}
