#include <stdio.h>

int main(){
    int n,soma_par,soma_impar;
    double mp,mi,kp,ki;
    soma_par = 0;
    soma_impar = 0;
    kp = 0;
    ki = 0;

    while(1){
        scanf("%d", &n);
        if(n==0) break;
        
        if(n%2==0){
            soma_par += n;
            kp++;
        }
        else{
            soma_impar += n;
            ki++;
        }
    }
    
    if(kp==0) mp = 0.0;
    else mp = soma_par/kp;
    
    if(ki==0) mi = 0.0;
    else mi = soma_impar/ki;
    
    
    printf("MEDIA PAR: %lf\nMEDIA IMPAR: %lf\n",mp,mi);
    
    return 0;
}