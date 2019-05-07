#include "relatoriotesteaeronave.h"


void TerminalPlaneTest(int aeronave,int total){
    printf("Relatorio de Teste Aeronave:\n\n");
    printf("Todos as aeronaves enviadas são aeronaves validas.\n",porcento);
    printf("Horas: ");
    printTime();
    printf("%d das %d aeronaves foram registrados.\n",aeronave,total);

}
void PlaceTestReport(int aeronave,int total){
    FILE *f;
    f = fopen(ArquivoAeronave,"a");
    if(!f) printf("Erro ao abrir arquivo\n");
    else printf("Arquivo Feito com sucesso!\n");
    fprintf(f,"Todas as aeronaves enviadas são validas.\n",porcento);
    fprintf(f,"Relatorio de Teste Voo:\n\n");
    printTimeFile(f);
    fprintf(f,"%d dos %d voos foram registrados\n",aeronave,total);
    fclose(f);
}
