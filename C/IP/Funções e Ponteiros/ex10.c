#include <stdio.h>
#include <math.h>

int next_power(int n, int p);

int main (){
    int n,p,res;
    scanf("%d %d",&n,&p);
    next_power(n,p);
    res = pow(next_power(n,p),p);
    printf("%d -> %d^%d = %d\n",n,next_power(n,p),p,res);
    return 0;
}

int next_power(int n, int p){
    int i,pw,min,p_min;
    min=n;
    for(i=1;i<=n;i++){
        pw = pow(i,p);
        if(fabs(n-pw)<min){
            min = fabs(n-pw);
            p_min = i;
        } 
    }
    return p_min;
}