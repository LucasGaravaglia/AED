#include "menus.h"
#include "controlevoo.h"
#include "controlecliente.h"
#include "controleaeronave.h"
#include "interacoesvoo.h"
#include "interacoesaeronave.h"
#include "interacaocliente.h"
#include "grafico.h"
#include "relatoriotestes.h"

int movmentMenu(int teclaPressionada, int *posicaoDoMenu, int primeiro, int ultimo){
    if( (teclaPressionada == TECLAPARACIMA1 || teclaPressionada == TECLAPARACIMA2) && *posicaoDoMenu != primeiro){
        *posicaoDoMenu-=1;
    }else if( (teclaPressionada == TECLAPARABAIXO1 || teclaPressionada == TECLAPARABAIXO2) && *posicaoDoMenu != ultimo){
        *posicaoDoMenu+=1;
    }else if( (teclaPressionada == TECLAPARACIMA1 || teclaPressionada == TECLAPARACIMA2) && *posicaoDoMenu == primeiro){
        *posicaoDoMenu = ultimo;
    }else if( (teclaPressionada == TECLAPARABAIXO1 || teclaPressionada == TECLAPARABAIXO2) && *posicaoDoMenu == ultimo){
        *posicaoDoMenu = primeiro;
    }else if(teclaPressionada == ENTER){
        return 1;
    }else{
        return 0;
    }
    return 0;
}

void testsMenu(int *var){
    char teclaPressionada = 0;
    int parteDoMenu = 0;
    int inicioMenu = 0; int fimMenu = 4;
    while(teclaPressionada != 10){
        system("clear");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t ________________________________________________________\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        printf("\t\t\t\t\t\t\t\t|\tUtilize w e s para se movimentar no menu         |\n");
        printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        if(parteDoMenu == 0){
            printf("\t\t\t\t\t\t\t\t|-> Testar voo %-39s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Testar cliente %-35s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar aeronave %-34s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar todos %-37s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 23;
            }
        }else if(parteDoMenu == 1){
            printf("\t\t\t\t\t\t\t\t|-> Testar voo %-39s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar cliente %-35s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Testar aeronave %-34s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar todos %-37s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 24;
            }
        }else if(parteDoMenu == 2){
            printf("\t\t\t\t\t\t\t\t|-> Testar voo %-39s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar cliente %-35s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar aeronave %-34s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Testar todos %-37s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 25;
            }
        }else if(parteDoMenu == 3){
            printf("\t\t\t\t\t\t\t\t|-> Testar voo %-39s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar cliente %-35s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar aeronave %-34s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar todos %-37s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 26;
            }
        }else if(parteDoMenu == 4){
            printf("\t\t\t\t\t\t\t\t|-> Testar voo %-39s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar cliente %-35s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar aeronave %-34s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Testar todos %-37s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = MENUADM;
            }
        }
    }   
}


