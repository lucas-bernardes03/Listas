#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "poly.h"

int main(int argc, char * argv[]){
    int i;
    char * fname;
    
    Poly p1;
    FILE * polinomio;
   
    if(argc == 3){
        
        strcpy(p1.code,"poly");                                         // code poly
        p1.p = p_max(argv[1]);                                            // coef max
        if(p1.p == -1){
            printf("Valor do polinomio invalido!\n");
            return 0;
        }
        
        p1.coef = (double*)malloc((p1.p + 1)*sizeof(double));    // alocacao baseada no coef max
        for(i=0;i<=p1.p;i++) p1.coef[i] = 0;                    // setando todos os coeficientes como 0
        p1.coef = p_coef(p1,argv[1]);                                  // colocando os valores nos coeficientes certos

        
        fname = (char*)malloc(strlen(argv[2])*sizeof(int));     // nome do arquivo a ser criado
        strcpy(fname,argv[2]);
        strcat(fname,".bin");

        
        if((polinomio = fopen(fname, "wb")) == NULL){
            printf("Erro ao abrir o arquivo!\n");
            exit(1);
        }
        

        fwrite(p1.code,sizeof(char),4,polinomio);
        fwrite(&(p1.p),sizeof(int),1,polinomio);
        fwrite(p1.coef,sizeof(double),p1.p+1,polinomio);

        fclose(polinomio);

        printf("Arquivo criado com sucesso!\n");

        free(fname);
        free(p1.coef);
    }
    else{
        printf("Erro!\n");
        printf("O formato de insercao deve ser o seguinte:\n");
        printf("./pbuild %cpolinomio no formato: +-ax^p%c nome_do_arquivo\n",'"','"');
        printf("Todos os polinomios devem apresentar um fator multiplicando x e um coeficiente de potencia.\n");
    } 
    
    
    return 0;
}