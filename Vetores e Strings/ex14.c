#include <stdio.h>

int main(){
    int lista[1000000];
    int n,i,k,j,na,na_max,num;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&lista[i]);
    }
    na_max = 1;
    na=0;
    num = 0;
    for(i=0;i<n;i++){
        k = lista[i];
        for(j=0;j<n;j++){
            if(k==lista[j]) na++;
        }
        if(na>na_max){
            na_max = na;
            num = lista[i];
        }
        na = 0;
    }
    printf("%d\n%d\n",num,na_max);
    return 0;
}