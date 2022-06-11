#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "poly.h"

int p_max(char * poly){
    int i=0,pmax=-1,p;
    while(poly[i] != '\0'){
        if(poly[i] == '^'){
            p = atoi(&(poly[i+1]));
            if(p >= pmax) pmax = p;
        }
        i++;
    }
    if(pmax == -1) return -1;
    return pmax;
}

double * p_coef(Poly p1, char * poly){
    int i=0,coef;
    double value;
    while(poly[i] != '\0'){
        
        if(i == 0 || poly[i] == '+' ) value = atof(&(poly[i]));
        else if(poly[i] == '-') value = atof(&(poly[i]));
        
        if(poly[i] == '^'){
            coef = atoi(&(poly[i+1]));
            p1.coef[coef] = value;
        }

        i++;
    }

    return p1.coef;
}

Poly p_read(char * fname, Poly poli){
    FILE * f;
    if((f = fopen(fname,"rb")) == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    fread(poli.code,sizeof(char),4,f);
    fread(&(poli.p),sizeof(int),1,f);

    poli.coef = (double*)malloc((poli.p + 1)*sizeof(double));
    fread(poli.coef,sizeof(double),poli.p+1,f);

    fclose(f);
    
    return poli;
}