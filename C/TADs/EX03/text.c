#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "text.h"

Texto * criarTexto (char * t){
    Texto * txt;
    int len;
    txt = (Texto*)malloc(sizeof(Texto));
    len = strlen(t);
    
    strcpy(txt->texto,t);
    txt->size = len;

    return txt;
    free(txt);
}

void liberarTexto (Texto * t){
    t = NULL;
    free(t);
}

unsigned int tamanhoTexto (Texto * t){
    return t->size;
}

void obterTexto (Texto * t){
    int i;
    for(i=0;i<t->size;i++){
        printf("%c",t->texto[i]);
    }
}

void mostrarTexto (Texto *t, unsigned int colunas){
    int i,k=colunas;
    for(i=0;i<t->size;i++){
        printf("%c",t->texto[i]);
        k--;
        if(k==0){
            printf("\n");
            k = colunas;
        } 
    }
}

Texto * copiarTexto (Texto * t){
    return t;
}

void substituirTexto (Texto * t, char * alteracao){ 
    int len;
    len = strlen(alteracao);
    strcpy(t->texto,alteracao);
    t->size = len;
}

Texto * concatenarTextos (Texto * t1, Texto * t2){
    Texto * cat;
    cat = (Texto*)malloc(sizeof(Texto));
    strcpy(cat->texto,t1->texto);
    strcat(cat->texto,t2->texto);
    cat->size = t1->size + t2->size;
    return cat;
}

void obterSubtexto (Texto * t, unsigned int inicio, int tamanho, char * sub){
    int i,aux=0;
    
    for(i=inicio-1;i<tamanho+inicio-1;i++){
        sub[aux] = t->texto[i];
        aux++;
    }
}

unsigned int encontrarSubtexto (Texto * t, char * subtexto, unsigned int ocorrencia){
    int i,k, aux=0,lensub,oc=0;
    lensub = strlen(subtexto);

    for(i=0;i<t->size;i++){
        for(k=0;k<lensub;k++){
            if(subtexto[k] == t->texto[i+k]) aux++;
            else break;
        }
        if(aux != 0) oc++;
        if(oc == ocorrencia) return i+1;
        aux=0;
    }
    
    return 0;

}

int compararTextos (Texto * t1, Texto * t2){
    int len1,len2;
    len1 = t1->size;
    len2 = t2->size;

    if(len1 > len2) return 1;
    else if(len1 < len2) return -1;
    else return 0;
}
