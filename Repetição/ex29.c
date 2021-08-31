#include <stdio.h>
#include <math.h>
int main(){
    double n;
    int num, den,i,k,comp;
    scanf("%lf",&n);
    i=0;
    
    while(floorf(n) != ceilf(n)){
        n *= 10;
        i++;
    }
    num = n;
    den = pow(10,i);
    
    comp = num;
    if(comp<den) comp = den;
    
    for(k=2;k<=comp;k++){
        if(num%k==0 && den%k==0){
            num /= k;
            den /= k;
            k=2;
        }
    }

    printf("%d/%d\n",num,den);
    return 0;
}