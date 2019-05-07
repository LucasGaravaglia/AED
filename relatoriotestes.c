#include "relatoriotestes.h"
#include <stdlib.h>
#include <stdio.h>
#define porcento  '%'


#include "testevoo.h"


void TestReport(int voo,int pessoa, int aeronave,int total){
    FILE *f;
    f = fopen(ArquivoMestre,"a");
    if(!f) printf("Erro ao abrir arquivo.\n");
    else printf("Arquivo Feito com sucesso!\n");


    fprintf(f,"Relatorio de Testes:\n\n");
    printTimeFile(f);
    fprintf(f,"Taxa de aceitação estimada para voo de 66%c, aeronaves de 100%c, e clients de 72 a 73%c.\n",porcento,porcento,porcento);
    fprintf(f,"%d dos %d voos foram registrados.\n",voo,total);
    fprintf(f,"%d das %d aeronaves foram registrados.\n",aeronave,total);
    fprintf(f,"%d dos %d clients foram registrados.\n\n",pessoa,total);

    fclose(f);
}

void AllTerminalTests(int voo,int pessoa, int aeronave,int total){
    printf("Relatorio de Testes:\n\n");
    printf("Horas: ");
    printTime();
    printf("66%c dos voos enviados são validos, o restante está errado, todas as aeronaves enviadas são validas,\ne 72%c a 73%c das pessoas enviadas são validas, o restante são invalidos.\n\n",porcento,porcento,porcento);
    printf("%d dos %d voos foram registrados.\n",voo,total);
    printf("%d das %d aeronaves foram registrados.\n",aeronave,total);
    printf("%d dos %d clients foram registrados.\n\n",pessoa,total);
}

void CallTestAll(){
    system("clear");
    int TVoo = FlightInsertTest(NUM_MESTRE);
    int TPessoa = ClientInsertTest(NUM_MESTRE);
    int TAeronave = TestInsertPlane(NUM_MESTRE);
    AllTerminalTests(TVoo,TPessoa,TAeronave,NUM_MESTRE);
    TestReport(TVoo,TPessoa,TAeronave,NUM_MESTRE);
    printf("\n\nClique qualquer tecla para voltar ao menu.");
    getchar();
}



