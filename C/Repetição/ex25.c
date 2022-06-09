#include <stdio.h>

int main(){
    int n,m,k,i,j;
    scanf("%d",&n);

    m = 1;

    for(k=1;k<=n;k++){
        printf("%d*%d*%d = ",k,k,k);
        for(i=0;i<k;i++){
            printf("%d",m);
            if(i+1!=k) printf("+");
            m += 2;
        }
        printf("\n");
    }

    return 0;
}