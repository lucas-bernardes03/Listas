#include <stdio.h>

int main(){
    
    double n,i,k,s,cont;
    scanf("%lf %lf %lf %lf",&n,&i,&k,&s);

    printf("Tabuada de soma:\n");
    for(cont=0;cont<k;cont++){
        printf("%.2lf + %.2lf = %.2lf\n",n,i+(cont*s),n+i+(cont*s));
    }
    printf("Tabuada de subtracao:\n");
    for(cont=0;cont<k;cont++){
        printf("%.2lf - %.2lf = %.2lf\n",n,i+(cont*s),n-i-(cont*s));
    }
    printf("Tabuada de multiplicacao:\n");
    for(cont=0;cont<k;cont++){
        printf("%.2lf x %.2lf = %.2lf\n",n,i+(cont*s),n*(i+cont*s));
    }
    printf("Tabuada de divisao:\n");
    for(cont=0;cont<k;cont++){
        printf("%.2lf / %.2lf = %.2lf\n",n,i+(cont*s),n/(i+cont*s));
    }
    return 0;
}