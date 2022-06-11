#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int nJogo;
    int numero[6];
} CARTELA;

typedef struct{
    int nJogo;
    int numero[6];
} RESULTADO;


int main(){
    int n,i,k,na=0,j;
    int nc[6],idx=0,ver=0;
    scanf("%d",&n);
    RESULTADO r;
    CARTELA * aposta;
    aposta = (CARTELA*)malloc(n*sizeof(CARTELA));

    for(i=0;i<n;i++){
        scanf("%d",&(aposta[i].nJogo));
        for(k=0;k<6;k++) scanf("%d",&(aposta[i].numero[k]));
    }

    scanf("%d",&(r.nJogo));
    for(i=0;i<6;i++) scanf("%d",&(r.numero[i]));

    for(i=0;i<n;i++){
        for(k=0;k<6;k++){
            for(j=0;j<6;j++){
                if(aposta[i].numero[k] == r.numero[j]){
                    nc[idx] = r.numero[j];
                    idx++;
                    na++;
                } 
            }
        }
        if(na == 4){
            printf("QUADRA %d: ",aposta[i].nJogo);
            for(k=0;k<4;k++) printf("%d ",nc[k]);
            printf("\n");
            ver=1;
        }
        else if(na == 5){
            printf("QUINA %d: ",aposta[i].nJogo);
            for(k=0;k<5;k++) printf("%d ",nc[k]);
            printf("\n");
            ver=1;
        }
        else if(na == 6){
            printf("SENA %d: ",aposta[i].nJogo);
            for(k=0;k<6;k++) printf("%d ",nc[k]);  
            printf("\n");
            ver =1;
        }

        na = 0;
        idx = 0; 
    }

    if(ver == 0) printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d\n",r.nJogo);

    free(aposta);
    return 0;
}