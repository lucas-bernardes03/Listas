//LUCAS BERNARDES FEITOSA 202103751

#include "lista.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int insere(Lista * lista, int max, char * nome, int codigo){
    lista[max].codigo = codigo;
    strcpy(lista[max].nome,nome);
    max++;
    return max;
}

int remover(Lista * lista, int max, int codigo){
    int i,j,ver=0;
    for(i=0;i<max;i++){
        if(lista[i].codigo == codigo){
            for(j=i;j<max;j++){
                lista[j] = lista[j+1];
            }
            max--;
            ver = 1;
        } 
    }
    if(ver==1){
        printf("\nProduto removido!\n\n");
        printf("Pressione ENTER para voltar.");
        getchar();
        return max;
    }   
    else if(ver==0){
        printf("\nProduto nao encontrado!\n\n");
        printf("Pressione ENTER para voltar.");
        getchar();
        return max;
    }
}

void busca_s(Lista * lista, int max, int codigo){
    int i,ver=0;
    for(i=0;i<max;i++){
        if(lista[i].codigo == codigo){
            printf("\nENCONTRADO\n");
            printf("Produto: %s\n",lista[i].nome);
            printf("Codigo: %d\n\n",lista[i].codigo);
            ver = 1;
        }
    }
    if(ver==0) printf("PRODUTO NAO ENCONTRADO\n\n");
}

void busca_b(Lista *lista, int max, int codigo){
    int meio,inicio,final,ver=0;
    inicio = 0;
    final = max-1;

    while (inicio <= final){
        meio = inicio + (final - inicio) / 2;

        if (lista[meio].codigo == codigo){
            printf("ENCONTRADO\n");
            printf("Produto: %s\n",lista[meio].nome);
            printf("Codigo: %d\n\n",lista[meio].codigo);
            ver = 1;
        }

        if (lista[meio].codigo < codigo) inicio = meio+1;
        else final = meio-1;
    }

    if(ver==0) printf("PRODUTO NAO ENCONTRADO\n\n");
}

void crescente(Lista *lista, int max){
    int i,j;
    Lista aux;
    for (i=1;i<max;i++){
        aux = lista[i];
        j = i-1;

        while (j>=0 && lista[j].codigo > aux.codigo){
            lista[j+1] = lista[j];
            j = j-1;
        }
        lista[j+1] = aux;
    }
}

void decrescente(Lista * lista, int max){
    int i,j,idx;
    Lista tmp;

    for (i=0;i<max-1;i++){
        idx = i;
        
        for (j=i+1;j<max;j++) if (lista[j].codigo > lista[idx].codigo) idx = j;
   
        tmp = lista[idx];
        lista[idx] = lista[i];
        lista[i] = tmp;
    }
}

void comparar(Lista *l1, int m1 , Lista *l2, int m2){
    int cdl1[200],cdl2[200];
    int i,j,idx1=0,idx2=0,ver=0;
    system("clear");
    
    for(i=0;i<m1;i++){
        for(j=0;j<idx1;j++){
            if(l1[i].codigo == cdl1[j]){
                printf("\nPRODUTO REPETIDO NA LISTA 1\n");
                printf("Produto: %s\n",l1[i].nome);
                printf("Codigo: %d\n\n", l1[i].codigo);
                ver = 1;
            }
        }
        if(ver == 0){
            cdl1[idx1] = l1[i].codigo;
            idx1++;
        } 
        ver = 0;
    }

    for (i = 0; i < m2; i++){
        for (j = 0; j < idx2; j++){
            if (l2[i].codigo == cdl2[j]){
                printf("\nPRODUTO REPETIDO NA LISTA 2\n");
                printf("Produto: %s\n", l2[i].nome);
                printf("Codigo: %d\n\n", l2[i].codigo);
                ver = 1;
            }
        }
        if (ver == 0){
            cdl2[idx2] = l2[i].codigo;
            idx2++;
        }
        ver = 0;
    }

    ver = 0;

    if(idx1 == idx2){
        for(i=0;i<idx1;i++){
            for(j=0;j<idx2;j++) if(cdl1[i] == cdl2[j]) ver = 1;
            if(ver==0){
                printf("AS LISTAS NAO SAO IGUAIS\n\n");
                return;
            }
            ver = 0;
        }
    }
    else{
        printf("AS LISTAS NAO SAO IGUAIS\n\n");
        return;
    } 

    printf("AS LISTA SAO IGUAIS\n\n");

}

void imprime(Lista * lista, int max){
    int i;
    printf("\n\n");
    printf("LISTA: \n\n");
    for(i=0;i<max;i++){
        printf("Produto: %s\n",lista[i].nome);
        printf("Codigo: %d",lista[i].codigo);
        printf("\n\n");
    }
}