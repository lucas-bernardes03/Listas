#include <stdio.h>

int main(){
    double num,prev;
    int n,i,ord;
    ord = 0;
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        for(i=1;i<=n;i++){
            scanf("%lf",&num);
            if(i==1){
                prev = num;
            }
            else{
                if(num>=prev) prev = num;
                else ord++;
            }
        }
        if(ord>0) printf("DESORDENADA\n");
        else printf("ORDENADA\n");
        ord = 0;
    }

    return 0;
}