void registerMenu(int *var, int tipoCadastro, int operacao){ 
    char teclaPressionada = 0;
    int parteDoMenu = 0;
    int inicioMenu = 0; int fimMenu = 2;
    while(teclaPressionada != 10){
        system("clear");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t ________________________________________________________\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        printf("\t\t\t\t\t\t\t\t|\tUtilize w e s para se movimentar no menu         |\n");
        printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        if(parteDoMenu == 0){
            printf("\t\t\t\t\t\t\t\t|-> Via arquivo %-38s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Via terminal %-37s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                if(tipoCadastro == VOO && operacao == INSERIR){
                    *var = 27;
                }else if(tipoCadastro == VOO && operacao == ALTERAR){
                    *var = 28;
                }else if(tipoCadastro == VOO && operacao == MOSTRAR){
                    *var = 29;
                }else if(tipoCadastro == VOO && operacao == REMOVER){
                    *var = 30;
                }else if(tipoCadastro == CLIENTE && operacao == INSERIR){
                    *var = 31;
                }else if(tipoCadastro == CLIENTE && operacao == ALTERAR){
                    *var = 32;
                }else if(tipoCadastro == CLIENTE && operacao == MOSTRAR){
                    *var = 33;
                }else if(tipoCadastro == CLIENTE && operacao == REMOVER){
                    *var = 34;
                }else if(tipoCadastro == AERONAVE && operacao == INSERIR){
                    *var = 35;
                }else if(tipoCadastro == AERONAVE && operacao == ALTERAR){
                    *var = 36;
                }else if(tipoCadastro == AERONAVE && operacao == MOSTRAR){
                    *var = 37;
                }else if(tipoCadastro == AERONAVE && operacao == REMOVER){
                    *var = 38;
                }
            }
        }else if(parteDoMenu == 1){
            printf("\t\t\t\t\t\t\t\t|-> Via arquivo %-38s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Via terminal %-37s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                if(tipoCadastro == VOO && operacao == INSERIR){
                    *var = 39;
                }else if(tipoCadastro == VOO && operacao == ALTERAR){
                    *var = 40;
                }else if(tipoCadastro == VOO && operacao == MOSTRAR){
                    *var = 41;
                }else if(tipoCadastro == VOO && operacao == REMOVER){
                    *var = 42;
                }else if(tipoCadastro == CLIENTE && operacao == INSERIR){
                    *var = 43;
                }else if(tipoCadastro == CLIENTE && operacao == ALTERAR){
                    *var = 44;
                }else if(tipoCadastro == CLIENTE && operacao == MOSTRAR){
                    *var = 45;
                }else if(tipoCadastro == CLIENTE && operacao == REMOVER){
                    *var = 46;
                }else if(tipoCadastro == AERONAVE && operacao == INSERIR){
                    *var = 47;
                }else if(tipoCadastro == AERONAVE && operacao == ALTERAR){
                    *var = 48;
                }else if(tipoCadastro == AERONAVE && operacao == MOSTRAR){
                    *var = 49;
                }else if(tipoCadastro == AERONAVE && operacao == REMOVER){
                    *var = 50;
                }
            }
        }else if(parteDoMenu == 2){
            printf("\t\t\t\t\t\t\t\t|-> Via arquivo %-38s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Via terminal %-37s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                if(tipoCadastro == VOO){
                    *var=4;
                }else if(tipoCadastro == CLIENTE){
                    *var=5;
                }else if(tipoCadastro == AERONAVE){
                    *var=6;
                }else 
                    *var = MENUPRINCIPAL;
            }
        }
    }
}

void funcAdmMenu(int *var, int tipoCadastro){ //IAR: voo = 0, cliente = 1, aeronave = 2
    char teclaPressionada = 0;
    int parteDoMenu = 0;
    int inicioMenu = 0; int fimMenu = 5;
    while(teclaPressionada != 10){
        system("clear");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t ________________________________________________________\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        printf("\t\t\t\t\t\t\t\t|\tUtilize w e s para se movimentar no menu         |\n");
        printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        if(parteDoMenu == 0){
            printf("\t\t\t\t\t\t\t\t|-> Inserir %-42s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Alterar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Remover %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Lista Detalhada %-26s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                if(tipoCadastro == VOO){ //Inserir Voo
                    *var = 11;
                }else if(tipoCadastro == CLIENTE){ //Inserir Cliente
                    *var = 12;
                }else if(tipoCadastro == AERONAVE){ //Inserir aeronave
                    *var = 13;
                }
            }
        }else if(parteDoMenu == 1){
            printf("\t\t\t\t\t\t\t\t|-> Inserir %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Alterar %-42s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Remover %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Lista Detalhada %-26s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                if(tipoCadastro == VOO){ //Alterar Voo
                    *var = 14;
                }else if(tipoCadastro == CLIENTE){ //Alterar Cliente
                    *var = 15;
                }else if(tipoCadastro == AERONAVE){ //Alterar aeronave
                    *var = 16;
                }
            }
        }else if(parteDoMenu == 2){
            printf("\t\t\t\t\t\t\t\t|-> Inserir %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Alterar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Remover %-42s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Lista Detalhada %-26s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                if(tipoCadastro == VOO){ //Remover Voo
                    *var = 17;
                }else if(tipoCadastro == CLIENTE){ //Remover Cliente
                    *var = 18;
                }else if(tipoCadastro == AERONAVE){ //Remover aeronave
                    *var = 19;
                }
            }
        }else if(parteDoMenu == 3){
            printf("\t\t\t\t\t\t\t\t|-> Inserir %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Alterar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Remover %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar %-42s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Lista Detalhada %-26s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                if(tipoCadastro == VOO){ //Mostrar Voo
                    *var = 20;
                }else if(tipoCadastro == CLIENTE){ //Mostrar Cliente
                    *var = 21;
                }else if(tipoCadastro == AERONAVE){ //Mostrar aeronave
                    *var = 22;
                }
            }
        }else if(parteDoMenu == 4){
            printf("\t\t\t\t\t\t\t\t|-> Inserir %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Alterar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Remover %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Lista Detalhada %-26s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                if(tipoCadastro == VOO){ //Mostrar Voo
                    *var = 53;
                }else if(tipoCadastro == CLIENTE){ //Mostrar Cliente
                    *var = 52;
                }else if(tipoCadastro == AERONAVE){ //Mostrar aeronave
                    *var = 53;
                }
            }
        }else if(parteDoMenu == 5){
            printf("\t\t\t\t\t\t\t\t|-> Inserir %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Alterar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Remover %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar %-42s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Lista Detalhada %-26s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = MENUADM;
            }
        }
    }
}

