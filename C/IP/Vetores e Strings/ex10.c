#include <stdio.h>

int main(){
    char bin[32];
    int n,a,k,i,j;
    long long base;
    while(1){
        a = scanf("%d",&n);
        if(a == EOF) break;
        if(n == 0) printf("0");
        base = 2147483648;
        for(i=0;i<32;i++){
            bin[i] = n/base;
            n = n%base;
            base /= 2;
        }
        j=0;
        for(i=0;i<32;i++){
            if(bin[i]==0) j++;
            else break;
        }
        for(i=j;i<32;i++){
            printf("%d",bin[i]);
        }
        printf("\n");
    }
    return 0;
}