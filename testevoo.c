#include "testevoo.h"
#include "lista_voo.h"

void printDataFlightFile(Flight * voo){
    FILE * entrada;
    entrada=fopen(relat_dados_voos, "a");
    if(entrada==NULL){
        return 0;
    }

    int x=0;
    if(!checkTime(voo->horaP))x++;
    if(!checkTime(voo->horaC))x++;
    if(!checkTime(voo->duracao))x++;
    if(!checkSig(voo->siglaD))x++;
    if(!checkSig(voo->siglaO))x++;
    if(!checkAirport(voo->nomeD,voo->nomeO))x++;

    fprintf(entrada,"--------------------------------------\n");
    fprintf(entrada,"  Teste de inserção de dados\n\n");
    fprintf(entrada,"     Dados gerados aleatoriamente:\n");
    fprintf(entrada,"       Prefixo: %s\n", voo->prefixo);
    fprintf(entrada,"       Origem: %s\n", voo->nomeO);
    fprintf(entrada,"       Sigla Origem: %s\n", voo->siglaO);
    fprintf(entrada,"       Destino: %s\n", voo->nomeD);
    fprintf(entrada,"       Sigla Destino: %s\n", voo->siglaD);
    fprintf(entrada,"       Aeronave: %s\n", voo->tipo);
    fprintf(entrada,"       Hora partida: %s\n", voo->horaP);
    fprintf(entrada,"       Hora chegada: %s\n", voo->horaC);
    fprintf(entrada,"       Duracao: %s\n", voo->duracao);

        if(!x)fprintf(entrada,"\n   Dados inseridos\n");
        else fprintf(entrada,"\n   Dados Nao inseridos\n");

    fprintf(entrada,"--------------------------------------\n");


    fclose(entrada);


}

void deleteFileFlight(){
    FILE * entrada;
    entrada=fopen(relat_dados_voos, "w");
    if(entrada==NULL){
        return 0;
    }
    fprintf(entrada," ");
    fclose(entrada);
}
int FlightInsertTest(int NUM_TESTE){
    Flight voo;
    int TamanhoPonteiro=20,RepeticaoFor,NumeroRand=0;
    int contavalido = 0,temp;
    Lista_Voo *ListaVooTemporaria = NULL;

    deleteFileFlight();

    voo.prefixo=(char*)malloc(TamanhoPonteiro*sizeof(char) + 1);
    voo.nomeO=(char*)malloc(TamanhoPonteiro*sizeof(char) + 1);
    voo.nomeD=(char*)malloc(TamanhoPonteiro*sizeof(char) + 1);
    voo.tipo=(char*)malloc(TamanhoPonteiro*sizeof(char) + 1);
    TamanhoPonteiro--;
    for(RepeticaoFor=0;RepeticaoFor<NUM_TESTE;RepeticaoFor++){
        temp = countListFlight(ListaVooTemporaria);
        GenerateStructFlight(&voo,TamanhoPonteiro,&NumeroRand,RepeticaoFor);
        ListaVooTemporaria = insertListFlight(ListaVooTemporaria,voo);
        if(temp < countListFlight(ListaVooTemporaria))
            contavalido++;
        printDataFlightFile(&voo);
        ListaVooTemporaria = deleteListFlight(ListaVooTemporaria,voo);
     }
    free(voo.tipo);
    free(voo.prefixo);
    free(voo.nomeO);
    free(voo.nomeD);
    return contavalido;

}
