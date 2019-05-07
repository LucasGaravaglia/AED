#include "validacao.h"

int checkTimeSize(char *tempo){
    return (strlen(tempo) == 5);
}
 
int checkTimeFormat(char *tempo){
    int i = 0;
    if(tempo[0] >= '0' && tempo[0] <= '1'){
    	if(tempo[1] >= '0' && tempo[1] <= '9') i+=2;
    }else if(tempo[0] == '2'){
    	if(tempo[1] >= '0' && tempo[1] <= '3') i+=2;
    }
    if(tempo[2] == ':') i++;
    if(tempo[3] >= '0' && tempo[3] <= '5') i++;
    if(tempo[4] >= '0' && tempo[4] <= '9') i++;
    if(i == CPFVERIFICADO) return 1;
    return 0;
}

int checkSigSize(char *sigla){
    return(strlen(sigla) == 3);
}




int checkLetUp(char letra){
    return (letra >= 'A' && letra <= 'Z');
}

int checkSigLetUp(char *sigla){
    return (checkLetUp(sigla[0]) && checkLetUp(sigla[1]) && checkLetUp(sigla[2]));
}

int checkCpfSize(char *cpf){
    return (strlen(cpf) == 11);
}

int checkNum(char num){
    return (num >= '0' && num <= '9');
}

int checkCpfNum(char *cpf){
    int i,k=0;
    for(i=0;i<11;i++){
        if(checkNum(cpf[i])) k++;
    }
    if(k == TAMANHOCPFVALIDO) return 1;
    else return 0;
}

int checkTime(char *tempo){
    return (checkTimeSize(tempo) && checkTimeFormat(tempo));
}

int checkSig(char *sigla){
     return (checkSigSize(sigla) && checkSigLetUp(sigla));
}

int checkAirport(char *dest, char *orig){
     return (!strstr(dest,orig) || (strlen(dest) != strlen(orig)));
}

int checkCpf(char *cpf){
     return (checkCpfSize(cpf) && checkCpfNum(cpf));
}

void removeSpaces(char s[]){
	char *temp;
	char novo[50];
	temp = strtok(s," ");
	while(temp != NULL){
		strcat(novo,temp);
		temp = strtok(NULL," ");
		if(temp != NULL) strcat(novo," ");
	}
	strcpy(s,novo);
}

