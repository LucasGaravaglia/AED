#include "interacaocliente.h"

void insertClientTerminal(Lista_Cliente **v){
    int numeroDeClientes = countListClient((*v));
    int num;
    char temp[150];
    Client temp2;
    printf("Digite o cpf do cliente\n:");
    gets(temp);
    removeSpaces(temp);
    while(isInClientList((*v),temp) || !checkCpf(temp)){
        if(isInClientList((*v),temp)){
            printf("CPF já registrado, redigite\n:");
            gets(temp);
            removeSpaces(temp);
        }else{
            printf("CPF inválido, redigite\n:");
            gets(temp);
            removeSpaces(temp);
        }
    }
    strcpy(temp2.cpf,temp);
    printf("Digite a categoria do cliente\n:");
    gets(temp);
    removeSpaces(temp);
    while(strlen(temp) == 0){
        printf("Categoria inválida, redigite\n:");
        gets(temp);
        removeSpaces(temp);
    }
    temp2.categoria = malloc(strlen(temp) + 1);
    strcpy(temp2.categoria,temp);
    printf("Digite o nome do programa de milhas\n:");
    gets(temp);
    removeSpaces(temp);
    while(strlen(temp) == 0){
        printf("Programa inválido, redigite\n:");
        gets(temp);
        removeSpaces(temp);
    }
    temp2.programa = malloc(strlen(temp) + 1);
    strcpy(temp2.programa,temp);
    printf("Digite o nome do cliente\n:");
    gets(temp);
    removeSpaces(temp);
    while(strlen(temp) == 0){
        printf("Nome inválido, redigite\n:");
        gets(temp);
        removeSpaces(temp);
    }
    temp2.nome = malloc(strlen(temp) + 1);
    strcpy(temp2.nome,temp);
    printf("Digite o saldo de milhas\n:");
    scanf("%d%*c",&num);
    while( num < 0){
        printf("Saldo digitado inválido, redigite\n:");
        scanf("%d%*c",&num);
    }
    temp2.saldo=num;
    (*v) = insertListClient((*v), temp2);
    if(countListClient(*v) == numeroDeClientes+1){
        printf("Cliente inserido com sucesso!\n");
    }else{
        printf("Não foi possível inserir o cliente\n");
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
    free(temp2.categoria); free(temp2.nome); free(temp2.programa);
}

void changeClientTerminal(Lista_Cliente **v){
    char temp[150];
    Client *desejada = malloc(sizeof(Flight));
    printf("Clientes registrados:\n\n");
    printClientList((*v));
    printf("\nDigite o Cpf do cliente que deseja alterar\n:");
    gets(temp);
    removeSpaces(temp);
    while(!isInClientList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Cliente não registrado, redigite ou digite 's' para sair\n:");
        gets(temp);
        removeSpaces(temp);
    }
    if(strcmp(temp,"s") && strcmp(temp,"S")){
        returnStructClient((*v),desejada,temp);
        printClient(*desejada);
        (*v) = deleteListClient((*v),*desejada);
        insertClientTerminal(v);
    }else{
        printf("Pressione qualquer tecla para voltar ao menu\n:");
        getchar();
    }
}

void deleteClientTerminal(Lista_Cliente **v){
    int numeroDeClientes = countListClient((*v));
    char temp[150];
    Client *desejada = malloc(sizeof(Flight));
    printf("Clientes registrados:\n\n");
    printClientList((*v));
    printf("\nDigite o Cpf do cliente que deseja deletar\n:");
    gets(temp);
    removeSpaces(temp);
    while(!isInClientList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Cliente não registrado, redigite ou digite 's' para sair\n:");
        gets(temp);
        removeSpaces(temp);
    }
    returnStructClient((*v),desejada,temp);
    (*v) = deleteListClient((*v),*desejada);
    if(numeroDeClientes == countListClient((*v))+1){
        printf("Cliente removido com sucesso!\n");
    }else{
        printf("Não foi possível remover o cliente\n");
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
}

void showClientTerminal(Lista_Cliente **v){
    char temp[150];
    Client *desejada = malloc(sizeof(Flight));
    printf("Clientes registrados:\n\n");
    printClientList((*v));
    printf("\nDigite o Cpf do cliente que deseja visualizar os dados\n:");
    gets(temp);
    removeSpaces(temp);
    while(!isInClientList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Cliente não registrado, redigite ou digite 's' para sair\n:");
        gets(temp);
        removeSpaces(temp);
    }
    if(strcmp(temp,"s") && strcmp(temp,"S")){
        returnStructClient((*v),desejada,temp);
        printClient(*desejada);
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
}

void showClientTerminalUser(Lista_Cliente **v){
    char temp[150];
    Client *desejada = malloc(sizeof(Flight));
    printf("\nDigite o seu Cpf\n:");
    gets(temp);
    removeSpaces(temp);
    while(!isInClientList((*v),temp) && strcmp(temp,"s") && strcmp(temp,"S")){
        printf("Cliente não registrado, redigite ou digite 's' para sair\n:");
        gets(temp);
        removeSpaces(temp);
    }
    if(strcmp(temp,"s") && strcmp(temp,"S")){
        returnStructClient((*v),desejada,temp);
        printClient(*desejada);
    }
    printf("Pressione qualquer tecla para voltar ao menu\n:");
    getchar();
}

void CallClientTest(){
    system("clear");
    int NumeroTestes = ClientInsertTest(NUM_MESTRE);
    CustomerTestReport(NumeroTestes,NUM_MESTRE);
    TerminalClientTest(NumeroTestes,NUM_MESTRE);
    printf("\n\nClique qualquer tecla para voltar ao menu.");
    getchar();
}
