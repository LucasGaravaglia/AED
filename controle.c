#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include "controle.h"
#include <time.h>

int charToNum(char a){
    if(a == '0') return 0;
    else if(a == '1') return 1;
    else if(a == '2') return 2;
    else if(a == '3') return 3;
    else if(a == '4') return 4;
    else if(a == '5') return 5;
    else if(a == '6') return 6;
    else if(a == '7') return 7;
    else if(a == '8') return 8;
    else if(a == '9') return 9;
    else return -9999999;
}

int toHora(int min){
    int a,b,horas;
    a=min/60;
    b=min-a*60;
    horas=a*100+b;
}

int toMin(char *hora){
    int horas = 0;
    horas += charToNum(hora[0])*10;
    horas += charToNum(hora[1]);
    horas *= 60;
    horas += charToNum(hora[3])*10;
    horas += charToNum(hora[4]);
    return horas;
}

void timeArrival(char * chegada, char * partida, char * duracao){

    int a,b,c, horas;
    char hora_chegada[6];
    a=toMin(partida);
    b=toMin(duracao);
    c=a+b;
    
    horas=toHora(c);
    hora_chegada[0]=c/1000+48;
    
    c=(horas/100)%10;
    hora_chegada[1]=c+48;
    c=(horas/10)%10;
    
    hora_chegada[3]=c+48;
    c=horas%10;
    hora_chegada[4]=c+48;
    
    hora_chegada[2]=':';
    hora_chegada[5]=NULL;
    
    strcpy(chegada,hora_chegada);
    
    
}

void printTimeFile(FILE *f){
  time_t rawtime;
  struct tm * timeinfo;
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  fprintf(f,"%s\n", asctime (timeinfo));
}

void printTime(){
  time_t rawtime;
  struct tm * timeinfo;
  char a[50];
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  strcpy(a,asctime (timeinfo));
  printf("%s\n", a+11);
  
}

char getchChar(){
    char buf=0;
    struct termios old={0};
    fflush(stdout);
    if(tcgetattr(0, &old)<0)
        perror("tcsetattr()");
    old.c_lflag&=~ICANON;
    old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    if(tcsetattr(0, TCSANOW, &old)<0)
        perror("tcsetattr ICANON");
    if(read(0,&buf,1)<0)
        perror("read()");
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    if(tcsetattr(0, TCSADRAIN, &old)<0)
        perror ("tcsetattr ~ICANON");
    return buf;
}

/*
 * 
 * Funções de controle das aeronaves
 * 
 */ 
                    
                           
