#include <stdio.h>

double compute_pi(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%.12lf\n",compute_pi(n));
    return 0;
}

double compute_pi(int n){
    int i;
    double pi,div,den;
    pi = 2;
    div = 2;
    den = 1;
    for(i=1;i<n;i++){
        if(div<den){
            div += 2;
            pi *= (div/den);
        }
        else{
            den += 2;
            pi *= (div/den);
        }
    }
    return pi*2;
}