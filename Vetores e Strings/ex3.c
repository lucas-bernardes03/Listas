#include <stdio.h>

int main(){
    int v[1000],n;
    int i,k,np;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    np = 0;
    for(k=0;k<n;k++){
        if(v[k]%2==0) {
            printf("%d ",v[k]);
            np++;
        }
    }
    printf("%d\n",np);
    return 0;
}