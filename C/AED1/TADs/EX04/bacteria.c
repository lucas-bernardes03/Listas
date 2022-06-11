#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "bacteria.h"

int menu(){
    int op;

        printf("MENU\n\n");
        printf("1 - Novo Mundo\n");
        printf("2 - Clonar Mundo\n");
        printf("3 - Liberar Mundo\n");
        printf("4 - Adicionar Bacteria - (Posicao, Ordem e Forca Aleatoria)\n");
        printf("5 - Adicionar Bacteria - (Posicao Aleatoria)\n");
        printf("6 - Adicionar Bacteria \n");
        printf("7 - Eliminar Bacteria - Ordem\n");
        printf("8 - Eliminar Bacteria - Posicao\n");
        printf("9 - Uniao - Pacifica (Devem possuir as mesmas dimensoes)\n");
        printf("10 - Guerra (Devem possuir as mesmas dimensoes)\n");
        printf("11 - Guerra Probabilistica (Devem possuir as mesmas dimensoes)\n");
        printf("12 - Numero de Bacterias\n");
        printf("13 - Forca das Bacterias\n");
        printf("14 - Mostrar Mundo\n\n");
        printf("0 - Sair\n\n");
        printf("--> ");
        scanf("%d",&op);

    return op;
}

void newWorld (World * mundo,unsigned int n, unsigned int m){
    int i,k;
    
    mundo->n = n;
    mundo->m = m;

    for(i=0;i<n;i++) for(k=0;k<m;k++){
        mundo->mundo[i][k].ordem = 0;
        mundo->mundo[i][k].forca = 0;
    }

}

World cloneWorld (World * w){
    return *w;
}

void freeWorld (World * w){
    free(w->mundo);
    w->m = 0;
    w->n = 0;
}

unsigned int randomWorld (World * w, unsigned int n){
    int i,k,j,ord = 0;
    int posl,posc,check;
    
    srand(time(NULL));

    for(i=0;i<w->n;i++){
        for(k=0;k<w->m;k++){
            if(ord < w->mundo[i][k].ordem) ord = w->mundo[i][k].ordem;
        }
    }

    if(ord + n > (w->m)*(w->n)) return 0;
    ord++;

    for(j=0;j<n;j++){
        posl = rand() % (w->n);
        posc = rand() % (w->m);
        
        if(w->mundo[posl][posc].ordem > 0){
            j--;
            continue;
        } 

        w->mundo[posl][posc].ordem = ord;
        w->mundo[posl][posc].forca = (rand() % 100) + 1;
        ord++;
    }

    return 1;

}

unsigned int addBacterium (World * w, Bacteria b){
    int locl,locc,ver=1;
    int i,k;
    
    if(b.ordem > w->m * w->n || b.ordem < 1) return 0;
    if(b.forca > 100 || b.forca < 1) return 0;
    for(i=0;i<w->n;i++) for(k=0;k<w->m;k++) if(b.ordem == w->mundo[i][k].ordem) return 0;
    
    srand(time(NULL));
    while(ver == 1){
        locl = rand() % w->n;
        locc = rand() % w->m;
        printf("entro");
        if(w->mundo[locl][locc].ordem > 0) ver = 1;
        else{
            w->mundo[locl][locc].ordem = b.ordem;
            w->mundo[locl][locc].forca = b.forca;
            ver = 0;
        }
    }
    return 1;
}

unsigned int addBacteriumXY (World * w, Bacteria b, unsigned int x, unsigned int y){
    int i,k;

    if(x <= 0 || x > w->n || y <= 0 || y > w->m) return 0;
    if(b.ordem > w->m * w->n || b.ordem < 1) return 0;
    if(b.forca > 100 || b.forca < 1) return 0;
    for(i=0;i<w->n;i++) for(k=0;k<w->m;k++) if(b.ordem == w->mundo[i][k].ordem) return 0;

    if(w->mundo[x-1][y-1].ordem > 0) return 0;
    else{
        w->mundo[x-1][y-1].ordem = b.ordem;
        w->mundo[x-1][y-1].forca = b.forca;
    }

    return 1;
}

unsigned int killBacterium (World * w, unsigned int n){
    int i,k;
    for(i=0;i<w->n;i++) for(k=0;k<w->m;k++){
        if(w->mundo[i][k].ordem == n){
            w->mundo[i][k].ordem = 0;
            w->mundo[i][k].forca = 0;
            return 1;
        }
    }
    return 0;
}

unsigned int killBacteriumXY (World * w, unsigned int x, unsigned int y){
    if(w->mundo[x-1][y-1].ordem > 0){
        w->mundo[x-1][y-1].ordem = 0;
        w->mundo[x-1][y-1].forca = 0;
        return 1;
    }
    else return 0;
}

