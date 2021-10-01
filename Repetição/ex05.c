#include <stdio.h>

int main(){
    int soma;
    int init,r,n,i;
    scanf("%d %d %d",&init,&r,&n);
    
    soma = 0;
    for(i=0;i<n;i++){
        soma += init+(r*i);
    }
    printf("%d\n",soma);
    return 0;
}