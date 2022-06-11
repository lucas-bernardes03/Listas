#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "poly.h"

int main(int argc, char * argv[]){
    int i,maior=-1;
    char * fname;
    Poly p1,p2,result;
    FILE * fres;
    if(argc == 4){
        fname = (char*)malloc(strlen(argv[1])*sizeof(char));
        strcpy(fname,argv[1]);
        strcat(fname,".bin");

        p1 = p_read(fname, p1);
        printf("Primeiro arquivo lido com sucesso!\n");
        free(fname);

        fname = (char*)malloc(strlen(argv[2])*sizeof(char));
        strcpy(fname,argv[2]);
        strcat(fname,".bin");

        p2 = p_read(fname,p2);
        printf("Segundo arquivo lido com sucesso!\n");
        free(fname);  

        if(p1.p > p2.p) maior = p1.p;
        else maior = p2.p;

        strcpy(result.code,"poly");
        result.p = maior;
        result.coef = (double*)malloc((result.p + 1)*sizeof(double));
        for(i=0;i<=result.p;i++) result.coef[i] = p1.coef[i] + p2.coef[i];
        printf("Resultado lido com sucesso!\n");
        
        fname = (char*)malloc(strlen(argv[3])*sizeof(char));
        strcpy(fname,argv[3]);
        strcat(fname,".bin");
        
        if((fres = fopen(fname,"wb")) == NULL){
            printf("Erro ao abrir o arquivo!\n");
            exit(1);
        }

        fwrite(result.code,sizeof(char),4,fres);
        fwrite(&(result.p),sizeof(int),1,fres);
        fwrite(result.coef,sizeof(double),result.p+1,fres);
        printf("Arquivo criado com sucesso!\n");

        fclose(fres);
        
        free(fname);
        free(p1.coef);
        free(p2.coef);
        free(result.coef);
    }
    return 0;
}