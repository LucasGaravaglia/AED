#include "controlevoo.h"

int manualStatus(char *horaPartida, char * hora_usuario){
    int dif;          
    dif = toMin(horaPartida) - toMin(hora_usuario);
    if(dif >= 120){
        return 1; //Previsto
    }else if(dif < 120 && dif > 60){
        return 2; //check Aberto
    }else if(dif <= 60 && dif > 45){
        return 3; //check-in Fechado
    }else if(dif <= 45 && dif > 40){
        return 4; //embarque próximo
    }else if(dif <= 40 && dif > 20){
        return 5; //embarque imediato
    }else if(dif <= 20 && dif > 10){
        return 6; //ultima chamada
    }else if(dif <= 10 && dif > 0){
        return 7; //Embarque encerrado
    }else if(dif <= 0 && dif >= -10){
        return 8; //partindo
    }else if(dif < -10){
        return 0; //voo encerrado
    }else {
        return -1; //Erro
    }
}

int status(char *horaPartida){
    int dif;
    time_t rawtime;
    struct tm * timeinfo;
    
      time ( &rawtime );
      timeinfo = localtime ( &rawtime );
      char a[50];
      strcpy(a,asctime (timeinfo));
      
      
      
    dif = toMin(horaPartida) - toMin(a+11);
    if(dif >= 120){
        return 1; //Previsto
    }else if(dif < 120 && dif > 60){
        return 2; //check Aberto
    }else if(dif <= 60 && dif > 45){
        return 3; //check-in Fechado
    }else if(dif <= 45 && dif > 40){
        return 4; //embarque próximo
    }else if(dif <= 40 && dif > 20){
        return 5; //embarque imediato
    }else if(dif <= 20 && dif > 10){
        return 6; //ultima chamada
    }else if(dif <= 10 && dif > 0){
        return 7; //Embarque encerrado
    }else if(dif <= 0 && dif >= -10){
        return 8; //partindo
    }else if(dif < -10){
        return 0; //voo encerrado
    }else {
        return -1; //Erro
    }
}

void showStatus(char *horaPartida){
    if(checkTimeFormat(horaPartida)){
        if(status(horaPartida) == 1){   
            printf("           Previsto          |\n");
        }else if(status(horaPartida) == 2){
            printf("        Check in aberto      |\n");
        }else if(status(horaPartida) == 3){
            printf("       Check in fechado      |\n");
        }else if(status(horaPartida) == 4){
            printf("       Embarque próximo      |\n");
        }else if(status(horaPartida) == 5){
            printf("      Embarque imediato      |\n");
        }else if(status(horaPartida) == 6){
            printf("        Ultima chamada       |\n");
        }else if(status(horaPartida) == 7){
            printf("      Embarque Encerrado     |\n");
        }else if(status(horaPartida) == 8){
            printf("           Partindo          |\n");
        }else if(status(horaPartida) == 0){
            printf("        Voo encerrado        |\n");
        }else{
            printf("Erro na função showStatus\n");
        }
    }else{
        printf("O tempo informado é inválido\n");
    }
}

void manualShowStatus(char *horaPartida, char * hora_usuario){
    if(checkTimeFormat(horaPartida)){
        if(manualStatus(horaPartida, hora_usuario) == 1){   
            printf("           Previsto          |\n");
        }else if(manualStatus(horaPartida,hora_usuario) == 2){
            printf("        Check in aberto      |\n");
        }else if(manualStatus(horaPartida,hora_usuario) == 3){
            printf("       Check in fechado      |\n");
        }else if(manualStatus(horaPartida, hora_usuario) == 4){
            printf("       Embarque próximo      |\n");
        }else if(manualStatus(horaPartida, hora_usuario) == 5){
            printf("      Embarque imediato      |\n");
        }else if(manualStatus(horaPartida, hora_usuario) == 6){
            printf("        Ultima chamada       |\n");
        }else if(manualStatus(horaPartida, hora_usuario) == 7){
            printf("      Embarque Encerrado     |\n");
        }else if(manualStatus(horaPartida, hora_usuario) == 8){
            printf("           Partindo          |\n");
        }else if(manualStatus(horaPartida, hora_usuario) == 0){
            printf("        Voo encerrado        |\n");
        }else{
            printf("Erro na função showStatus\n");
        }
    }else{
        printf("O tempo informado é inválido\n");
    }
}

void changeFlight(Flight *a, Flight *b){
    Flight t;
    t=*a;
    *a=*b;
    *b=t;   
}

void printFlight(Flight voo){
        
    printf("    Prefixo: %s\n", voo.prefixo);
    printf("    Origem: %s\n", voo.siglaO);
    printf("    Destino: %s\n", voo.siglaD);
    printf("    Sai: %s", voo.horaP);
    printf("    Chega: %s\n", voo.horaC);
    printf("    Duração: %s\n", voo.duracao);
    printf("    Aeronave: %s\n", voo.tipo);
    printf("---------------------------------------\n");
       
}

