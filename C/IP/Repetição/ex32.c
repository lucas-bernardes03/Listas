#include <stdio.h>
#include <math.h>

int fat(int n);

int main(){
    int N,n;
    long double x, res;
    scanf("%Lf %d",&x,&N);
    res = 0;
    for(n=0;n<=N;n++){
        res += powl(x,n)/fat(n);
    }
    
    printf("e^%.2Lf = %Lf\n",x,res);
    
    return 0;
}

int fat(int n){
    int fat;
    fat = 1;
    while(n>1){
        fat *= n;
        n--;
    }
    return fat;
}