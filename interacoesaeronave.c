#include "interacoesaeronave.h"

void insertPlaneTerminal(Lista_Plane **v){
    int numeroDeAeronaves = countListPlane((*v));
    char temp[150];
    Plane temp2;
    printf("Digite o modelo da aeronave\n:");
    gets(temp);
    removeSpaces(temp);
    while(isInPlaneList((*v),temp) || strlen(temp) == 0){
        if(strlen(temp) == 0){
            printf("Modelo inválido redigite\n:");
            gets(temp);
            removeSpaces(temp);
        }else{
            printf("Modelo já registrado, redigite\n:");
            gets(temp);
            removeSpaces(temp);
        }
    }
    temp2.modelo = malloc(strlen(temp) + 1);
    strcpy(temp2.modelo,temp);
    printf("Digite o alcance da aeronave\n:");
    scanf("%d",&temp2.alcance);
    printf("Digite a altura da aeronave\n:");
    scanf("%d",&temp2.altura);
    printf("Digite a quantidade de banheiros da aeronave\n:");
    scanf("%d",&temp2.banheiros);
    printf("Digite a quantidade de cadeiras da aeronave\n:");
    scanf("%d",&temp2.cadeiras);
    printf("Digite o comprimento da aeronave\n:");
    scanf("%d",&temp2.comprimento);
    printf("Digite a envergadura da aeronave\n:");
    scanf("%d",&temp2.envergadura);
    printf("Digite a velocidade de cruzeiro da aeronave\n:");
    scanf("%d%*c",&temp2.velocidadeC);
    (*v) = insertListPlane((*v), temp2);
    if(countListPlane(*v) == numeroDeAeronaves+1){
        printf("Aeronave inserida com sucesso!\n");
    }else{
        printf("Não foi possível inserir a aeronave\n");
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
    free(temp2.modelo);
}

void changePlaneTerminal(Lista_Plane **v){
    char temp[150];
    Plane *desejada = malloc(sizeof(Flight));
    printf("Aeronaves registradas:\n\n");
    printPlaneList((*v));
    printf("\nDigite qual aeronave quer alterar\n:");
    gets(temp);
    removeSpaces(temp);
    while(!isInPlaneList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Aeronave não registrada, redigite ou digite 's' para sair\n:");
        gets(temp);
        removeSpaces(temp);
    }
    if(strcmp(temp,"s") && strcmp(temp,"S")){
        returnStructPlane((*v),desejada,temp);
        printPlane(*desejada);
        (*v) = deleteListPlane((*v),*desejada);
        insertPlaneTerminal(v);
    }else{
        printf("Pressione qualquer tecla para voltar ao menu\n:");
        getchar();
    }
}

void deletePlaneTerminal(Lista_Plane **v){
    int numeroDeAeronaves = countListPlane((*v));
    char temp[150];
    Plane *desejada = malloc(sizeof(Flight));
    printf("Aeronaves registradas:\n\n");
    printPlaneList((*v));
    printf("\nDigite qual aeronave quer deletar\n:");
    gets(temp);
    removeSpaces(temp);
    while(!isInPlaneList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Aeronave não registrada, redigite ou digite 's' para sair\n:");
        gets(temp);
        removeSpaces(temp);
    }
    returnStructPlane((*v),desejada,temp);
    (*v) = deleteListPlane((*v),*desejada);
    if(numeroDeAeronaves == countListPlane((*v))+1){
        printf("Aeronave removida com sucesso!\n");
    }else{
        printf("Não foi possível remover a aeronave\n");
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
}

void showPlaneTerminal(Lista_Plane **v){
    char temp[150];
    Plane *desejada = malloc(sizeof(Flight));
    printf("Aeronaves registradas:\n\n");
    printPlaneList((*v));
    printf("\nDigite qual aeronave que quer mostrar\n:");
    gets(temp);
    removeSpaces(temp);
    while(!isInPlaneList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Aeronave não registrada, redigite ou digite 's' para sair\n:");
        gets(temp);
        removeSpaces(temp);
    }
    if(strcmp(temp,"s") && strcmp(temp,"S")){
        returnStructPlane((*v),desejada,temp);
        printPlane(*desejada);
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
}

void CallPlaneTest(){
    system("clear");
    int NumeroTestes = TestInsertPlane(NUM_MESTRE);
    PlaceTestReport(NumeroTestes,NUM_MESTRE);
    TerminalPlaneTest(NumeroTestes,NUM_MESTRE);
    printf("\n\nClique qualquer tecla para voltar ao menu.");
    getchar();
}

