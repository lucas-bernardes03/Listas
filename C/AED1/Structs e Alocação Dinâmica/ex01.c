#include <stdio.h>
#include <stdlib.h>

void fracao(int nt,int size);

int main (){
    int nt,i,size;
    scanf("%d",&nt);
    for(i=1;i<=nt;i++){
        scanf("%d",&size);
        fracao(i,size);
    }
    return 0;
}

void fracao(int nt,int size){
    double res;
    int i,j,k=0;
    int * num;
    num = (int *)malloc(size*2*sizeof(int));
    
    for(i=0;i<size*2;i+=2) scanf("%d/%d",&num[i],&num[i+1]);
    
    printf("Caso de teste %d\n",nt);

    for(i=0;i<size*2;i+=2){
        res = num[i]/(double)num[i+1];
        for(j=i+2;j<size*2;j+=2){
            if(res == num[j]/(double)num[j+1]){
                printf("%d/%d equivalente a %d/%d\n",num[i],num[i+1],num[j],num[j+1]);
                k = 1;
            }
        } 
    }
    
    if(k==0) printf("Nao ha fracoes equivalentes na sequencia\n");
    free(num);
}