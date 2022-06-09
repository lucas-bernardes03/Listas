#include <stdio.h>
int main(){
    int n,fat,initn;
    scanf("%d",&n);
    
    initn = n;
    fat = n;
    
    while(n>1){
    fat *= (n-1);
    n--;
    }
    if(n==0) printf("0! = 1\n");
    else printf("%d! = %d\n",initn,fat);
    return 0;
}