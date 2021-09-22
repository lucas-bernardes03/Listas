#include <stdio.h>

int main (){
    int n[1000],index[1000];
    int n_a,k,i,ot=0,j=0;
    scanf("%d %d",&n_a,&k);
    for(i=0;i<n_a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<n_a;i++){
        if(n[i] <= 0){
            ot++;
            index[j] = i+1;
            j++;
        }
    }
    if(ot >= k) printf("NAO\n");
    else {
        printf("SIM\n");
        return 0;
    }
    
    while(j>0){
        printf("%d\n",index[j-1]);
        j--;
    }

    return 0;
}