#include <stdio.h>

int main (){
    int n,m,sum,i;
    char vet[100000];
    while(1){
        scanf("%d %d",&m,&n);
        if(m==0 && n==0) break;
        sum = m+n;
        sprintf(vet,"%d",sum);
        for(i=0;i<sizeof(vet);i++){
            if((int)vet[i]!=0){
                if(vet[i]!='0') printf("%c",vet[i]);
            }
            else break;
        }
        printf("\n");
    }
    
    return 0;
}