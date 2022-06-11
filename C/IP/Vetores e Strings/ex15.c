#include <stdio.h>
#include <math.h>

int main(){
    int t,n,i,k,j;
    int dist_min, dist;
    int vet[1000];

    scanf("%d",&t);

    while(t>0){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&vet[i]);
        }
        
        dist = 2001;
        dist_min = 2001;

        for(i=0;i<n;i++){
            k = vet[i];
            for(j=i+1;j<n;j++){
                dist = fabs(k - vet[j]);
                if(dist < dist_min) dist_min = dist;
            }
        }

        printf("%d %d\n",dist_min,n*n);
        t--;
    }
    return 0;
}