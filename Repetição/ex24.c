#include <stdio.h>

int main(){
    int a,b,c,k,p,nd,num;
    scanf("%d %d %d",&a,&b,&c);
    
    nd = 1;
    num = 1;

    for(k=2;k>0;k++){
        for(p=2;p<=k;p++){
            if(k%p==0) nd++;
        }
        if(nd==2){
            while(a%k==0 || b%k==0 || c%k==0){
                printf("%d %d %d :%d\n",a,b,c,k);
                if(a%k==0) a /= k;
                if(b%k==0) b /= k;
                if(c%k==0) c /= k;
                num *= k;
            }
        }
        nd=1;
        if(a==1 && b==1 && c==1) break;
    }
    printf("MMC: %d\n",num);
    return 0;
}