#include <stdio.h>
#include <math.h>

int fat(int n);

int main(){
    int N,n;
    double x,cos;
    scanf("%lf %d",&x,&N);

    for(n=0;n<=N;n++){
        cos += (powl(-1,n)*powl(x,2*n))/fat(2*n);
    }

    printf("cos(%.2lf) = %lf\n",x,cos);
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