#include <stdio.h>
#include <stdlib.h>
#include "conjuntos.h"

int criaConjunto(Conjunto * C){
    C->last = 0;
    return 1;
}

int conjuntoVazio(Conjunto * C){
    if(C->last == 0) return 1;
    else return 0;
}

int insereElementoConjunto(int x, Conjunto * C){
    int i;
    if(x < 0) return 0;
    for(i=0;i<C->last;i++){
        if(x == C->conj[i]) return 0;
    }

    C->conj[C->last] = x;
    C->last++;
    return 1;
}

int excluirElementoConjunto(int x, Conjunto * C){
    int i,aux = -1;
    for(i=0;i<C->last;i++){
        if(x == C->conj[i]){
            aux = i;
        }
    }

    if(aux == -1) return 0;

    for(i = aux;i<C->last;i++) C->conj[i] = C->conj[i+1];
    C->last--;
    
    return 1;
}

int tamanhoConjunto(Conjunto * C){
    return C->last;
}

int maior(int x, Conjunto * C){
    int i, aux=0;
    for(i=0;i<C->last;i++){
        if(C->conj[i] > x) aux++;
    }
    return aux;
}

int menor(int x, Conjunto * C){
    int i, aux=0;
    for(i=0;i<C->last;i++){
        if(C->conj[i] < x) aux++;
    }
    return aux;
}

int pertenceConjunto(int x, Conjunto * C){
    int i,ver=0;
    for(i=0;i<C->last;i++){
        if(C->conj[i] == x) ver = 1;
    }
    return ver;
}

int conjuntosIdenticos(Conjunto * C1, Conjunto * C2){
    int i, k, ver = 0;
    if(C1->last != C2->last) return 0;

    for(i=0;i<C1->last;i++){
        for(k=0;k<C1->last;k++){
            if(C1->conj[i] == C2->conj[k]) ver = 1;
        }
        if(ver == 0) return 0;
    }

    return 1;
}

int subconjunto(Conjunto * C1, Conjunto * C2){
    int i, k, ver;
    if(C1->last > C2->last) return 0;

    for(i=0;i<C1->last;i++){
        for(k=0;k<C2->last;k++){
            if(C2->conj[k] == C1->conj[i]) ver = 1;
        }
        if(ver == 0) return 0;
        ver = 0;
    }
    
    return 1;
}

Conjunto complemento(Conjunto * C1, Conjunto * C2){
    int i,k,ver=0,n,aux=0;
    Conjunto comp;
    comp.last = aux;
    for(i=0;i<C2->last;i++){
        for(k=0;k<C1->last;k++){
            if(C2->conj[i] == C1->conj[k]) ver = 1;
            if(ver == 1) break;
        }
        if(ver == 0){
            n = C2->conj[i];
            comp.conj[aux] = n;
            aux++;
            comp.last++;
        } 
        ver = 0;
    }

    return comp;
}

Conjunto uniao(Conjunto * C1, Conjunto * C2){
    int i, k, ver=0, aux=0;
    Conjunto uni;
    uni.last = aux;

    for(i=0;i < C1->last;i++){
        uni.conj[aux] = C1->conj[i];
        aux++;
    }

    uni.last = aux;

    for(i=0;i<C2->last;i++){
        for(k=0;k < uni.last;k++){
            if(C2->conj[i] == uni.conj[k]){
                ver = 1;
                break;
            } 
        }
        
        if(ver == 0){
            uni.conj[aux] = C2->conj[i];
            aux++;
        }
        ver = 0;
    }

    uni.last = aux;

    return uni;
}

Conjunto interseccao(Conjunto * C1, Conjunto * C2){
    int i, k, ver=0,aux=0;
    Conjunto its;

    for(i=0;i < C1->last; i++){
        for(k=0;k<C2->last;k++){
            if(C1->conj[i] == C2->conj[k]){
                ver = 1;
                break;
            } 
            
        }
        if(ver == 1){
            its.conj[aux] = C1->conj[i];
            aux++;
        }
        ver = 0;
    }

    its.last = aux;

    return its;
}

Conjunto diferenca(Conjunto * C1, Conjunto * C2){
    int i,k,ver=0,n,aux=0;
    Conjunto diff;
    diff.last = aux;
    for(i=0;i<C1->last;i++){
        for(k=0;k<C2->last;k++){
            if(C1->conj[i] == C2->conj[k]) ver = 1;
            if(ver == 1) break;
        }
        if(ver == 0){
            n = C1->conj[i];
            diff.conj[aux] = n;
            aux++;
            diff.last++;
        } 
        ver = 0;
    }

    return diff;
}

Conjunto conjuntoPartes(Conjunto * C){
    int i,aux=0;
    Conjunto part;
    for(i=0;i<C->last;i++){
        part.conj[aux] = C->conj[i];
        aux++;
    }
    
    part.last = aux;
    return part;    
}

int copiarConjunto(Conjunto * C1, Conjunto * C2){
    int i, k;

    C2->last = C1->last;

    for(i=0; i<C1->last;i++){
        C2->conj[i] = C1->conj[i];
    }

    return 1;
}

int destroiConjunto(Conjunto * C){
    C->last = 0;
    return 1;
}

void mostraConjunto(Conjunto * C, int ordem){
    int i, k, aux, ver;
    for(i=1;i<C->last;i++){
        ver = 0;
        for(k=0;k<C->last-1;k++){
            if(C->conj[k] > C->conj[k+1]){
                aux = C->conj[k];
                C->conj[k] = C->conj[k+1];
                C->conj[k+1] = aux;
                ver = 1;
            }
        }
        if(ver == 0) break;
    }

    if(ordem == 1){
        for(i=0;i<C->last;i++){
            printf("%d ",C->conj[i]);
        }
        printf("\n\n");
    }
    else{
        for(i=C->last-1;i>=0;i--){
            printf("%d ",C->conj[i]);
        }
        printf("\n\n");
    }
    
}

