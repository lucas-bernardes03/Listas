#include <stdio.h>
#include <math.h>
double raiz(double n, double e);

int main(){
    double n,e;
    scanf("%lf %lf",&n,&e);
    raiz(n,e);
    return 0;
}

double raiz(double n, double e){
    double temp,res,erro;
    res = 1;
    do{
        temp = (res+n/res)/2;
        res = temp;
        erro = fabs(n-res*res);
        printf("r: %.9lf, err: %.9lf\n",res,erro);
    } while(erro>e);
}