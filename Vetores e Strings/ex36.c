#include <stdio.h>
#include <stdlib.h>

void intercalar(int q1, int q2);

int main(){
    int q1,q2;

    scanf("%d %d",&q1,&q2);

    intercalar(q1,q2);

    return 0;
}

void intercalar(int q1, int q2){
    int i,len,k,swap,tmp;
    int * vet1;
    int * vet2;
    int * vet_ord;
    vet1 = malloc(q1*sizeof(int));
    vet2 = malloc(q2*sizeof(int));
    vet_ord = malloc((q1+q2)*sizeof(int));

    for(i=0;i<q1;i++){
        scanf("%d",&vet1[i]);
        vet_ord[i] = vet1[i];
        len = i;
    }
    for(i=0;i<q2;i++) {
        scanf("%d",&vet2[i]);
        vet_ord[++len] = vet2[i];
    }

    for(i=0;i<=len;i++){
        swap = 0;
        for(k=0;k<len;k++){
            if(vet_ord[k] > vet_ord[k+1]){
                tmp = vet_ord[k];
                vet_ord[k] = vet_ord[k+1];
                vet_ord[k+1] = tmp;
                swap = 1;
            }
        }
        if(swap == 0) break;
    }

    for(i=0;i<=len;i++) printf("%d\n",vet_ord[i]);
}