World jointWorlds (World * w1, World *w2){
    int i,k,ord=0;
    World join;
    join.n = 0;
    join.m = 0;
    
    for(i=0;i<w1->n;i++) for(k=0;k<w1->m;k++){
        if(w1->mundo[i][k].ordem > 0 && w2->mundo[i][k].ordem > 0) return join;
    }

    join.m = w1->m;
    join.n = w1->n;

    for(i=0;i<w1->n;i++){
        for(k=0;k<w1->m;k++){
           if(w1->mundo[i][k].ordem > 0){
                join.mundo[i][k].ordem = w1->mundo[i][k].ordem;
                join.mundo[i][k].forca = w1->mundo[i][k].forca;
           } 
           if(w1->mundo[i][k].ordem > ord) ord = w1->mundo[i][k].ordem;
        }
    } 

    ord++;

    for(i=0;i<w1->n;i++) for(k=0;k<w1->m;k++){
        if(w2->mundo[i][k].ordem > 0){
            join.mundo[i][k].ordem = ord;
            join.mundo[i][k].forca = w2->mundo[i][k].forca;
            ord++;
        }
    }

    return join;

}

World warWorlds (World * w1, World *w2){
    World war;
    int i,k,ord=0;
    
    war.n = w1->n;
    war.m = w1->m;

    for(i=0;i<w1->n;i++) for(k=0;k<w1->m;k++) if(ord < w1->mundo[i][k].ordem) ord = w1->mundo[i][k].ordem;
    ord++;

    for(i=0;i<w1->n;i++){
        for(k=0;k<w1->m;k++){
            if(w1->mundo[i][k].ordem > 0 && w2->mundo[i][k].ordem > 0){
                war.mundo[i][k].ordem = w1->mundo[i][k].ordem;
                if(w1->mundo[i][k].forca > w2->mundo[i][k].forca || w1->mundo[i][k].forca < w2->mundo[i][k].forca){
                    war.mundo[i][k].forca = w1->mundo[i][k].forca + w2->mundo[i][k].forca;
                    if(war.mundo[i][k].forca > 100) war.mundo[i][k].forca = 100;
                } 
                else{
                    war.mundo[i][k].forca = w1->mundo[i][k].forca * 2;
                    if(war.mundo[i][k].forca > 100) war.mundo[i][k].forca = 100;
                }
            }

            else{
                if(w1->mundo[i][k].ordem > 0){
                    war.mundo[i][k].ordem = ord;
                    war.mundo[i][k].forca = w1->mundo[i][k].forca;
                    ord++;
                }
                if(w2->mundo[i][k].ordem > 0){
                    war.mundo[i][k].ordem = ord;
                    war.mundo[i][k].forca = w2->mundo[i][k].forca;
                    ord++;
                }
            }
        }
    }
    return war;
}

World probabilisticWarWorlds (World * w1, World *w2, float p){
    World war;
    int i,k,ord=0;
    int prob;
    
    srand(time(NULL));

    war.n = w1->n;
    war.m = w1->m;

    for(i=0;i<w1->n;i++) for(k=0;k<w1->m;k++) if(ord < w1->mundo[i][k].ordem) ord = w1->mundo[i][k].ordem;
    ord++;

    for(i=0;i<w1->n;i++){
        for(k=0;k<w1->m;k++){
            if(w1->mundo[i][k].ordem > 0 && w2->mundo[i][k].ordem > 0){
                prob = rand() % 100;
                if(prob < p*100) war.mundo[i][k].ordem = w1->mundo[i][k].ordem;
                else war.mundo[i][k].ordem = w2->mundo[i][k].ordem;
                
                if(w1->mundo[i][k].forca > w2->mundo[i][k].forca || w1->mundo[i][k].forca < w2->mundo[i][k].forca){
                    war.mundo[i][k].forca = w1->mundo[i][k].forca + w2->mundo[i][k].forca;
                    if(war.mundo[i][k].forca > 100) war.mundo[i][k].forca = 100;
                } 
                else{
                    war.mundo[i][k].forca = w1->mundo[i][k].forca * 2;
                    if(war.mundo[i][k].forca > 100) war.mundo[i][k].forca = 100;
                }
            }

            else{
                if(w1->mundo[i][k].ordem > 0){
                    war.mundo[i][k].ordem = ord;
                    war.mundo[i][k].forca = w1->mundo[i][k].forca;
                    ord++;
                }
                if(w2->mundo[i][k].ordem > 0){
                    war.mundo[i][k].ordem = ord;
                    war.mundo[i][k].forca = w2->mundo[i][k].forca;
                    ord++;
                }
            }
        }
    }
    return war;
}

unsigned int sizeWorld (World * w){
    int i,k,b=0;
    for(i=0;i<w->n;i++) for(k=0;k<w->m;k++) if(w->mundo[i][k].ordem > 0) b++;
    return b;
}

unsigned int forceWorld (World * w){
    int i,k,b=0;
    for(i=0;i<w->n;i++) for(k=0;k<w->m;k++) if(w->mundo[i][k].ordem > 0) b += w->mundo[i][k].forca;
    return b;
}

unsigned int showWorld (World * w){
    int i,k,j,op;
    
    for(i=0;i<w->n;i++){
        for(j=0;j<w->m;j++){
            printf("+-------");
        }
        printf("+\n");

        for(k=0;k<w->m;k++){
            if(w->mundo[i][k].ordem > 0) printf("|%3d,%3d",w->mundo[i][k].ordem,w->mundo[i][k].forca);
            else printf("|       ");
        }
        printf("|\n");

    }
    
    for(j=0;j<w->m;j++){
        printf("+-------");
    }
    printf("+\n");


    printf("\n\n0 - Voltar --> ");
    scanf("%d",&op);
    system("cls");
}



