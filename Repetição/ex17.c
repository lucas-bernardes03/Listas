#include <stdio.h>
#include <math.h>

int main(){
    
    double n,e,r,temp,erro;
    scanf("%lf %lf",&n,&e);
    
    r = 1;

    do{
        temp = (r+n/r)/2;
        r = temp;
        erro = fabs(n-r*r);
        printf("r: %.9lf, err: %.9lf\n",r,erro);
    } while(erro>e);

    return 0;
}