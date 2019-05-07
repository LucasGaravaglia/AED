#include "relatoriotesteclietes.h"



void CustomerTestReport(int client,int total){
    FILE *f;
    f = fopen(ArquivoClient,"a");
    if(!f) printf("Erro ao abrir arquivo.\n");
    else printf("Arquivo Feito com sucesso!\n");
    fprintf(f,"72%c a 73%c das pessoas enviadas são validas, o restante são invalidos.\n",porcento,porcento);
    fprintf(f,"Relatorio de Teste Voo:\n\n");
    printTimeFile(f);
    fprintf(f,"%d dos %d clients foram registrados.\n",client,total);
    fclose(f);
}
void TerminalClientTest(int client,int total){
    printf("Relatorio de Teste Client:\n\n");
    printf("72%c a 73%c das pessoas enviadas são validas, o restante são invalidos.\n",porcento,porcento);
    printf("Horas: ");
    printTime();
    printf("%d dos %d clients foram registrados.\n",client,total);

}
