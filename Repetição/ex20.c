#include <stdio.h>

int main(){
    int m,n,kn,km;  
    scanf("%d %d",&m,&n);

    for(km=1;km<=m;km++){
        for(kn=1;kn<=n;kn++){
            if(km != kn && km>kn){
                printf("(%d,%d)",km,kn);
                if(kn+1 != km && kn+1 <= n) printf("-");
                if(kn+1 == km || kn+1 > n) printf("\n");
            }
        }
    }

    return 0;
}