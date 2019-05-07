#include "testecliente.h"
#include "lista_cliente.h"



int ClientInsertTest(int NUM_TESTE){
    Client pessoa;
    int TamanhoPonteiro=20,RepeticaoFor=0,NumeroRand=0;
    int contavalido = 0,temp;
    Lista_Cliente *ListaClientTemporaria = NULL;
    pessoa.nome=(char*)malloc(TamanhoPonteiro*sizeof(char) + 1);
    pessoa.programa=(char*)malloc(TamanhoPonteiro*sizeof(char) + 1);
    pessoa.categoria=(char*)malloc(TamanhoPonteiro*sizeof(char) + 1);
    TamanhoPonteiro--;
    for(RepeticaoFor=0;RepeticaoFor<NUM_TESTE;RepeticaoFor++){
        temp = countListClient(ListaClientTemporaria);
        GenerateStructPerson(&pessoa,TamanhoPonteiro,&NumeroRand,RepeticaoFor);
        ListaClientTemporaria = insertListClient(ListaClientTemporaria,pessoa);
        if(temp < countListClient(ListaClientTemporaria))
            contavalido++;
        ListaClientTemporaria = deleteListClient(ListaClientTemporaria,pessoa);
        }
    free(pessoa.nome);
    free(pessoa.programa);
    free(pessoa.categoria);
    return contavalido;

}