void userMenu(int *var){
    char teclaPressionada = 0;
    int parteDoMenu = 0;
    int inicioMenu = 0; int fimMenu = 3;
    while(teclaPressionada != 10){
        system("clear");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t ________________________________________________________\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        printf("\t\t\t\t\t\t\t\t|\tUtilize w e s para se movimentar no menu         |\n");
        printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        if(parteDoMenu == 0){
            printf("\t\t\t\t\t\t\t\t|-> Mostrar dados do seu voo %-25s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar seus dados %-31s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Quadro de voos %-27s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 8;
            }
        }else if(parteDoMenu == 1){
            printf("\t\t\t\t\t\t\t\t|-> Mostrar dados do seu voo %-25s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar seus dados %-31s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Quadro de voos %-27s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 9;
            }
        }else if(parteDoMenu == 2){
            printf("\t\t\t\t\t\t\t\t|-> Mostrar dados do seu voo %-25s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar seus dados %-31s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Quadro de voos %-27s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 10;
            }
        }else if(parteDoMenu == 3){
            printf("\t\t\t\t\t\t\t\t|-> Mostrar dados do seu voo %-25s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar seus dados %-31s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Mostrar Quadro de voos %-27s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = MENUPRINCIPAL;
            }
        }
    }
}

void admMenu(int *var){
    char teclaPressionada = 0;
    int parteDoMenu = 0;
    int inicioMenu = 0; int fimMenu = 4;
    while(teclaPressionada != 10){
        system("clear");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t ________________________________________________________\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        printf("\t\t\t\t\t\t\t\t|\tUtilize w e s para se movimentar no menu         |\n");
        printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        if(parteDoMenu == 0){
            printf("\t\t\t\t\t\t\t\t|-> Administrar Voos %-33s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Clientes %-29s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Aeronaves %-28s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Realizar testes %-34s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 4;
            }
        }else if(parteDoMenu == 1){
            printf("\t\t\t\t\t\t\t\t|-> Administrar Voos %-33s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Clientes %-29s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Aeronaves %-28s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Realizar testes %-34s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 5;
            }
        }else if(parteDoMenu == 2){
            printf("\t\t\t\t\t\t\t\t|-> Administrar Voos %-33s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Clientes %-29s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Aeronaves %-28s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Realizar testes %-34s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 6;
            }
        }else if(parteDoMenu == 3){
            printf("\t\t\t\t\t\t\t\t|-> Administrar Voos %-33s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Clientes %-29s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Aeronaves %-28s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Realizar testes %-34s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = MENUTESTES;
            }
        }else if(parteDoMenu == 4){
            printf("\t\t\t\t\t\t\t\t|-> Administrar Voos %-33s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Clientes %-29s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Administrar Aeronaves %-28s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Realizar testes %-34s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Voltar %-43s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = MENUPRINCIPAL;
            }
        }
    }
}

