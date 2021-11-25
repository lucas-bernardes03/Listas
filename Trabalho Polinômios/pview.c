#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "poly.h"

int main(int argc, char * argv[]){
    char code[4];
    int p,i,ver;
    char * fname;
    double * coef;
    FILE * polinomio;
   
    if(argc == 2){
        fname = (char*)malloc(strlen(argv[1])*sizeof(char)); //nome do arquivo
        strcpy(fname,argv[1]);
        strcat(fname,".bin");
        polinomio = fopen(fname,"rb");
        
        fread(code,sizeof(code),1,polinomio);               //leitura do poly
        fread(&p,sizeof(int),1,polinomio);                  //leitura do coef max

        coef = (double*)malloc((p+1)*sizeof(double));       //alocacao dinamica dos coeficientes
        fread(coef,sizeof(double),p+1,polinomio);           //leitura dos coeficientes

        fclose(polinomio);
        free(fname);
    }


    ver = 0;
    for(i=0;i<=p;i++){
        if(coef[i] != 0){ 
            if(i==0){
                printf("%.2lf",coef[i]);
                ver = 1; 
            }
            
            else if(i==1){
                if(coef[i] > 0){
                    if(ver == 1) printf("+");
                    printf("%.2lfx",coef[i]);
                    ver = 1;
                }
                else{
                    printf("%.2lfx",coef[i]);
                    ver = 1;
                }
            }       

            else if(coef[i] == 1){
                if(ver == 1) printf("+");
                printf("x^%d",i);
                ver = 1;
            } 
            else if(coef[i] == -1){
                printf("-x^%d",i);
                ver = 1;
            }

            else{
                if(coef[i] > 0){
                    if(ver = 1) printf("+");
                    printf("%.2lfx^%d",coef[i],i);
                    ver = 1;
                }
                else{
                    printf("%.2lfx^%d",coef[i],i);
                    ver = 1;
                }
            }
        }
    }

    if(ver == 0) printf("0\n");

    free(coef);
    return 0;
}