#include "controleaeronave.h"

void printPlane(Plane p){
    printf("    Modelo: %s\n", p.modelo);
    printf("    Alcance: %d\n", p.alcance);
    printf("    Altura: %d\n", p.altura);
    printf("    Banheiros: %d\n", p.banheiros);
    printf("    Assentos: %d\n", p.cadeiras);
    printf("    Comprimento: %d\n", p.comprimento);
    printf("    Envergadura: %d\n", p.envergadura);
    printf("    Velocidade: %d\n", p.velocidadeC);
    printf("---------------------------------------\n");
    
   
}

void changePlane(Plane *a, Plane *b){
    Plane t;
    t=*a;
    *a=*b;
    *b=t;   
}  
