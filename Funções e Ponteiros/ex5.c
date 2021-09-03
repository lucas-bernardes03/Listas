#include <stdio.h> 
#include <math.h>

void raizesEq2Grau(double a, double b, double c, double*x1, double*x2, int*tipo);

int main(){
    double a,b,c;
    double x1,x2,temp;
    int tipo;
    scanf("%lf %lf %lf",&a,&b,&c);
    raizesEq2Grau(a,b,c,&x1,&x2,&tipo);
    if(tipo==0) printf("RAIZES IMAGINARIAS\n");
    else if(tipo==1) printf("RAIZ UNICA\nX1 = %.2lf\n",x1);
    else{
        if(x1>x2){
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n",x1);
        printf("X2 = %.2lf\n",x2);
    }
    return 0;
}

void raizesEq2Grau(double a, double b, double c, double*x1, double*x2, int*tipo){
    double delta;
    delta = b*b - 4*a*c;
    if(a==0){
        *tipo = 1;
        *x1 = -c/b;
    }
    else{
        if(delta<0) *tipo = 0;
        else if(delta==0){
            *x1 = -b/(2*a);
            *tipo = 1;
        } 
        else {
            *x1 = (-b + sqrt(delta))/(2*a);
            *x2 = (-b - sqrt(delta))/(2*a);
            *tipo = 2;
        }
    }
    
}