#include "gerastruct.h"


void GenerateChar(int k,char *v,int p){
    int n,i,tamanho;
    srand(time(NULL)+p);
    n = rand() % 25;
    n+=65;
    tamanho=1+rand() % k-1;
    for(i=0;i<tamanho;i++){
    v[i] = n;
    n = rand() % 25;
    n+=97;
    }
    v[tamanho]= '\0';
}

int GenerateError(int n){
    if(n%2 == 0) return 0;
          if(n%3 == 0) return 0;
        return 1;
}

void GenerateInitials(char t[],int p){
    int i,n;
        srand(time(NULL)+p);
    for(i=0;i<3;i++){
        n = rand() % 25;
        n+=65;
        t[i]=n;
    }
    t[3]='\0';
}

void GenerateHour(char t[],int p){
    int n,k=50;
    srand(time(NULL)+p);
    n = rand() % 2;
    n+=48;
    t[0]=n;
    if( t[0] == k ){
        n = rand() % 2;
        n+=48;
        t[1]=n;
   }else{
         n = rand() % 9;
         n+=48;
         t[1]=n;
    }
    t[2]=':';
    n = rand() % 5;
    n+=48;
    t[3]=n;
    n = rand() % 9;
    n+=48;
    t[4]=n;
    t[5]='\0';
    }

void GenerateCpf(int tamanho, char *v,int p){
    int n,i;
     srand(time(NULL)+p);
     for(i=0;i<tamanho;i++){
        n = rand() % 10;
        n+=48;
        v[i] = n;
     }
     v[tamanho]= '\0';

}

void GenerateCpfError(int tamanho, char *v,int p){
    int n,i;
     srand(time(NULL)+p);
     tamanho = tamanho + 3 -rand()%6;
     for(i=0;i<tamanho;i++){
        n = rand() % 10;
        n+=48;
        v[i] = n;
     }
     v[tamanho]= '\0';
}

void GenerateVolue(int *valor, int p){
    srand(time(NULL)+p);
    (*valor) = rand() % 1000;
}

void GenerateStructFlight(Flight *voo,int TamanhoPonteiroChar,int *NumeroRand,int RepeticaoFor){
    char temp[4],temphi[6],temphf[6];

    GenerateChar(TamanhoPonteiroChar,voo->prefixo,*NumeroRand);(*NumeroRand)+=1;
    GenerateChar(TamanhoPonteiroChar,voo->nomeO,*NumeroRand);(*NumeroRand)+=1;
    GenerateChar(TamanhoPonteiroChar,voo->tipo,*NumeroRand);(*NumeroRand)+=1;
    if(GenerateError(RepeticaoFor)){
        strcpy(voo->nomeD,voo->nomeO);(*NumeroRand)+=1;
        GenerateChar(3,voo->siglaO,*NumeroRand);(*NumeroRand)+=1;
    }else{
        GenerateChar(TamanhoPonteiroChar,voo->nomeD,*NumeroRand);(*NumeroRand)+=1;
        GenerateInitials(temp,*NumeroRand);(*NumeroRand)+=1;
        strcpy(voo->siglaO,temp);(*NumeroRand)+=1;
    }
        if(GenerateError(RepeticaoFor)){
            GenerateChar(3,voo->siglaD,*NumeroRand);(*NumeroRand)+=1;
                }else{
                    GenerateInitials(temp,*NumeroRand);(*NumeroRand)+=1;
                    strcpy(voo->siglaD,temp);(*NumeroRand)+=1;
        }
    GenerateHour(temphi,*NumeroRand);(*NumeroRand)+=1;
    strcpy(voo->horaC,temphi);(*NumeroRand)+=1;
        if(GenerateError(RepeticaoFor)){
            GenerateChar(6,voo->horaP,*NumeroRand);(*NumeroRand)+=1;
        }else{
            GenerateHour(temphf,*NumeroRand);(*NumeroRand)+=1;
            strcpy(voo->horaP,temphf);(*NumeroRand)+=1;
     }
        GenerateHour(voo->duracao,*NumeroRand);(*NumeroRand)+=1;
}

void GenerateStructPerson(Client *pessoa,int TamanhoPonteiroChar,int *NumeroRand,int RepeticaoFor){
    int temp;

        GenerateChar(TamanhoPonteiroChar,pessoa->nome,*NumeroRand);(*NumeroRand)+=1;
        GenerateChar(TamanhoPonteiroChar,pessoa->programa,*NumeroRand);(*NumeroRand)+=1;
        GenerateChar(TamanhoPonteiroChar,pessoa->categoria,*NumeroRand);(*NumeroRand)+=1;
            if(GenerateError(RepeticaoFor))
                GenerateCpfError(11,pessoa->cpf,*NumeroRand);
            else
                GenerateCpf(11,pessoa->cpf,*NumeroRand);
            GenerateVolue(&temp,*NumeroRand);(*NumeroRand)+=1;
            pessoa->saldo = temp;
     }

void GenerateStructPlane(Plane *aeronave,int TamanhoPonteiroChar, int *NumeroRand){
    int temp;

    GenerateChar(TamanhoPonteiroChar,aeronave->modelo,*NumeroRand);(*NumeroRand)+=1;
    GenerateVolue(&temp,NumeroRand);(*NumeroRand)+=1;
    aeronave->alcance = temp;
    GenerateVolue(&temp,NumeroRand);(*NumeroRand)+=1;
    aeronave->altura = temp;
    GenerateVolue(&temp,NumeroRand);(*NumeroRand)+=1;
    aeronave->banheiros = temp;
    GenerateVolue(&temp,NumeroRand);(*NumeroRand)+=1;
    aeronave->cadeiras = temp;
    GenerateVolue(&temp,NumeroRand);(*NumeroRand)+=1;
    aeronave->comprimento = temp;
    GenerateVolue(&temp,NumeroRand);(*NumeroRand)+=1;
    aeronave->envergadura = temp;
    GenerateVolue(&temp,NumeroRand);(*NumeroRand)+=1;
    aeronave->velocidadeC = temp;
}

