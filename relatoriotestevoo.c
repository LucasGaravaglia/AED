#include "relatoriotestevoo.h"



void TerminalFlightTest(int voo,int total){
    printf("Relatorio de Teste Voo:\n\n");
    printf("66%c dos voos enviados são validos, o restante está errado.\n",porcento);
    printf("Horas: ");
    printTime();
    printf("%d dos %d voos foram registrados.\n",voo,total);

}

void TestFlightReport(int voo,int total){
    FILE *f;
    f = fopen(ArquivoVoo,"a");
    if(!f) printf("Erro ao abrir arquivo.\n");
    else printf("Arquivo Feito com sucesso!\n");
    fprintf(f,"66%c. dos voos enviados são validos, o restante está errado.\n",porcento);
    fprintf(f,"Relatorio de Teste Voo:\n\n");
    printTimeFile(f);
    fprintf(f,"%d dos %d voos foram registrados.\n",voo,total);
    fclose(f);
}
