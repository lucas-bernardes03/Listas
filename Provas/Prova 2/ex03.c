#include <stdio.h>

int main(){
    int n,i,j,k;
    scanf("%d",&n);

    for(k=1;k<n;k++){
        for(i=1;i<n;i++){
            if(i>=k){
                if(k*i == 1 || (k*i) % n == 1)printf("(%d,%d)\n",k,i);
            }
        }
    }

    return 0;
}