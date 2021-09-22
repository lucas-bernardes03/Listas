#include <stdio.h>

int main(){
    int v[1000], w[1000];
    int n,i,maior,menor;
    scanf("%d",&n);

    for(i=0;i<n;i++) scanf("%d",&v[i]);
    for(i=0;i<n;i++) {
        printf("%d",v[i]);
        if(i+1!=n) printf(" ");
    }

    printf("\n");
    
    for(i=0;i<n;i++) w[n-1-i] = v[i];
    for(i=0;i<n;i++) {
        printf("%d",w[i]);
        if(i+1!=n) printf(" ");
    }
    printf("\n");
    
    maior = v[0];
    menor = v[0];
    for(i=0;i<n;i++){
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }

    printf("%d\n",maior);
    printf("%d\n",menor);    

    return 0;
}