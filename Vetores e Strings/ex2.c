#include <stdio.h>

int main(){
    int v[1000],n,k;
    int i, j,cont;

    do{
        scanf("%d",&n);
    }while(n<1||n>1000);

    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    scanf("%d",&k);
    cont = 0;
    for(j=0;j<n;j++){
        if(v[j]>=k) cont++;
    }
    printf("%d\n",cont);
    return 0;
}