void mainMenu(int *var){
    char teclaPressionada = 0;
    int parteDoMenu = 0;
    int inicioMenu = 0; int fimMenu = 3;
    while(teclaPressionada != 10){
        system("clear");
        printf("\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t ________________________________________________________\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        printf("\t\t\t\t\t\t\t\t|\tUtilize w e s para se movimentar no menu         |\n");
        printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t |\n");
        if(parteDoMenu == 0){
            printf("\t\t\t\t\t\t\t\t|-> Logar como administrador %-25s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Logar como usuário %-31s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Quadro de Voos %-35s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Sair %-45s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = MENUADM;
            }
        }else if(parteDoMenu == 1){
            printf("\t\t\t\t\t\t\t\t|-> Logar como administrador %-25s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Logar como usuário %-31s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Quadro de Voos %-35s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Sair %-45s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = MENUUSUARIO;
            }
        }else if(parteDoMenu == 2){
            printf("\t\t\t\t\t\t\t\t|-> Logar como administrador %-25s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Logar como usuário %-31s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Quadro de Voos %-35s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|-> Sair %-45s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = 51;
            }
                
        } else if(parteDoMenu == 3){
            printf("\t\t\t\t\t\t\t\t|-> Logar como administrador %-25s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Logar como usuário %-31s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Quadro de Voos %-35s[%c]|\n"," ",' ');
            printf("\t\t\t\t\t\t\t\t|-> Sair %-45s[%c]|\n"," ",'*');
            printf("\t\t\t\t\t\t\t\t|________________________________________________________|\n\n\n");
            printf("\t\t\t\t\t\t\t\t                               \\ \n");
            printf("\t\t\t\t\t\t\t\t	       - \\- -           \\ \n");
            printf("\t\t\t\t\t\t\t\t	     - -  \\- ____________\\__________ \n");
            printf("\t\t\t\t\t\t\t\t	   - - - - \\___{}_O_O_O_O_/O_O_O__*_/>\n");
            printf("\t\t\t\t\t\t\t\t	 - - - - - - - - - - -  /\n");
            printf("\t\t\t\t\t\t\t\t                               /\n");
            printf("\t\t\t\t\t\t\t\t                              /	\n");
            teclaPressionada = getchChar();
            if(movmentMenu(teclaPressionada,&parteDoMenu,inicioMenu,fimMenu)){
                *var = SAIRDOPROGRAMA;
            }
        }
    }
}
 
void deciderMenu(Lista_Cliente *c, Lista_Plane *p, Lista_Voo *v){
    int MENU = 1; //Variável de decisão do menu
    while(MENU != SAIRDOPROGRAMA){ //Enquanto var for diferente de 0
        if(MENU == MENUPRINCIPAL){ //Entra no menu principal
            mainMenu(&MENU);
        }else if(MENU == MENUADM){ //Entra no menu de adm                        *menu
            admMenu(&MENU);
        }else if(MENU == MENUUSUARIO){ //Entra no menu de usuário                *menu
            userMenu(&MENU);
        }else if(MENU == MENUADMVOO){ //Administrar voos                         *menu
            funcAdmMenu(&MENU, VOO);
        }else if(MENU == MENUADMCLIENTE){ //Administrar clientes                 *menu       
            funcAdmMenu(&MENU, CLIENTE);
        }else if(MENU == MENUADMAERONAVES){ //Administrar aeronaves              *menu
            funcAdmMenu(&MENU, AERONAVE);
        }else if(MENU == MENUTESTES){ //Realizar testes                          *menu
            testsMenu(&MENU);
        }else if(MENU == 8){ //Mostra os dados de um voo (versão cliente)        *função
            showFlightTerminal(&v);
            MENU = MENUUSUARIO;
        }else if(MENU == 9){ //Mostra os dados de um usuário (versão cliente)    *função
            showClientTerminalUser(&c);
            MENU = MENUUSUARIO;
        }else if(MENU == 10){ //Mostra o quadro de status                        *função
            imprime_quadro(v);
            MENU = MENUUSUARIO;
        }else if(MENU == 11){ //Inserir voo                                      *menu
            registerMenu(&MENU, VOO, INSERIR);
        }else if(MENU == 12){ //Inserir cliente                                  *menu
            registerMenu(&MENU, CLIENTE, INSERIR);
        }else if(MENU == 13){ //Inserir aeronave                                 *menu
            registerMenu(&MENU, AERONAVE, INSERIR);
        }else if(MENU == 14){ //Alterar voo                                      *menu
            changeFlightTerminal(&v);
            printf("1\n");
            MENU = MENUADMVOO;
        }else if(MENU == 15){ //Alterar cliente                                  *menu
            changeClientTerminal(&c);
            MENU = MENUADMCLIENTE;
        }else if(MENU == 16){ //Alterar aeronave                                 *menu
             changePlaneTerminal(&p);
            MENU = MENUADMAERONAVES;
        }else if(MENU == 17){ //Remover voo                                      *menu
            deleteFlightTerminal(&v);
            MENU = MENUADMVOO;
        }else if(MENU == 18){ //Remover cliente                                  *menu
            deleteClientTerminal(&c);
            MENU = MENUADMCLIENTE;
        }else if(MENU == 19){ //Remover aeronave                                 *menu
            deletePlaneTerminal(&p);
            MENU = MENUADMAERONAVES;
        }else if(MENU == 20){ //Mostrar voo                                      *menu
            showFlightTerminal(&v);
            MENU = MENUADMVOO;
        }else if(MENU == 21){ //Mostrar cliente                                  *menu
            showClientTerminal(&c);
            MENU = MENUADMCLIENTE;
        }else if(MENU == 22){ //Mostrar aeronave                                 *menu
            showPlaneTerminal(&p);
            MENU = MENUADMAERONAVES;
        }else if(MENU == 23){ //Testar voo                                       *menu
            CallFlightTest();
            MENU = MENUTESTES;
        }else if(MENU == 24){ //Testar cliente                                   *menu
            CallClientTest();
            MENU = MENUTESTES;
        }else if(MENU == 25){ //Testar aeronave                                  *menu
            CallPlaneTest();
            MENU = MENUTESTES;
        }else if(MENU == 26){ //Testar todos                                     *menu
            CallTestAll();
            MENU = MENUTESTES;
        }else if(MENU == 27){ //Inserir voo via arquivo                          *função
            InsertFlightAndClientFile(&c,&v);
            MENU = MENUADMVOO;
        }else if(MENU == 28){ //Alterar voo via arquivo                          *função
            //altera_terminal_voo(v);
            MENU = MENUADMVOO;
        }else if(MENU == 29){ //Remover voo via arquivo                          *função
            MENU = MENUPRINCIPAL;
        }else if(MENU == 30){ //Mostrar voo via arquivo                          *função
            MENU = MENUPRINCIPAL;
        }else if(MENU == 31){ //Inserir cliente via arquivo                      *função
            c = insertListClientFile(c);
            printf("Clientes inseridos com sucesso!\n");
            printf("Pressione qualquer tecla para voltar ao menu\n:");
            getchar();
            MENU = MENUADMCLIENTE;
        }else if(MENU == 32){ //Alterar cliente via arquivo                      *função
            MENU = MENUPRINCIPAL;
        }else if(MENU == 33){ //Remover cliente via arquivo                      *função
            MENU = MENUPRINCIPAL;
        }else if(MENU == 34){ //Mostrar cliente via arquivo                      *função
            MENU = MENUPRINCIPAL;
        }else if(MENU == 35){ //Inserir aeronave via arquivo                     *função
            p = insertListPlaneFile(p);
            printf("Aeronaves inseridas com sucesso!\n");
            printf("Pressione qualquer tecla para voltar ao menu\n:");
            getchar();
            MENU = MENUADMAERONAVES;
        }else if(MENU == 36){ //Alterar aeronave via arquivo                     *função
            MENU = MENUPRINCIPAL;
        }else if(MENU == 37){ //Remover aeronave via arquivo                     *função
            MENU = MENUPRINCIPAL;
        }else if(MENU == 38){ //Mostrar aeronave via arquivo                     *função
            MENU = MENUPRINCIPAL;
        }else if(MENU == 39){ //Inserir voo via terminal                         *função
            insertFlightTerminal(&v);
            MENU = MENUADMVOO;
        }else if(MENU == 40){ //Alterar voo via terminal                         *função
            //altera_terminal_voo(v);
            MENU = MENUADMVOO;
        }else if(MENU == 41){ //Remover voo via terminal                         *função
            deleteFlightTerminal(&v);
            MENU = MENUADMVOO;
        }else if(MENU == 42){ //Mostrar voo via terminal                         *função
            showFlightTerminal(&v);
            MENU = MENUADMVOO;
        }else if(MENU == 43){ //Inserir cliente via terminal                     *função
            insertClientTerminal(&c);
            MENU = MENUADMCLIENTE;
        }else if(MENU == 44){ //Alterar cliente via terminal                     *função
            changeClientTerminal(&c);
            MENU = MENUADMCLIENTE;
        }else if(MENU == 45){ //Remover cliente via terminal                     *função
            deleteClientTerminal(&c);
            MENU = MENUADMCLIENTE;
        }else if(MENU == 46){ //Mostrar cliente via terminal                     *função
            showClientTerminal(&c);
            MENU = MENUADMCLIENTE;
        }else if(MENU == 47){ //Inserir aeronave via terminal                    *função
            insertPlaneTerminal(&p);
            MENU = MENUADMAERONAVES;
        }else if(MENU == 48){ //Alterar aeronave via terminal                    *função
            changePlaneTerminal(&p);
            MENU = MENUADMAERONAVES;
        }else if(MENU == 49){ //Remover aeronave via terminal                    *função
            deletePlaneTerminal(&p);
            MENU = MENUADMAERONAVES;
        }else if(MENU == 50){ //Mostrar aeronave via terminal                    *função
            showPlaneTerminal(&p);
            MENU = MENUADMAERONAVES;
        }else  if(MENU == 51){ //Mostrar quadro de voos                          *função
            imprime_quadro(v);
            MENU = MENUPRINCIPAL;
        }else if(MENU == 52){ //Mostrar Lista de clientes detalhada              *função
            printListaClientDetails(c);
            MENU = MENUADMCLIENTE;
        }else if(MENU == 53){ //Mostrar Lista de voo detalhada                   *função
            printListaFlightDetails(v);
            MENU = MENUADMVOO;
        }else {
            MENU = MENUPRINCIPAL;
        }
    }
}
