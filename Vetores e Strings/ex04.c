#include <stdio.h>

int main(){
    int v[4999], n, i, k;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",v[i]);
    }
    
    return 0;
}