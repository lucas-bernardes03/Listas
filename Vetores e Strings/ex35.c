#include <stdio.h>
#include <stdlib.h>

void op_conj(int ta, int tb);

int main(){
    int ta,tb,i,k;

    do{
        scanf("%d",&ta);
    }while(ta < 1 || ta > 100);

    do{
        scanf("%d",&tb);
    }while(tb < 1 || tb > 100);

    op_conj(ta,tb);
    
    return 0;
}

void op_conj(int ta, int tb){
    int i, k, j=0,len=0,cont=0,maior;
    int * cja;
    int * cjb;
    int * uniao;
    int * intrsc;
    
    if(ta>tb) maior=ta;
    else maior = tb;
    
    cja = malloc(ta*sizeof(int));
    cjb = malloc(tb*sizeof(int));
    uniao = malloc((ta+tb)*sizeof(int));
    intrsc = malloc(maior*sizeof(int));

    for(i=0;i<ta;i++){
        scanf("%d", &cja[i]);
        for(k=0;k<i;k++){
            if(cja[k] == cja[i]){
                i--;
                break;
            }
        }
    }

    for(i=0;i<tb;i++){
        scanf("%d",&cjb[i]);
        for(k=0;k<i;k++){
            if(cjb[k] == cjb[i]){
                i--;
                break;
            }
        }
    }

    for(i=0;i<ta;i++){
        uniao[i] = cja[i];
        len = i;
    } 

    for(i=0;i<tb;i++){
        for(k=0;k<=len;k++){
            if(cjb[i] == uniao[k]){
                j = 1;
                break;
            }
        }
        if(j==0) uniao[++len] = cjb[i];
        j = 0;
    }

    printf("(");
    for(i=0;i<=len;i++){
        printf("%d",uniao[i]);
        if(i+1 <= len) printf(",");
    }
    printf(")\n");

    len = -1;

    for(i=0;i<tb;i++){
        for(k=0;k<ta;k++){
            if(cjb[i] == cja[k]) intrsc[++len] = cjb[i];
        }
    }

    if(len == -1) printf("()\n");
    else{
        printf("(");
        for(i=0;i<=len;i++){
            printf("%d",intrsc[i]);
            if(i+1 <= len) printf(",");
        }
        printf(")\n");
    }

    free(cja);
    free(cjb);
    free(uniao);
    free(intrsc);
}