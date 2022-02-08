#include <stdlib.h>
#include <stdio.h>
#include "complex.h"
#include <unistd.h>

int menu(){
    int opg;    
    
    printf("MENU\n\n");
    printf("1 - Criar conjunto\n");
    printf("2 - Verificar se o conjunto e vazio\n");
    printf("3 - Incluir elemento x no conjunto\n");
    printf("4 - Excluir elemento x do conjunto\n");
    printf("5 - Cardinalidade do conjunto\n");
    printf("6 - Pertence ao conjunto\n");
    printf("7 - Conjuntos C1 e C2 identicos\n");
    printf("8 - C1 subconjunto de C2\n");
    printf("9 - Conjunto complemento de C1 para C2\n");
    printf("10 - Conjunto Uniao de C1 e C2\n");
    printf("11 - Conjunto Interseccao\n");
    printf("12 - Conjunto Diferenca\n");
    printf("13 - Mostrar os elementos do conjunto\n");
    printf("14 - Copiar Conjunto\n");
    printf("15 - Destruir conjunto\n\n");
    printf("0 - Sair\n\n");
    printf("--> ");
    scanf("%d",&opg);
    
    return opg;
}

int criaConjunto(Conjunto * C){
    C->last = 0;
    return 1;
}

int conjuntoVazio(Conjunto * C){
    if(C->last == 0) return 1;
    else return 0;
}

int insereElementoConjunto(Complex x, Conjunto * C){
    int i;
    
    for(i=0;i<C->last;i++){
        if(x.a == C->conj[i].a && x.b == C->conj[i].b) return 0;
    }

    C->conj[C->last] = x;
    C->last++;
    return 1;
}

int excluirElementoConjunto(Complex x, Conjunto * C){
    int i,aux = -1;
    for(i=0;i<C->last;i++){
        if(x.a == C->conj[i].a && x.b == C->conj[i].b){
            aux = i;
        }
    }

    if(aux == -1) return 0;

    for(i = aux;i<C->last;i++){
        C->conj[i].a = C->conj[i+1].a;
        C->conj[i].b = C->conj[i+1].b;
    } 

    C->last--;
    
    return 1;
}

int tamanhoConjunto(Conjunto * C){
    return C->last;
}

int pertenceConjunto(Complex x, Conjunto * C){
    int i,ver=0;
    for(i=0;i<C->last;i++){
        if(C->conj[i].a == x.a && C->conj[i].b == x.b) ver = 1;
    }
    return ver;
}

int conjuntosIdenticos(Conjunto * C1, Conjunto * C2){
    int i, k, ver = 0;
    if(C1->last != C2->last) return 0;

    for(i=0;i<C1->last;i++){
        for(k=0;k<C1->last;k++){
            if(C1->conj[i].a == C2->conj[k].a && C1->conj[i].b == C2->conj[k].b) ver = 1;
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
            if(C2->conj[k].a == C1->conj[i].a && C2->conj[k].b == C1->conj[i].b) ver = 1;
        }
        if(ver == 0) return 0;
        ver = 0;
    }
    
    return 1;
}

Conjunto complemento(Conjunto * C1, Conjunto * C2){
    int i,k,ver=0,aux=0;
    Conjunto comp;
    Complex n;
    comp.last = aux;
    
    for(i=0;i<C2->last;i++){
        for(k=0;k<C1->last;k++){
            if(C2->conj[i].a == C1->conj[k].a && C2->conj[i].b == C1->conj[k].b) ver = 1;
            if(ver == 1) break;
        }
        if(ver == 0){
            n.a = C2->conj[i].a;
            n.b = C2->conj[i].b;
            comp.conj[aux].a = n.a;
            comp.conj[aux].b = n.b;
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
        uni.conj[aux].a = C1->conj[i].a;
        uni.conj[aux].b = C1->conj[i].b;
        aux++;
    }

    uni.last = aux;

    for(i=0;i<C2->last;i++){
        for(k=0;k < uni.last;k++){
            if(C2->conj[i].a == uni.conj[k].a && C2->conj[i].b == uni.conj[k].b){
                ver = 1;
                break;
            } 
        }
        
        if(ver == 0){
            uni.conj[aux].a = C2->conj[i].a;
            uni.conj[aux].b = C2->conj[i].b;
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
            if(C1->conj[i].a == C2->conj[k].a && C1->conj[i].b == C2->conj[k].b){
                ver = 1;
                break;
            } 
            
        }
        if(ver == 1){
            its.conj[aux].a = C1->conj[i].a;
            its.conj[aux].b = C1->conj[i].b;
            aux++;
        }
        ver = 0;
    }

    its.last = aux;

    return its;
}

Conjunto diferenca(Conjunto * C1, Conjunto * C2){
    int i,k,ver=0,aux=0;
    Conjunto diff;
    Complex n;
    diff.last = aux;
    
    for(i=0;i<C1->last;i++){
        for(k=0;k<C2->last;k++){
            if(C1->conj[i].a == C2->conj[k].a && C1->conj[i].b == C2->conj[k].b) ver = 1;
            if(ver == 1) break;
        }
        if(ver == 0){
            n.a = C1->conj[i].a;
            n.b = C1->conj[i].b;
            diff.conj[aux].a = n.a;
            diff.conj[aux].b = n.b;
            aux++;
            diff.last++;
        } 
        ver = 0;
    }

    return diff;
}

int copiarConjunto(Conjunto * C1, Conjunto * C2){
    int i, k;

    C2->last = C1->last;

    for(i=0; i<C1->last;i++){
        C2->conj[i].a = C1->conj[i].a;
        C2->conj[i].b = C1->conj[i].b;
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
            if(C->conj[k].a > C->conj[k+1].a){
                aux = C->conj[k].a;
                C->conj[k].a = C->conj[k+1].a;
                C->conj[k+1].a = aux;
                ver = 1;
            }
            else if(C->conj[k].a == C->conj[k+1].a){
                if(C->conj[k].b > C->conj[k+1].b){
                    aux = C->conj[k].b;
                    C->conj[k].b = C->conj[k+1].b;
                    C->conj[k+1].b = aux;
                    ver = 1;
                }
            }
        }
        if(ver == 0) break;
    }

    if(ordem == 1){
        for(i=0;i<C->last;i++){
            if(C->conj[i].a != 0) printf("%d",C->conj[i].a);
            if(C->conj[i].b > 0) printf("+%di",C->conj[i].b);
            else if(C->conj[i].b < 0) printf("%di",C->conj[i].b);
            printf(" "); 
        }
        printf("\n\n");
    }
    else{
        for(i=C->last-1;i>=0;i--){
            if(C->conj[i].a != 0) printf("%d",C->conj[i].a);
            if(C->conj[i].b > 0) printf("+%di",C->conj[i].b);
            else if(C->conj[i].b < 0) printf("%di",C->conj[i].b); 
            printf(" ");
        }
        printf("\n\n");
    }
    
}
