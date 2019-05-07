#include "testeaeronave.h"
#include "lista_aeronave.h"

int TestInsertPlane(int NUM_TESTE){
    Plane aeronave;
    int contavalido = 0,temp;
    int TamanhoPonteiro=20,RepeticaoFor=0,NumeroRand=0;
    Lista_Plane *ListaAeronaveTemporaria = NULL;

    aeronave.modelo = (char*)malloc(TamanhoPonteiro*sizeof(char) + 1);
    TamanhoPonteiro--;
    for(RepeticaoFor=0;RepeticaoFor<NUM_TESTE;RepeticaoFor++){
        temp = countListPlane(ListaAeronaveTemporaria);
        GenerateStructPlane(&aeronave,TamanhoPonteiro,&NumeroRand);
        ListaAeronaveTemporaria = insertListPlane(ListaAeronaveTemporaria,aeronave);
        if(temp < countListPlane(ListaAeronaveTemporaria))
            contavalido++;
        ListaAeronaveTemporaria = deleteListPlane(ListaAeronaveTemporaria,aeronave);
    }
    free(aeronave.modelo);
    return contavalido;
}
