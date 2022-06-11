#include <stdio.h>
#include <math.h>

int fat(int n);

int main(){
    unsigned long int n, N;
    double x, sen;
    scanf("%lf %lu",&x,&N);
    sen = 0;
    for(n=0;n<=N;n++){
        sen += (pow(-1,n)*pow(x,2*n+1))/fat(2*n+1);
    }
    printf("seno(%.2lf) = %lf\n",x,sen);

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