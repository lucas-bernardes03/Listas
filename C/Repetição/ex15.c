#include <stdio.h>

int main(){
    
    int n,k,nd;
    scanf("%d",&n);

    if(n<0){
        printf("Numero invalido!\n");
        return 0;
    }

    nd = 0;
    for(k=1;k<=n;k++){
        if(n%k==0) nd++;
    }

    if(nd==2) printf("PRIMO\n");
    else printf("NAO PRIMO\n");

    return 0;
}