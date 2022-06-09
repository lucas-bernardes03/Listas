#include <stdio.h>

int main(){

    int n,i,k,j;
    scanf("%d",&n);

    if(n<=1) {
        printf("Campeonato invalido!\n");
        return 0;
    }

    k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i!=j && i<j) {
                printf("Final %d: Time%d X Time%d\n",k,i,j);
                k++;
            }
        }
    }



    return 0;
}